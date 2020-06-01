#define PLUGIN_CONTEXT

/* Can't use <my_global.h> as this includes plugin.h */
#include <stdio.h>

typedef void *MYSQL_THD;
struct st_mysql_const_lex_string
{
  const char *str;
  size_t length;
};
typedef struct st_mysql_const_lex_string MYSQL_LEX_CSTRING;
enum enum_sql_command{ SQLCOM_A, SQLCOM_B };
enum enum_server_command{ SERVCOM_A, SERVCOM_B };

#include "plugin_audit_v4.h"
#include <time.h>
#include <string.h>

extern void auditing(MYSQL_THD thd, unsigned int event_class, const void *ev);
extern int get_db_mysql57(MYSQL_THD thd, char **name, int *len);
extern struct connection_info *get_loc_info(MYSQL_THD thd);


struct mysql_event_general_302
{
  unsigned int event_subclass;
  int general_error_code;
  unsigned long general_thread_id;
  const char *general_user;
  unsigned int general_user_length;
  const char *general_command;
  unsigned int general_command_length;
  const char *general_query;
  unsigned int general_query_length;
  struct charset_info_st *general_charset;
  unsigned long long general_time;
  unsigned long long general_rows;
  unsigned long long query_id;
  char *database;
  int database_length;
};

struct mysql_connection_info
{
  int header;
  unsigned long thread_id;
  unsigned long long query_id;
  char db[256];
  int db_length;
  char user[64];
  int user_length;
  char host[64];
  int host_length;
  char ip[64];
  int ip_length;
  const char *query;
  int query_length;
  char query_buffer[1024];
  time_t query_time;
  int log_always;
  int in_procedure;
};

static int auditing_v4(MYSQL_THD thd, mysql_event_class_t class, const void *ev)
{
  int *subclass= (int *)ev;
  struct mysql_event_general_302 ev_302;
  int subclass_v3, subclass_orig;

  if (class != MYSQL_AUDIT_GENERAL_CLASS &&
      class != MYSQL_AUDIT_CONNECTION_CLASS && 
      class != MYSQL_AUDIT_QUERY_CLASS)
    return 0;

  subclass_orig= *subclass;
  
  if (class == MYSQL_AUDIT_QUERY_CLASS) {
    int SQLCOM_CALL_INT = 91;  // SQLCOM_CALL int value
    const struct mysql_event_query *event_query = (const struct mysql_event_query*) ev;
    void *loc_info = get_loc_info(thd);
    struct mysql_connection_info *cn = (struct mysql_connection_info*)loc_info;
    if (cn->in_procedure != 0 && cn->in_procedure != 1) {
      // init in_procedure
      cn->in_procedure = 0;
    }

    // handle 'call proc()' query
    if (SQLCOM_CALL_INT == (int)event_query->sql_command_id) {
      if (0 == cn->header) {
        if (MYSQL_AUDIT_QUERY_START == subclass_orig) {
          cn->in_procedure = 1;
        } else if (MYSQL_AUDIT_QUERY_STATUS_END == subclass_orig){
          cn->in_procedure = 0;
        }
      }
      return 0;
    }

    // check if cn already inited and current sql is in procedure
    if (cn->header != 0 || !cn->in_procedure) {
      return 0;
    }
    // handle statements in procedure
    // construct mysql general event
    class = MYSQL_AUDIT_GENERAL_CLASS;
    // subclass_v3 = 0;
    if (MYSQL_AUDIT_QUERY_NESTED_START == subclass_orig) {
      ev_302.event_subclass= 0;
    } else if (MYSQL_AUDIT_QUERY_NESTED_STATUS_END == subclass_orig) {
      ev_302.event_subclass= 3;
    }

    ev_302.general_error_code= event_query->status;
    ev_302.general_thread_id= cn->thread_id;
    ev_302.general_user= cn->user;
    ev_302.general_user_length= (unsigned int)cn->user_length;
    ev_302.general_command= "Query";
    ev_302.general_command_length= 5;
    ev_302.general_query= event_query->query.str;
    ev_302.general_query_length= (unsigned int)event_query->query.length;
    // ev_302.general_charset=;
    ev_302.general_time= cn->query_time;
    // ev_302.general_rows= event->general_rows;
    if (get_db_mysql57(thd, &ev_302.database, &ev_302.database_length))
    {
      ev_302.database= 0;
      ev_302.database_length= 0;
    }

    ev= &ev_302;
  }
  else if (class == MYSQL_AUDIT_GENERAL_CLASS)
  {
    struct mysql_event_general *event= (struct mysql_event_general *) ev;
    ev_302.general_error_code= event->general_error_code;
    ev_302.general_thread_id= event->general_thread_id;
    ev_302.general_user= event->general_user.str;
    ev_302.general_user_length= (unsigned int)event->general_user.length;
    ev_302.general_command= event->general_command.str;
    ev_302.general_command_length= (unsigned int)event->general_command.length;
    ev_302.general_query= event->general_query.str;
    ev_302.general_query_length= (unsigned int)event->general_query.length;
    ev_302.general_charset= event->general_charset;
    ev_302.general_time= event->general_time;
    ev_302.general_rows= event->general_rows;
    if (get_db_mysql57(thd, &ev_302.database, &ev_302.database_length))
    {
      ev_302.database= 0;
      ev_302.database_length= 0;
    }
    if (event->event_subclass == MYSQL_AUDIT_GENERAL_STATUS &&
        event->general_command.str &&
        !strncmp("call_procedure", event->general_sql_command.str, 
                 event->general_sql_command.length)) {
      
      return 0;
    }
    ev= &ev_302;
    switch (subclass_orig)
    {
      case MYSQL_AUDIT_GENERAL_LOG:
        subclass_v3= 0;
        ev_302.event_subclass= 0;
        break;
      case MYSQL_AUDIT_GENERAL_ERROR:
        subclass_v3= 1;
        ev_302.event_subclass= 1;
        break;
      case MYSQL_AUDIT_GENERAL_RESULT:
        subclass_v3= 2;
        ev_302.event_subclass= 2;
        break;
      case MYSQL_AUDIT_GENERAL_STATUS:
      {
        subclass_v3= 3;
        ev_302.event_subclass= 3;
        break;
      }
      default:
        return 0;
    }
  }
  else /* if (class == MYSQL_AUDIT_CONNECTION_CLASS) */
  {
    switch (subclass_orig)
    {
      case MYSQL_AUDIT_CONNECTION_CONNECT:
        subclass_v3= 0;
        break;
      case MYSQL_AUDIT_CONNECTION_DISCONNECT:
        subclass_v3= 1;
        break;
      default:
        return 0;
    }
  }

  *subclass= subclass_v3;

  auditing(thd, (int) class, ev);

  *subclass= subclass_orig;
  return 0;
}


