/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_HH_INCLUDED
# define YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int MYSQLdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABORT_SYM = 258,
    ACCESSIBLE_SYM = 259,
    ADD = 260,
    ALL = 261,
    ALTER = 262,
    ANALYZE_SYM = 263,
    AND_AND_SYM = 264,
    AND_SYM = 265,
    AS = 266,
    ASC = 267,
    ASENSITIVE_SYM = 268,
    BEFORE_SYM = 269,
    BETWEEN_SYM = 270,
    BIGINT = 271,
    BINARY = 272,
    BIN_NUM = 273,
    BIT_AND = 274,
    BIT_OR = 275,
    BIT_XOR = 276,
    BLOB_MARIADB_SYM = 277,
    BLOB_ORACLE_SYM = 278,
    BODY_ORACLE_SYM = 279,
    BOTH = 280,
    BY = 281,
    CALL_SYM = 282,
    CASCADE = 283,
    CASE_SYM = 284,
    CAST_SYM = 285,
    CHANGE = 286,
    CHAR_SYM = 287,
    CHECK_SYM = 288,
    COLLATE_SYM = 289,
    CONDITION_SYM = 290,
    CONSTRAINT = 291,
    CONTINUE_MARIADB_SYM = 292,
    CONTINUE_ORACLE_SYM = 293,
    CONVERT_SYM = 294,
    COUNT_SYM = 295,
    CREATE = 296,
    CROSS = 297,
    CUME_DIST_SYM = 298,
    CURDATE = 299,
    CURRENT_USER = 300,
    CURRENT_ROLE = 301,
    CURSOR_SYM = 302,
    CURTIME = 303,
    DATABASE = 304,
    DATABASES = 305,
    DATE_ADD_INTERVAL = 306,
    DATE_SUB_INTERVAL = 307,
    DAY_HOUR_SYM = 308,
    DAY_MICROSECOND_SYM = 309,
    DAY_MINUTE_SYM = 310,
    DAY_SECOND_SYM = 311,
    DECIMAL_NUM = 312,
    DECIMAL_SYM = 313,
    DECLARE_MARIADB_SYM = 314,
    DECLARE_ORACLE_SYM = 315,
    DEFAULT = 316,
    DELETE_DOMAIN_ID_SYM = 317,
    DELETE_SYM = 318,
    DENSE_RANK_SYM = 319,
    DESC = 320,
    DESCRIBE = 321,
    DETERMINISTIC_SYM = 322,
    DISTINCT = 323,
    DIV_SYM = 324,
    DOUBLE_SYM = 325,
    DO_DOMAIN_IDS_SYM = 326,
    DOT_DOT_SYM = 327,
    DROP = 328,
    DUAL_SYM = 329,
    EACH_SYM = 330,
    ELSE = 331,
    ELSEIF_MARIADB_SYM = 332,
    ELSIF_ORACLE_SYM = 333,
    ENCLOSED = 334,
    END_OF_INPUT = 335,
    EQUAL_SYM = 336,
    ESCAPED = 337,
    EXCEPT_SYM = 338,
    EXISTS = 339,
    EXTRACT_SYM = 340,
    FALSE_SYM = 341,
    FETCH_SYM = 342,
    FIRST_VALUE_SYM = 343,
    FLOAT_NUM = 344,
    FLOAT_SYM = 345,
    FORCE_LOOKAHEAD = 346,
    FOREIGN = 347,
    FOR_SYM = 348,
    FOR_SYSTEM_TIME_SYM = 349,
    FROM = 350,
    FULLTEXT_SYM = 351,
    GE = 352,
    GOTO_ORACLE_SYM = 353,
    GRANT = 354,
    GROUP_SYM = 355,
    GROUP_CONCAT_SYM = 356,
    LAG_SYM = 357,
    LEAD_SYM = 358,
    HAVING = 359,
    HEX_NUM = 360,
    HEX_STRING = 361,
    HOUR_MICROSECOND_SYM = 362,
    HOUR_MINUTE_SYM = 363,
    HOUR_SECOND_SYM = 364,
    IDENT = 365,
    IDENT_QUOTED = 366,
    IF_SYM = 367,
    IGNORE_DOMAIN_IDS_SYM = 368,
    IGNORE_SYM = 369,
    INDEX_SYM = 370,
    INFILE = 371,
    INNER_SYM = 372,
    INOUT_SYM = 373,
    INSENSITIVE_SYM = 374,
    INSERT = 375,
    INTERSECT_SYM = 376,
    INTERVAL_SYM = 377,
    INTO = 378,
    INT_SYM = 379,
    IN_SYM = 380,
    IS = 381,
    ITERATE_SYM = 382,
    JOIN_SYM = 383,
    KEYS = 384,
    KEY_SYM = 385,
    KILL_SYM = 386,
    LE = 387,
    LEADING = 388,
    LEAVE_SYM = 389,
    LEFT = 390,
    LEFT_PAREN_ALT = 391,
    LEFT_PAREN_WITH = 392,
    LEFT_PAREN_LIKE = 393,
    LEX_HOSTNAME = 394,
    LIKE = 395,
    LIMIT = 396,
    LINEAR_SYM = 397,
    LINES = 398,
    LOAD = 399,
    LOCATOR_SYM = 400,
    LOCK_SYM = 401,
    LONGBLOB = 402,
    LONGTEXT = 403,
    LONG_NUM = 404,
    LONG_SYM = 405,
    LOOP_SYM = 406,
    LOW_PRIORITY = 407,
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 408,
    MATCH = 409,
    MAX_SYM = 410,
    MAXVALUE_SYM = 411,
    MEDIAN_SYM = 412,
    MEDIUMBLOB = 413,
    MEDIUMINT = 414,
    MEDIUMTEXT = 415,
    MINUTE_MICROSECOND_SYM = 416,
    MINUTE_SECOND_SYM = 417,
    MIN_SYM = 418,
    MODIFIES_SYM = 419,
    MOD_SYM = 420,
    MYSQL_CONCAT_SYM = 421,
    NATURAL = 422,
    NCHAR_STRING = 423,
    NE = 424,
    NEG = 425,
    NOT2_SYM = 426,
    NOT_SYM = 427,
    NOW_SYM = 428,
    NO_WRITE_TO_BINLOG = 429,
    NTILE_SYM = 430,
    NULL_SYM = 431,
    NUM = 432,
    NUMERIC_SYM = 433,
    NTH_VALUE_SYM = 434,
    ON = 435,
    OPTIMIZE = 436,
    OPTIONALLY = 437,
    ORACLE_CONCAT_SYM = 438,
    OR2_SYM = 439,
    ORDER_SYM = 440,
    OR_SYM = 441,
    OTHERS_ORACLE_SYM = 442,
    OUTER = 443,
    OUTFILE = 444,
    OUT_SYM = 445,
    OVER_SYM = 446,
    PACKAGE_ORACLE_SYM = 447,
    PAGE_CHECKSUM_SYM = 448,
    PARAM_MARKER = 449,
    PARSE_VCOL_EXPR_SYM = 450,
    PARTITION_SYM = 451,
    PERCENT_ORACLE_SYM = 452,
    PERCENT_RANK_SYM = 453,
    PERCENTILE_CONT_SYM = 454,
    PERCENTILE_DISC_SYM = 455,
    PORTION_SYM = 456,
    POSITION_SYM = 457,
    PRECISION = 458,
    PRIMARY_SYM = 459,
    PROCEDURE_SYM = 460,
    PURGE = 461,
    RAISE_ORACLE_SYM = 462,
    RANGE_SYM = 463,
    RANK_SYM = 464,
    READS_SYM = 465,
    READ_SYM = 466,
    READ_WRITE_SYM = 467,
    REAL = 468,
    RECURSIVE_SYM = 469,
    REF_SYSTEM_ID_SYM = 470,
    REFERENCES = 471,
    REGEXP = 472,
    RELEASE_SYM = 473,
    RENAME = 474,
    REPEAT_SYM = 475,
    REPLACE = 476,
    REQUIRE_SYM = 477,
    RESIGNAL_SYM = 478,
    RESTRICT = 479,
    RETURNING_SYM = 480,
    RETURN_MARIADB_SYM = 481,
    RETURN_ORACLE_SYM = 482,
    REVOKE = 483,
    RIGHT = 484,
    ROWS_SYM = 485,
    ROWTYPE_ORACLE_SYM = 486,
    ROW_NUMBER_SYM = 487,
    SECOND_MICROSECOND_SYM = 488,
    SELECT_SYM = 489,
    SENSITIVE_SYM = 490,
    SEPARATOR_SYM = 491,
    SERVER_OPTIONS = 492,
    SET = 493,
    SET_VAR = 494,
    SHIFT_LEFT = 495,
    SHIFT_RIGHT = 496,
    SHOW = 497,
    SIGNAL_SYM = 498,
    SMALLINT = 499,
    SPATIAL_SYM = 500,
    SPECIFIC_SYM = 501,
    SQLEXCEPTION_SYM = 502,
    SQLSTATE_SYM = 503,
    SQLWARNING_SYM = 504,
    SQL_BIG_RESULT = 505,
    SQL_SMALL_RESULT = 506,
    SQL_SYM = 507,
    SSL_SYM = 508,
    STARTING = 509,
    STATS_AUTO_RECALC_SYM = 510,
    STATS_PERSISTENT_SYM = 511,
    STATS_SAMPLE_PAGES_SYM = 512,
    STDDEV_SAMP_SYM = 513,
    STD_SYM = 514,
    STRAIGHT_JOIN = 515,
    SUBSTRING = 516,
    SUM_SYM = 517,
    SYSDATE = 518,
    TABLE_REF_PRIORITY = 519,
    TABLE_SYM = 520,
    TERMINATED = 521,
    TEXT_STRING = 522,
    THEN_SYM = 523,
    TINYBLOB = 524,
    TINYINT = 525,
    TINYTEXT = 526,
    TO_SYM = 527,
    TRAILING = 528,
    TRIGGER_SYM = 529,
    TRIM = 530,
    TRUE_SYM = 531,
    ULONGLONG_NUM = 532,
    UNDERSCORE_CHARSET = 533,
    UNDO_SYM = 534,
    UNION_SYM = 535,
    UNIQUE_SYM = 536,
    UNLOCK_SYM = 537,
    UNSIGNED = 538,
    UPDATE_SYM = 539,
    USAGE = 540,
    USE_SYM = 541,
    USING = 542,
    UTC_DATE_SYM = 543,
    UTC_TIMESTAMP_SYM = 544,
    UTC_TIME_SYM = 545,
    VALUES = 546,
    VALUES_IN_SYM = 547,
    VALUES_LESS_SYM = 548,
    VARBINARY = 549,
    VARCHAR = 550,
    VARIANCE_SYM = 551,
    VARYING = 552,
    VAR_SAMP_SYM = 553,
    WHEN_SYM = 554,
    WHERE = 555,
    WHILE_SYM = 556,
    WITH = 557,
    WITH_CUBE_SYM = 558,
    WITH_ROLLUP_SYM = 559,
    WITH_SYSTEM_SYM = 560,
    XOR = 561,
    YEAR_MONTH_SYM = 562,
    ZEROFILL = 563,
    IMPOSSIBLE_ACTION = 564,
    BODY_MARIADB_SYM = 565,
    ELSEIF_ORACLE_SYM = 566,
    ELSIF_MARIADB_SYM = 567,
    EXCEPTION_ORACLE_SYM = 568,
    GOTO_MARIADB_SYM = 569,
    OTHERS_MARIADB_SYM = 570,
    PACKAGE_MARIADB_SYM = 571,
    RAISE_MARIADB_SYM = 572,
    ROWTYPE_MARIADB_SYM = 573,
    ACCOUNT_SYM = 574,
    ACTION = 575,
    ADMIN_SYM = 576,
    ADDDATE_SYM = 577,
    AFTER_SYM = 578,
    AGAINST = 579,
    AGGREGATE_SYM = 580,
    ALGORITHM_SYM = 581,
    ALWAYS_SYM = 582,
    ANY_SYM = 583,
    ASCII_SYM = 584,
    AT_SYM = 585,
    ATOMIC_SYM = 586,
    AUTHORS_SYM = 587,
    AUTOEXTEND_SIZE_SYM = 588,
    AUTO_INC = 589,
    AUTO_SYM = 590,
    AVG_ROW_LENGTH = 591,
    AVG_SYM = 592,
    BACKUP_SYM = 593,
    BEGIN_MARIADB_SYM = 594,
    BEGIN_ORACLE_SYM = 595,
    BINLOG_SYM = 596,
    BIT_SYM = 597,
    BLOCK_SYM = 598,
    BOOL_SYM = 599,
    BOOLEAN_SYM = 600,
    BTREE_SYM = 601,
    BYTE_SYM = 602,
    CACHE_SYM = 603,
    CASCADED = 604,
    CATALOG_NAME_SYM = 605,
    CHAIN_SYM = 606,
    CHANGED = 607,
    CHARSET = 608,
    CHECKPOINT_SYM = 609,
    CHECKSUM_SYM = 610,
    CIPHER_SYM = 611,
    CLASS_ORIGIN_SYM = 612,
    CLIENT_SYM = 613,
    CLOB_MARIADB_SYM = 614,
    CLOB_ORACLE_SYM = 615,
    CLOSE_SYM = 616,
    COALESCE = 617,
    CODE_SYM = 618,
    COLLATION_SYM = 619,
    COLON_ORACLE_SYM = 620,
    COLUMNS = 621,
    COLUMN_ADD_SYM = 622,
    COLUMN_CHECK_SYM = 623,
    COLUMN_CREATE_SYM = 624,
    COLUMN_DELETE_SYM = 625,
    COLUMN_GET_SYM = 626,
    COLUMN_SYM = 627,
    COLUMN_NAME_SYM = 628,
    COMMENT_SYM = 629,
    COMMITTED_SYM = 630,
    COMMIT_SYM = 631,
    COMPACT_SYM = 632,
    COMPLETION_SYM = 633,
    COMPRESSED_SYM = 634,
    CONCURRENT = 635,
    CONNECTION_SYM = 636,
    CONSISTENT_SYM = 637,
    CONSTRAINT_CATALOG_SYM = 638,
    CONSTRAINT_NAME_SYM = 639,
    CONSTRAINT_SCHEMA_SYM = 640,
    CONTAINS_SYM = 641,
    CONTEXT_SYM = 642,
    CONTRIBUTORS_SYM = 643,
    CPU_SYM = 644,
    CUBE_SYM = 645,
    CURRENT_SYM = 646,
    CURRENT_POS_SYM = 647,
    CURSOR_NAME_SYM = 648,
    CYCLE_SYM = 649,
    DATAFILE_SYM = 650,
    DATA_SYM = 651,
    DATETIME = 652,
    DATE_FORMAT_SYM = 653,
    DATE_SYM = 654,
    DAY_SYM = 655,
    DEALLOCATE_SYM = 656,
    DECODE_MARIADB_SYM = 657,
    DECODE_ORACLE_SYM = 658,
    DEFINER_SYM = 659,
    DELAYED_SYM = 660,
    DELAY_KEY_WRITE_SYM = 661,
    DES_KEY_FILE = 662,
    DIAGNOSTICS_SYM = 663,
    DIRECTORY_SYM = 664,
    DISABLE_SYM = 665,
    DISCARD = 666,
    DISK_SYM = 667,
    DO_SYM = 668,
    DUMPFILE = 669,
    DUPLICATE_SYM = 670,
    DYNAMIC_SYM = 671,
    ENABLE_SYM = 672,
    END = 673,
    ENDS_SYM = 674,
    ENGINES_SYM = 675,
    ENGINE_SYM = 676,
    ENUM = 677,
    ERROR_SYM = 678,
    ERRORS = 679,
    ESCAPE_SYM = 680,
    EVENTS_SYM = 681,
    EVENT_SYM = 682,
    EVERY_SYM = 683,
    EXCHANGE_SYM = 684,
    EXAMINED_SYM = 685,
    EXCLUDE_SYM = 686,
    EXECUTE_SYM = 687,
    EXCEPTION_MARIADB_SYM = 688,
    EXIT_MARIADB_SYM = 689,
    EXIT_ORACLE_SYM = 690,
    EXPANSION_SYM = 691,
    EXPIRE_SYM = 692,
    EXPORT_SYM = 693,
    EXTENDED_SYM = 694,
    EXTENT_SIZE_SYM = 695,
    FAST_SYM = 696,
    FAULTS_SYM = 697,
    FILE_SYM = 698,
    FIRST_SYM = 699,
    FIXED_SYM = 700,
    FLUSH_SYM = 701,
    FOLLOWS_SYM = 702,
    FOLLOWING_SYM = 703,
    FORCE_SYM = 704,
    FORMAT_SYM = 705,
    FOUND_SYM = 706,
    FULL = 707,
    FUNCTION_SYM = 708,
    GENERAL = 709,
    GENERATED_SYM = 710,
    GEOMETRYCOLLECTION = 711,
    GEOMETRY_SYM = 712,
    GET_FORMAT = 713,
    GET_SYM = 714,
    GLOBAL_SYM = 715,
    GRANTS = 716,
    HANDLER_SYM = 717,
    HARD_SYM = 718,
    HASH_SYM = 719,
    HELP_SYM = 720,
    HIGH_PRIORITY = 721,
    HISTORY_SYM = 722,
    HOST_SYM = 723,
    HOSTS_SYM = 724,
    HOUR_SYM = 725,
    ID_SYM = 726,
    IDENTIFIED_SYM = 727,
    IGNORE_SERVER_IDS_SYM = 728,
    IMMEDIATE_SYM = 729,
    IMPORT = 730,
    INCREMENT_SYM = 731,
    INDEXES = 732,
    INITIAL_SIZE_SYM = 733,
    INSERT_METHOD = 734,
    INSTALL_SYM = 735,
    INVOKER_SYM = 736,
    IO_SYM = 737,
    IPC_SYM = 738,
    ISOLATION = 739,
    ISOPEN_SYM = 740,
    ISSUER_SYM = 741,
    INVISIBLE_SYM = 742,
    JSON_SYM = 743,
    KEY_BLOCK_SIZE = 744,
    LANGUAGE_SYM = 745,
    LAST_SYM = 746,
    LAST_VALUE = 747,
    LASTVAL_SYM = 748,
    LEAVES = 749,
    LESS_SYM = 750,
    LEVEL_SYM = 751,
    LINESTRING = 752,
    LIST_SYM = 753,
    LOCAL_SYM = 754,
    LOCKS_SYM = 755,
    LOGFILE_SYM = 756,
    LOGS_SYM = 757,
    MASTER_CONNECT_RETRY_SYM = 758,
    MASTER_DELAY_SYM = 759,
    MASTER_GTID_POS_SYM = 760,
    MASTER_HOST_SYM = 761,
    MASTER_LOG_FILE_SYM = 762,
    MASTER_LOG_POS_SYM = 763,
    MASTER_PASSWORD_SYM = 764,
    MASTER_PORT_SYM = 765,
    MASTER_SERVER_ID_SYM = 766,
    MASTER_SSL_CAPATH_SYM = 767,
    MASTER_SSL_CA_SYM = 768,
    MASTER_SSL_CERT_SYM = 769,
    MASTER_SSL_CIPHER_SYM = 770,
    MASTER_SSL_CRL_SYM = 771,
    MASTER_SSL_CRLPATH_SYM = 772,
    MASTER_SSL_KEY_SYM = 773,
    MASTER_SSL_SYM = 774,
    MASTER_SYM = 775,
    MASTER_USER_SYM = 776,
    MASTER_USE_GTID_SYM = 777,
    MASTER_HEARTBEAT_PERIOD_SYM = 778,
    MAX_CONNECTIONS_PER_HOUR = 779,
    MAX_QUERIES_PER_HOUR = 780,
    MAX_ROWS = 781,
    MAX_SIZE_SYM = 782,
    MAX_UPDATES_PER_HOUR = 783,
    MAX_STATEMENT_TIME_SYM = 784,
    MAX_USER_CONNECTIONS_SYM = 785,
    MEDIUM_SYM = 786,
    MEMORY_SYM = 787,
    MERGE_SYM = 788,
    MESSAGE_TEXT_SYM = 789,
    MICROSECOND_SYM = 790,
    MIGRATE_SYM = 791,
    MINUTE_SYM = 792,
    MINVALUE_SYM = 793,
    MIN_ROWS = 794,
    MODE_SYM = 795,
    MODIFY_SYM = 796,
    MONTH_SYM = 797,
    MULTILINESTRING = 798,
    MULTIPOINT = 799,
    MULTIPOLYGON = 800,
    MUTEX_SYM = 801,
    MYSQL_SYM = 802,
    MYSQL_ERRNO_SYM = 803,
    NAMES_SYM = 804,
    NAME_SYM = 805,
    NATIONAL_SYM = 806,
    NCHAR_SYM = 807,
    NEVER_SYM = 808,
    NEW_SYM = 809,
    NEXT_SYM = 810,
    NEXTVAL_SYM = 811,
    NOCACHE_SYM = 812,
    NOCYCLE_SYM = 813,
    NODEGROUP_SYM = 814,
    NONE_SYM = 815,
    NOTFOUND_SYM = 816,
    NO_SYM = 817,
    NOMAXVALUE_SYM = 818,
    NOMINVALUE_SYM = 819,
    NO_WAIT_SYM = 820,
    NOWAIT_SYM = 821,
    NUMBER_MARIADB_SYM = 822,
    NUMBER_ORACLE_SYM = 823,
    NVARCHAR_SYM = 824,
    OF_SYM = 825,
    OFFSET_SYM = 826,
    OLD_PASSWORD_SYM = 827,
    ONE_SYM = 828,
    ONLY_SYM = 829,
    ONLINE_SYM = 830,
    OPEN_SYM = 831,
    OPTIONS_SYM = 832,
    OPTION = 833,
    OWNER_SYM = 834,
    PACK_KEYS_SYM = 835,
    PAGE_SYM = 836,
    PARSER_SYM = 837,
    PARTIAL = 838,
    PARTITIONS_SYM = 839,
    PARTITIONING_SYM = 840,
    PASSWORD_SYM = 841,
    PERIOD_SYM = 842,
    PERSISTENT_SYM = 843,
    PHASE_SYM = 844,
    PLUGINS_SYM = 845,
    PLUGIN_SYM = 846,
    POINT_SYM = 847,
    POLYGON = 848,
    PORT_SYM = 849,
    PRECEDES_SYM = 850,
    PRECEDING_SYM = 851,
    PREPARE_SYM = 852,
    PRESERVE_SYM = 853,
    PREV_SYM = 854,
    PREVIOUS_SYM = 855,
    PRIVILEGES = 856,
    PROCESS = 857,
    PROCESSLIST_SYM = 858,
    PROFILE_SYM = 859,
    PROFILES_SYM = 860,
    PROXY_SYM = 861,
    QUARTER_SYM = 862,
    QUERY_SYM = 863,
    QUICK = 864,
    RAW_MARIADB_SYM = 865,
    RAW_ORACLE_SYM = 866,
    READ_ONLY_SYM = 867,
    REBUILD_SYM = 868,
    RECOVER_SYM = 869,
    REDOFILE_SYM = 870,
    REDO_BUFFER_SIZE_SYM = 871,
    REDUNDANT_SYM = 872,
    RELAY = 873,
    RELAYLOG_SYM = 874,
    RELAY_LOG_FILE_SYM = 875,
    RELAY_LOG_POS_SYM = 876,
    RELAY_THREAD = 877,
    RELOAD = 878,
    REMOVE_SYM = 879,
    REORGANIZE_SYM = 880,
    REPAIR = 881,
    REPEATABLE_SYM = 882,
    REPLICATION = 883,
    RESET_SYM = 884,
    RESTART_SYM = 885,
    RESOURCES = 886,
    RESTORE_SYM = 887,
    RESUME_SYM = 888,
    RETURNED_SQLSTATE_SYM = 889,
    RETURNS_SYM = 890,
    REUSE_SYM = 891,
    REVERSE_SYM = 892,
    ROLE_SYM = 893,
    ROLLBACK_SYM = 894,
    ROLLUP_SYM = 895,
    ROUTINE_SYM = 896,
    ROWCOUNT_SYM = 897,
    ROW_SYM = 898,
    ROW_COUNT_SYM = 899,
    ROW_FORMAT_SYM = 900,
    RTREE_SYM = 901,
    SAVEPOINT_SYM = 902,
    SCHEDULE_SYM = 903,
    SCHEMA_NAME_SYM = 904,
    SECOND_SYM = 905,
    SECURITY_SYM = 906,
    SEQUENCE_SYM = 907,
    SERIALIZABLE_SYM = 908,
    SERIAL_SYM = 909,
    SESSION_SYM = 910,
    SERVER_SYM = 911,
    SETVAL_SYM = 912,
    SHARE_SYM = 913,
    SHUTDOWN = 914,
    SIGNED_SYM = 915,
    SIMPLE_SYM = 916,
    SLAVE = 917,
    SLAVES = 918,
    SLAVE_POS_SYM = 919,
    SLOW = 920,
    SNAPSHOT_SYM = 921,
    SOCKET_SYM = 922,
    SOFT_SYM = 923,
    SONAME_SYM = 924,
    SOUNDS_SYM = 925,
    SOURCE_SYM = 926,
    SQL_BUFFER_RESULT = 927,
    SQL_CACHE_SYM = 928,
    SQL_CALC_FOUND_ROWS = 929,
    SQL_NO_CACHE_SYM = 930,
    SQL_THREAD = 931,
    STAGE_SYM = 932,
    STARTS_SYM = 933,
    START_SYM = 934,
    STATEMENT_SYM = 935,
    STATUS_SYM = 936,
    STOP_SYM = 937,
    STORAGE_SYM = 938,
    STORED_SYM = 939,
    STRING_SYM = 940,
    SUBCLASS_ORIGIN_SYM = 941,
    SUBDATE_SYM = 942,
    SUBJECT_SYM = 943,
    SUBPARTITIONS_SYM = 944,
    SUBPARTITION_SYM = 945,
    SUPER_SYM = 946,
    SUSPEND_SYM = 947,
    SWAPS_SYM = 948,
    SWITCHES_SYM = 949,
    SYSTEM = 950,
    SYSTEM_TIME_SYM = 951,
    TABLES = 952,
    TABLESPACE = 953,
    TABLE_CHECKSUM_SYM = 954,
    TABLE_NAME_SYM = 955,
    TEMPORARY = 956,
    TEMPTABLE_SYM = 957,
    TEXT_SYM = 958,
    THAN_SYM = 959,
    TIES_SYM = 960,
    TIMESTAMP = 961,
    TIMESTAMP_ADD = 962,
    TIMESTAMP_DIFF = 963,
    TIME_SYM = 964,
    TRANSACTION_SYM = 965,
    TRANSACTIONAL_SYM = 966,
    TRIGGERS_SYM = 967,
    TRIM_ORACLE = 968,
    TRUNCATE_SYM = 969,
    TYPES_SYM = 970,
    TYPE_SYM = 971,
    UDF_RETURNS_SYM = 972,
    UNBOUNDED_SYM = 973,
    UNCOMMITTED_SYM = 974,
    UNDEFINED_SYM = 975,
    UNDOFILE_SYM = 976,
    UNDO_BUFFER_SIZE_SYM = 977,
    UNICODE_SYM = 978,
    UNINSTALL_SYM = 979,
    UNKNOWN_SYM = 980,
    UNTIL_SYM = 981,
    UPGRADE_SYM = 982,
    USER_SYM = 983,
    USE_FRM = 984,
    VALUE_SYM = 985,
    VARCHAR2_MARIADB_SYM = 986,
    VARCHAR2_ORACLE_SYM = 987,
    VARIABLES = 988,
    VERSIONING_SYM = 989,
    VIA_SYM = 990,
    VIEW_SYM = 991,
    VIRTUAL_SYM = 992,
    WAIT_SYM = 993,
    WARNINGS = 994,
    WEEK_SYM = 995,
    WEIGHT_STRING_SYM = 996,
    WINDOW_SYM = 997,
    WITHIN = 998,
    WITHOUT = 999,
    WORK_SYM = 1000,
    WRAPPER_SYM = 1001,
    WRITE_SYM = 1002,
    X509_SYM = 1003,
    XA_SYM = 1004,
    XML_SYM = 1005,
    YEAR_SYM = 1006,
    CONDITIONLESS_JOIN = 1007,
    ON_SYM = 1008,
    PREC_BELOW_NOT = 1009,
    LOW_PRIORITY_NOT = 1010,
    SUBQUERY_AS_EXPR = 1011,
    PREC_BELOW_IDENTIFIER_OPT_SPECIAL_CASE = 1012,
    USER = 1013,
    PREC_BELOW_CONTRACTION_TOKEN2 = 1014,
    EMPTY_FROM_CLAUSE = 1015
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 699 "/home/buildbot/git/sql/sql_yacc.yy" /* yacc.c:1909  */

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  uint sp_instr_addr;

  /* structs */
  LEX_CSTRING lex_str;
  Lex_ident_cli_st kwd;
  Lex_ident_cli_st ident_cli;
  Lex_ident_sys_st ident_sys;
  Lex_string_with_metadata_st lex_string_with_metadata;
  Lex_spblock_st spblock;
  Lex_spblock_handlers_st spblock_handlers;
  Lex_length_and_dec_st Lex_length_and_dec;
  Lex_cast_type_st Lex_cast_type;
  Lex_field_type_st Lex_field_type;
  Lex_dyncol_type_st Lex_dyncol_type;
  Lex_for_loop_st for_loop;
  Lex_for_loop_bounds_st for_loop_bounds;
  Lex_trim_st trim;
  vers_history_point_t vers_history_point;
  struct
  {
    enum sub_select_type unit_type;
    bool distinct;
  } unit_operation;
  struct
  {
    SELECT_LEX *first;
    SELECT_LEX *prev_last;
  } select_list;
  SQL_I_List<ORDER> *select_order;
  Lex_select_lock select_lock;
  Lex_select_limit select_limit;
  Lex_order_limit_lock *order_limit_lock;

  /* pointers */
  Create_field *create_field;
  Spvar_definition *spvar_definition;
  Row_definition_list *spvar_definition_list;
  const Type_handler *type_handler;
  CHARSET_INFO *charset;
  Condition_information_item *cond_info_item;
  DYNCALL_CREATE_DEF *dyncol_def;
  Diagnostics_information *diag_info;
  Item *item;
  Item_num *item_num;
  Item_param *item_param;
  Item_basic_constant *item_basic_constant;
  Key_part_spec *key_part;
  LEX *lex;
  sp_assignment_lex *assignment_lex;
  class sp_lex_cursor *sp_cursor_stmt;
  LEX_CSTRING *lex_str_ptr;
  LEX_USER *lex_user;
  USER_AUTH *user_auth;
  List<Condition_information_item> *cond_info_list;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;
  List<Item> *item_list;
  List<sp_assignment_lex> *sp_assignment_lex_list;
  List<Statement_information_item> *stmt_info_list;
  List<String> *string_list;
  List<LEX_CSTRING> *lex_str_list;
  Statement_information_item *stmt_info_item;
  String *string;
  TABLE_LIST *table_list;
  Table_ident *table;
  Qualified_column_ident *qualified_column_ident;
  char *simple_string;
  const char *const_simple_string;
  chooser_compare_func_creator boolfunc2creator;
  class my_var *myvar;
  class sp_condition_value *spcondvalue;
  class sp_head *sphead;
  class sp_name *spname;
  class sp_variable *spvar;
  class With_element_head *with_element_head;
  class With_clause *with_clause;
  class Virtual_column_info *virtual_column;

  handlerton *db_type;
  st_select_lex *select_lex;
  st_select_lex_unit *select_lex_unit;
  struct p_elem_val *p_elem_value;
  class Window_frame *window_frame;
  class Window_frame_bound *window_frame_bound;
  udf_func *udf;
  st_trg_execution_order trg_execution_order;

  /* enums */
  enum enum_sp_suid_behaviour sp_suid;
  enum enum_sp_aggregate_type sp_aggregate_type;
  enum enum_view_suid view_suid;
  enum Condition_information_item::Name cond_info_item_name;
  enum enum_diag_condition_item_name diag_condition_item_name;
  enum Diagnostics_information::Which_area diag_area;
  enum Field::geometry_type geom_type;
  enum enum_fk_option m_fk_option;
  enum Item_udftype udf_type;
  enum Key::Keytype key_type;
  enum Statement_information_item::Name stmt_info_item_name;
  enum enum_filetype filetype;
  enum enum_tx_isolation tx_isolation;
  enum enum_var_type var_type;
  enum enum_yes_no_unknown m_yes_no_unk;
  enum ha_choice choice;
  enum ha_key_alg key_alg;
  enum ha_rkey_function ha_rkey_mode;
  enum index_hint_type index_hint;
  enum interval_type interval, interval_time_st;
  enum row_type row_type;
  enum sp_variable::enum_mode spvar_mode;
  enum thr_lock_type lock_type;
  enum enum_mysql_timestamp_type date_time_type;
  enum Window_frame_bound::Bound_precedence_type bound_precedence_type;
  enum Window_frame::Frame_units frame_units;
  enum Window_frame::Frame_exclusion frame_exclusion;
  enum trigger_order_type trigger_action_order_type;
  DDL_options_st object_ddl_options;
  enum vers_sys_type_t vers_range_unit;
  enum Column_definition::enum_column_versioning vers_column_versioning;
  enum plsql_cursor_attr_t plsql_cursor_attr;

#line 941 "/home/buildbot/git/mkdist/sql/sql_yacc.hh" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int MYSQLparse (THD *thd);

#endif /* !YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_HH_INCLUDED  */