static struct st_mysql_audit mysql_descriptor =
{
  MYSQL_AUDIT_INTERFACE_VERSION,
  NULL,
  auditing_v4,
  { (unsigned long) MYSQL_AUDIT_GENERAL_ALL,
    (unsigned long) MYSQL_AUDIT_CONNECTION_ALL,
    (unsigned long) MYSQL_AUDIT_PARSE_ALL,
    0, /* This event class is currently not supported. */
    0, /* This event class is currently not supported. */
    (unsigned long) MYSQL_AUDIT_GLOBAL_VARIABLE_ALL,
    (unsigned long) MYSQL_AUDIT_SERVER_STARTUP_ALL,
    (unsigned long) MYSQL_AUDIT_SERVER_SHUTDOWN_ALL,
    (unsigned long) MYSQL_AUDIT_COMMAND_ALL,
    (unsigned long) MYSQL_AUDIT_QUERY_ALL,
    (unsigned long) MYSQL_AUDIT_STORED_PROGRAM_ALL }
#ifdef WHEN_MYSQL_BUG_FIXED
  /*
    By this moment MySQL just sends no notifications at all
    when we request only those we actually need.
    So we have to request everything and filter them inside the
    handling function.                                
  */
  { (unsigned long) MYSQL_AUDIT_GENERAL_ALL,
    (unsigned long) (MYSQL_AUDIT_CONNECTION_CONNECT |
                     MYSQL_AUDIT_CONNECTION_DISCONNECT),
    0,
    0, /* This event class is currently not supported. */
    0, /* This event class is currently not supported. */
    0,
    0,
    0,
    0,
    0,
    0
  }
#endif /*WHEN_MYSQL_BUG_FIXED*/
};


void *mysql_v4_descriptor= &mysql_descriptor;

