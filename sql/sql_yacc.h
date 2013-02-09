
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADDDATE_SYM = 262,
     AFTER_SYM = 263,
     AGAINST = 264,
     AGGREGATE_SYM = 265,
     ALGORITHM_SYM = 266,
     ALL = 267,
     ALTER = 268,
     ALWAYS_SYM = 269,
     ANALYZE_SYM = 270,
     AND_AND_SYM = 271,
     AND_SYM = 272,
     ANY_SYM = 273,
     AS = 274,
     ASC = 275,
     ASCII_SYM = 276,
     ASENSITIVE_SYM = 277,
     AT_SYM = 278,
     AUTHORS_SYM = 279,
     AUTOEXTEND_SIZE_SYM = 280,
     AUTO_INC = 281,
     AVG_ROW_LENGTH = 282,
     AVG_SYM = 283,
     BACKUP_SYM = 284,
     BEFORE_SYM = 285,
     BEGIN_SYM = 286,
     BETWEEN_SYM = 287,
     BIGINT = 288,
     BINARY = 289,
     BINLOG_SYM = 290,
     BIN_NUM = 291,
     BIT_AND = 292,
     BIT_OR = 293,
     BIT_SYM = 294,
     BIT_XOR = 295,
     BLOB_SYM = 296,
     BLOCK_SYM = 297,
     BOOLEAN_SYM = 298,
     BOOL_SYM = 299,
     BOTH = 300,
     BTREE_SYM = 301,
     BY = 302,
     BYTE_SYM = 303,
     CACHE_SYM = 304,
     CALL_SYM = 305,
     CASCADE = 306,
     CASCADED = 307,
     CASE_SYM = 308,
     CAST_SYM = 309,
     CATALOG_NAME_SYM = 310,
     CHAIN_SYM = 311,
     CHANGE = 312,
     CHANGED = 313,
     CHARSET = 314,
     CHAR_SYM = 315,
     CHECKPOINT_SYM = 316,
     CHECKSUM_SYM = 317,
     CHECK_SYM = 318,
     CIPHER_SYM = 319,
     CLASS_ORIGIN_SYM = 320,
     CLIENT_SYM = 321,
     CLIENT_STATS_SYM = 322,
     CLOSE_SYM = 323,
     COALESCE = 324,
     CODE_SYM = 325,
     COLLATE_SYM = 326,
     COLLATION_SYM = 327,
     COLUMNS = 328,
     COLUMN_ADD_SYM = 329,
     COLUMN_CHECK_SYM = 330,
     COLUMN_CREATE_SYM = 331,
     COLUMN_DELETE_SYM = 332,
     COLUMN_GET_SYM = 333,
     COLUMN_SYM = 334,
     COLUMN_NAME_SYM = 335,
     COMMENT_SYM = 336,
     COMMITTED_SYM = 337,
     COMMIT_SYM = 338,
     COMPACT_SYM = 339,
     COMPLETION_SYM = 340,
     COMPRESSED_SYM = 341,
     CONCURRENT = 342,
     CONDITION_SYM = 343,
     CONNECTION_SYM = 344,
     CONSISTENT_SYM = 345,
     CONSTRAINT = 346,
     CONSTRAINT_CATALOG_SYM = 347,
     CONSTRAINT_NAME_SYM = 348,
     CONSTRAINT_SCHEMA_SYM = 349,
     CONTAINS_SYM = 350,
     CONTEXT_SYM = 351,
     CONTINUE_SYM = 352,
     CONTRIBUTORS_SYM = 353,
     CONVERT_SYM = 354,
     COUNT_SYM = 355,
     CPU_SYM = 356,
     CREATE = 357,
     CROSS = 358,
     CUBE_SYM = 359,
     CURDATE = 360,
     CURRENT_USER = 361,
     CURSOR_SYM = 362,
     CURSOR_NAME_SYM = 363,
     CURTIME = 364,
     DATABASE = 365,
     DATABASES = 366,
     DATAFILE_SYM = 367,
     DATA_SYM = 368,
     DATETIME = 369,
     DATE_ADD_INTERVAL = 370,
     DATE_SUB_INTERVAL = 371,
     DATE_SYM = 372,
     DAY_HOUR_SYM = 373,
     DAY_MICROSECOND_SYM = 374,
     DAY_MINUTE_SYM = 375,
     DAY_SECOND_SYM = 376,
     DAY_SYM = 377,
     DEALLOCATE_SYM = 378,
     DECIMAL_NUM = 379,
     DECIMAL_SYM = 380,
     DECLARE_SYM = 381,
     DEFAULT = 382,
     DEFINER_SYM = 383,
     DELAYED_SYM = 384,
     DELAY_KEY_WRITE_SYM = 385,
     DELETE_SYM = 386,
     DESC = 387,
     DESCRIBE = 388,
     DES_KEY_FILE = 389,
     DETERMINISTIC_SYM = 390,
     DIRECTORY_SYM = 391,
     DISABLE_SYM = 392,
     DISCARD = 393,
     DISK_SYM = 394,
     DISTINCT = 395,
     DIV_SYM = 396,
     DOUBLE_SYM = 397,
     DO_SYM = 398,
     DROP = 399,
     DUAL_SYM = 400,
     DUMPFILE = 401,
     DUPLICATE_SYM = 402,
     DYNAMIC_SYM = 403,
     EACH_SYM = 404,
     ELSE = 405,
     ELSEIF_SYM = 406,
     ENABLE_SYM = 407,
     ENCLOSED = 408,
     END = 409,
     ENDS_SYM = 410,
     END_OF_INPUT = 411,
     ENGINES_SYM = 412,
     ENGINE_SYM = 413,
     ENUM = 414,
     EQ = 415,
     EQUAL_SYM = 416,
     ERROR_SYM = 417,
     ERRORS = 418,
     ESCAPED = 419,
     ESCAPE_SYM = 420,
     EVENTS_SYM = 421,
     EVENT_SYM = 422,
     EVERY_SYM = 423,
     EXAMINED_SYM = 424,
     EXECUTE_SYM = 425,
     EXISTS = 426,
     EXIT_SYM = 427,
     EXPANSION_SYM = 428,
     EXTENDED_SYM = 429,
     EXTENT_SIZE_SYM = 430,
     EXTRACT_SYM = 431,
     FALSE_SYM = 432,
     FAST_SYM = 433,
     FAULTS_SYM = 434,
     FETCH_SYM = 435,
     FILE_SYM = 436,
     FIRST_SYM = 437,
     FIXED_SYM = 438,
     FLOAT_NUM = 439,
     FLOAT_SYM = 440,
     FLUSH_SYM = 441,
     FORCE_SYM = 442,
     FOREIGN = 443,
     FOR_SYM = 444,
     FOUND_SYM = 445,
     FROM = 446,
     FULL = 447,
     FULLTEXT_SYM = 448,
     FUNCTION_SYM = 449,
     GE = 450,
     GENERAL = 451,
     GENERATED_SYM = 452,
     GEOMETRYCOLLECTION = 453,
     GEOMETRY_SYM = 454,
     GET_FORMAT = 455,
     GLOBAL_SYM = 456,
     GRANT = 457,
     GRANTS = 458,
     GROUP_SYM = 459,
     GROUP_CONCAT_SYM = 460,
     GT_SYM = 461,
     HANDLER_SYM = 462,
     HARD_SYM = 463,
     HASH_SYM = 464,
     HAVING = 465,
     HELP_SYM = 466,
     HEX_NUM = 467,
     HIGH_PRIORITY = 468,
     HOST_SYM = 469,
     HOSTS_SYM = 470,
     HOUR_MICROSECOND_SYM = 471,
     HOUR_MINUTE_SYM = 472,
     HOUR_SECOND_SYM = 473,
     HOUR_SYM = 474,
     IDENT = 475,
     IDENTIFIED_SYM = 476,
     IDENT_QUOTED = 477,
     IF = 478,
     IGNORE_SYM = 479,
     IGNORE_SERVER_IDS_SYM = 480,
     IMPORT = 481,
     INDEXES = 482,
     INDEX_SYM = 483,
     INDEX_STATS_SYM = 484,
     INFILE = 485,
     INITIAL_SIZE_SYM = 486,
     INNER_SYM = 487,
     INOUT_SYM = 488,
     INSENSITIVE_SYM = 489,
     INSERT = 490,
     INSERT_METHOD = 491,
     INSTALL_SYM = 492,
     INTERVAL_SYM = 493,
     INTO = 494,
     INT_SYM = 495,
     INVOKER_SYM = 496,
     IN_SYM = 497,
     IO_SYM = 498,
     IPC_SYM = 499,
     IS = 500,
     ISOLATION = 501,
     ISSUER_SYM = 502,
     ITERATE_SYM = 503,
     JOIN_SYM = 504,
     KEYS = 505,
     KEY_BLOCK_SIZE = 506,
     KEY_SYM = 507,
     KILL_SYM = 508,
     LANGUAGE_SYM = 509,
     LAST_SYM = 510,
     LAST_VALUE = 511,
     LE = 512,
     LEADING = 513,
     LEAVES = 514,
     LEAVE_SYM = 515,
     LEFT = 516,
     LESS_SYM = 517,
     LEVEL_SYM = 518,
     LEX_HOSTNAME = 519,
     LIKE = 520,
     LIMIT = 521,
     LINEAR_SYM = 522,
     LINES = 523,
     LINESTRING = 524,
     LIST_SYM = 525,
     LOAD = 526,
     LOCAL_SYM = 527,
     LOCATOR_SYM = 528,
     LOCKS_SYM = 529,
     LOCK_SYM = 530,
     LOGFILE_SYM = 531,
     LOGS_SYM = 532,
     LONGBLOB = 533,
     LONGTEXT = 534,
     LONG_NUM = 535,
     LONG_SYM = 536,
     LOOP_SYM = 537,
     LOW_PRIORITY = 538,
     LT = 539,
     MASTER_CONNECT_RETRY_SYM = 540,
     MASTER_HOST_SYM = 541,
     MASTER_LOG_FILE_SYM = 542,
     MASTER_LOG_POS_SYM = 543,
     MASTER_PASSWORD_SYM = 544,
     MASTER_PORT_SYM = 545,
     MASTER_SERVER_ID_SYM = 546,
     MASTER_SSL_CAPATH_SYM = 547,
     MASTER_SSL_CA_SYM = 548,
     MASTER_SSL_CERT_SYM = 549,
     MASTER_SSL_CIPHER_SYM = 550,
     MASTER_SSL_CRL_SYM = 551,
     MASTER_SSL_CRLPATH_SYM = 552,
     MASTER_SSL_KEY_SYM = 553,
     MASTER_SSL_SYM = 554,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 555,
     MASTER_SYM = 556,
     MASTER_USER_SYM = 557,
     MASTER_HEARTBEAT_PERIOD_SYM = 558,
     MATCH = 559,
     MAX_CONNECTIONS_PER_HOUR = 560,
     MAX_QUERIES_PER_HOUR = 561,
     MAX_ROWS = 562,
     MAX_SIZE_SYM = 563,
     MAX_SYM = 564,
     MAX_UPDATES_PER_HOUR = 565,
     MAX_USER_CONNECTIONS_SYM = 566,
     MAX_VALUE_SYM = 567,
     MEDIUMBLOB = 568,
     MEDIUMINT = 569,
     MEDIUMTEXT = 570,
     MEDIUM_SYM = 571,
     MEMORY_SYM = 572,
     MERGE_SYM = 573,
     MESSAGE_TEXT_SYM = 574,
     MICROSECOND_SYM = 575,
     MIGRATE_SYM = 576,
     MINUTE_MICROSECOND_SYM = 577,
     MINUTE_SECOND_SYM = 578,
     MINUTE_SYM = 579,
     MIN_ROWS = 580,
     MIN_SYM = 581,
     MODE_SYM = 582,
     MODIFIES_SYM = 583,
     MODIFY_SYM = 584,
     MOD_SYM = 585,
     MONTH_SYM = 586,
     MULTILINESTRING = 587,
     MULTIPOINT = 588,
     MULTIPOLYGON = 589,
     MUTEX_SYM = 590,
     MYSQL_ERRNO_SYM = 591,
     NAMES_SYM = 592,
     NAME_SYM = 593,
     NATIONAL_SYM = 594,
     NATURAL = 595,
     NCHAR_STRING = 596,
     NCHAR_SYM = 597,
     NDBCLUSTER_SYM = 598,
     NE = 599,
     NEG = 600,
     NEW_SYM = 601,
     NEXT_SYM = 602,
     NODEGROUP_SYM = 603,
     NONE_SYM = 604,
     NOT2_SYM = 605,
     NOT_SYM = 606,
     NOW_SYM = 607,
     NO_SYM = 608,
     NO_WAIT_SYM = 609,
     NO_WRITE_TO_BINLOG = 610,
     NULL_SYM = 611,
     NUM = 612,
     NUMERIC_SYM = 613,
     NVARCHAR_SYM = 614,
     OFFSET_SYM = 615,
     OLD_PASSWORD = 616,
     ON = 617,
     ONE_SYM = 618,
     ONLY_SYM = 619,
     ONLINE_SYM = 620,
     OPEN_SYM = 621,
     OPTIMIZE = 622,
     OPTIONS_SYM = 623,
     OPTION = 624,
     OPTIONALLY = 625,
     OR2_SYM = 626,
     ORDER_SYM = 627,
     OR_OR_SYM = 628,
     OR_SYM = 629,
     OUTER = 630,
     OUTFILE = 631,
     OUT_SYM = 632,
     OWNER_SYM = 633,
     PACK_KEYS_SYM = 634,
     PAGE_SYM = 635,
     PAGE_CHECKSUM_SYM = 636,
     PARAM_MARKER = 637,
     PARSER_SYM = 638,
     PARSE_VCOL_EXPR_SYM = 639,
     PARTIAL = 640,
     PARTITIONING_SYM = 641,
     PARTITIONS_SYM = 642,
     PARTITION_SYM = 643,
     PASSWORD = 644,
     PERSISTENT_SYM = 645,
     PHASE_SYM = 646,
     PLUGINS_SYM = 647,
     PLUGIN_SYM = 648,
     POINT_SYM = 649,
     POLYGON = 650,
     PORT_SYM = 651,
     POSITION_SYM = 652,
     PRECISION = 653,
     PREPARE_SYM = 654,
     PRESERVE_SYM = 655,
     PREV_SYM = 656,
     PRIMARY_SYM = 657,
     PRIVILEGES = 658,
     PROCEDURE_SYM = 659,
     PROCESS = 660,
     PROCESSLIST_SYM = 661,
     PROFILE_SYM = 662,
     PROFILES_SYM = 663,
     PROXY_SYM = 664,
     PURGE = 665,
     QUARTER_SYM = 666,
     QUERY_SYM = 667,
     QUICK = 668,
     RANGE_SYM = 669,
     READS_SYM = 670,
     READ_ONLY_SYM = 671,
     READ_SYM = 672,
     READ_WRITE_SYM = 673,
     REAL = 674,
     REBUILD_SYM = 675,
     RECOVER_SYM = 676,
     REDOFILE_SYM = 677,
     REDO_BUFFER_SIZE_SYM = 678,
     REDUNDANT_SYM = 679,
     REFERENCES = 680,
     REGEXP = 681,
     RELAY = 682,
     RELAYLOG_SYM = 683,
     RELAY_LOG_FILE_SYM = 684,
     RELAY_LOG_POS_SYM = 685,
     RELAY_THREAD = 686,
     RELEASE_SYM = 687,
     RELOAD = 688,
     REMOVE_SYM = 689,
     RENAME = 690,
     REORGANIZE_SYM = 691,
     REPAIR = 692,
     REPEATABLE_SYM = 693,
     REPEAT_SYM = 694,
     REPLACE = 695,
     REPLICATION = 696,
     REQUIRE_SYM = 697,
     RESET_SYM = 698,
     RESIGNAL_SYM = 699,
     RESOURCES = 700,
     RESTORE_SYM = 701,
     RESTRICT = 702,
     RESUME_SYM = 703,
     RETURNS_SYM = 704,
     RETURN_SYM = 705,
     REVOKE = 706,
     RIGHT = 707,
     ROLLBACK_SYM = 708,
     ROLLUP_SYM = 709,
     ROUTINE_SYM = 710,
     ROWS_SYM = 711,
     ROW_FORMAT_SYM = 712,
     ROW_SYM = 713,
     RTREE_SYM = 714,
     SAVEPOINT_SYM = 715,
     SCHEDULE_SYM = 716,
     SCHEMA_NAME_SYM = 717,
     SECOND_MICROSECOND_SYM = 718,
     SECOND_SYM = 719,
     SECURITY_SYM = 720,
     SELECT_SYM = 721,
     SENSITIVE_SYM = 722,
     SEPARATOR_SYM = 723,
     SERIALIZABLE_SYM = 724,
     SERIAL_SYM = 725,
     SESSION_SYM = 726,
     SERVER_SYM = 727,
     SERVER_OPTIONS = 728,
     SET = 729,
     SET_VAR = 730,
     SHARE_SYM = 731,
     SHIFT_LEFT = 732,
     SHIFT_RIGHT = 733,
     SHOW = 734,
     SHUTDOWN = 735,
     SIGNAL_SYM = 736,
     SIGNED_SYM = 737,
     SIMPLE_SYM = 738,
     SLAVE = 739,
     SLAVES = 740,
     SLOW = 741,
     SMALLINT = 742,
     SNAPSHOT_SYM = 743,
     SOCKET_SYM = 744,
     SOFT_SYM = 745,
     SONAME_SYM = 746,
     SOUNDS_SYM = 747,
     SOURCE_SYM = 748,
     SPATIAL_SYM = 749,
     SPECIFIC_SYM = 750,
     SQLEXCEPTION_SYM = 751,
     SQLSTATE_SYM = 752,
     SQLWARNING_SYM = 753,
     SQL_BIG_RESULT = 754,
     SQL_BUFFER_RESULT = 755,
     SQL_CACHE_SYM = 756,
     SQL_CALC_FOUND_ROWS = 757,
     SQL_NO_CACHE_SYM = 758,
     SQL_SMALL_RESULT = 759,
     SQL_SYM = 760,
     SQL_THREAD = 761,
     SSL_SYM = 762,
     STARTING = 763,
     STARTS_SYM = 764,
     START_SYM = 765,
     STATUS_SYM = 766,
     STDDEV_SAMP_SYM = 767,
     STD_SYM = 768,
     STOP_SYM = 769,
     STORAGE_SYM = 770,
     STRAIGHT_JOIN = 771,
     STRING_SYM = 772,
     SUBCLASS_ORIGIN_SYM = 773,
     SUBDATE_SYM = 774,
     SUBJECT_SYM = 775,
     SUBPARTITIONS_SYM = 776,
     SUBPARTITION_SYM = 777,
     SUBSTRING = 778,
     SUM_SYM = 779,
     SUPER_SYM = 780,
     SUSPEND_SYM = 781,
     SWAPS_SYM = 782,
     SWITCHES_SYM = 783,
     SYSDATE = 784,
     TABLES = 785,
     TABLESPACE = 786,
     TABLE_REF_PRIORITY = 787,
     TABLE_STATS_SYM = 788,
     TABLE_SYM = 789,
     TABLE_CHECKSUM_SYM = 790,
     TABLE_NAME_SYM = 791,
     TEMPORARY = 792,
     TEMPTABLE_SYM = 793,
     TERMINATED = 794,
     TEXT_STRING = 795,
     TEXT_SYM = 796,
     THAN_SYM = 797,
     THEN_SYM = 798,
     TIMESTAMP = 799,
     TIMESTAMP_ADD = 800,
     TIMESTAMP_DIFF = 801,
     TIME_SYM = 802,
     TINYBLOB = 803,
     TINYINT = 804,
     TINYTEXT = 805,
     TO_SYM = 806,
     TRAILING = 807,
     TRANSACTION_SYM = 808,
     TRANSACTIONAL_SYM = 809,
     TRIGGERS_SYM = 810,
     TRIGGER_SYM = 811,
     TRIM = 812,
     TRUE_SYM = 813,
     TRUNCATE_SYM = 814,
     TYPES_SYM = 815,
     TYPE_SYM = 816,
     UDF_RETURNS_SYM = 817,
     ULONGLONG_NUM = 818,
     UNCOMMITTED_SYM = 819,
     UNDEFINED_SYM = 820,
     UNDERSCORE_CHARSET = 821,
     UNDOFILE_SYM = 822,
     UNDO_BUFFER_SIZE_SYM = 823,
     UNDO_SYM = 824,
     UNICODE_SYM = 825,
     UNINSTALL_SYM = 826,
     UNION_SYM = 827,
     UNIQUE_SYM = 828,
     UNKNOWN_SYM = 829,
     UNLOCK_SYM = 830,
     UNSIGNED = 831,
     UNTIL_SYM = 832,
     UPDATE_SYM = 833,
     UPGRADE_SYM = 834,
     USAGE = 835,
     USER = 836,
     USER_STATS_SYM = 837,
     USE_FRM = 838,
     USE_SYM = 839,
     USING = 840,
     UTC_DATE_SYM = 841,
     UTC_TIMESTAMP_SYM = 842,
     UTC_TIME_SYM = 843,
     VALUES = 844,
     VALUE_SYM = 845,
     VARBINARY = 846,
     VARCHAR = 847,
     VARIABLES = 848,
     VARIANCE_SYM = 849,
     VARYING = 850,
     VAR_SAMP_SYM = 851,
     VIA_SYM = 852,
     VIEW_SYM = 853,
     VIRTUAL_SYM = 854,
     WAIT_SYM = 855,
     WARNINGS = 856,
     WEEK_SYM = 857,
     WHEN_SYM = 858,
     WHERE = 859,
     WHILE_SYM = 860,
     WITH = 861,
     WITH_CUBE_SYM = 862,
     WITH_ROLLUP_SYM = 863,
     WORK_SYM = 864,
     WRAPPER_SYM = 865,
     WRITE_SYM = 866,
     X509_SYM = 867,
     XA_SYM = 868,
     XML_SYM = 869,
     XOR = 870,
     YEAR_MONTH_SYM = 871,
     YEAR_SYM = 872,
     ZEROFILL = 873,
     IMPOSSIBLE_ACTION = 874
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ALWAYS_SYM 269
#define ANALYZE_SYM 270
#define AND_AND_SYM 271
#define AND_SYM 272
#define ANY_SYM 273
#define AS 274
#define ASC 275
#define ASCII_SYM 276
#define ASENSITIVE_SYM 277
#define AT_SYM 278
#define AUTHORS_SYM 279
#define AUTOEXTEND_SIZE_SYM 280
#define AUTO_INC 281
#define AVG_ROW_LENGTH 282
#define AVG_SYM 283
#define BACKUP_SYM 284
#define BEFORE_SYM 285
#define BEGIN_SYM 286
#define BETWEEN_SYM 287
#define BIGINT 288
#define BINARY 289
#define BINLOG_SYM 290
#define BIN_NUM 291
#define BIT_AND 292
#define BIT_OR 293
#define BIT_SYM 294
#define BIT_XOR 295
#define BLOB_SYM 296
#define BLOCK_SYM 297
#define BOOLEAN_SYM 298
#define BOOL_SYM 299
#define BOTH 300
#define BTREE_SYM 301
#define BY 302
#define BYTE_SYM 303
#define CACHE_SYM 304
#define CALL_SYM 305
#define CASCADE 306
#define CASCADED 307
#define CASE_SYM 308
#define CAST_SYM 309
#define CATALOG_NAME_SYM 310
#define CHAIN_SYM 311
#define CHANGE 312
#define CHANGED 313
#define CHARSET 314
#define CHAR_SYM 315
#define CHECKPOINT_SYM 316
#define CHECKSUM_SYM 317
#define CHECK_SYM 318
#define CIPHER_SYM 319
#define CLASS_ORIGIN_SYM 320
#define CLIENT_SYM 321
#define CLIENT_STATS_SYM 322
#define CLOSE_SYM 323
#define COALESCE 324
#define CODE_SYM 325
#define COLLATE_SYM 326
#define COLLATION_SYM 327
#define COLUMNS 328
#define COLUMN_ADD_SYM 329
#define COLUMN_CHECK_SYM 330
#define COLUMN_CREATE_SYM 331
#define COLUMN_DELETE_SYM 332
#define COLUMN_GET_SYM 333
#define COLUMN_SYM 334
#define COLUMN_NAME_SYM 335
#define COMMENT_SYM 336
#define COMMITTED_SYM 337
#define COMMIT_SYM 338
#define COMPACT_SYM 339
#define COMPLETION_SYM 340
#define COMPRESSED_SYM 341
#define CONCURRENT 342
#define CONDITION_SYM 343
#define CONNECTION_SYM 344
#define CONSISTENT_SYM 345
#define CONSTRAINT 346
#define CONSTRAINT_CATALOG_SYM 347
#define CONSTRAINT_NAME_SYM 348
#define CONSTRAINT_SCHEMA_SYM 349
#define CONTAINS_SYM 350
#define CONTEXT_SYM 351
#define CONTINUE_SYM 352
#define CONTRIBUTORS_SYM 353
#define CONVERT_SYM 354
#define COUNT_SYM 355
#define CPU_SYM 356
#define CREATE 357
#define CROSS 358
#define CUBE_SYM 359
#define CURDATE 360
#define CURRENT_USER 361
#define CURSOR_SYM 362
#define CURSOR_NAME_SYM 363
#define CURTIME 364
#define DATABASE 365
#define DATABASES 366
#define DATAFILE_SYM 367
#define DATA_SYM 368
#define DATETIME 369
#define DATE_ADD_INTERVAL 370
#define DATE_SUB_INTERVAL 371
#define DATE_SYM 372
#define DAY_HOUR_SYM 373
#define DAY_MICROSECOND_SYM 374
#define DAY_MINUTE_SYM 375
#define DAY_SECOND_SYM 376
#define DAY_SYM 377
#define DEALLOCATE_SYM 378
#define DECIMAL_NUM 379
#define DECIMAL_SYM 380
#define DECLARE_SYM 381
#define DEFAULT 382
#define DEFINER_SYM 383
#define DELAYED_SYM 384
#define DELAY_KEY_WRITE_SYM 385
#define DELETE_SYM 386
#define DESC 387
#define DESCRIBE 388
#define DES_KEY_FILE 389
#define DETERMINISTIC_SYM 390
#define DIRECTORY_SYM 391
#define DISABLE_SYM 392
#define DISCARD 393
#define DISK_SYM 394
#define DISTINCT 395
#define DIV_SYM 396
#define DOUBLE_SYM 397
#define DO_SYM 398
#define DROP 399
#define DUAL_SYM 400
#define DUMPFILE 401
#define DUPLICATE_SYM 402
#define DYNAMIC_SYM 403
#define EACH_SYM 404
#define ELSE 405
#define ELSEIF_SYM 406
#define ENABLE_SYM 407
#define ENCLOSED 408
#define END 409
#define ENDS_SYM 410
#define END_OF_INPUT 411
#define ENGINES_SYM 412
#define ENGINE_SYM 413
#define ENUM 414
#define EQ 415
#define EQUAL_SYM 416
#define ERROR_SYM 417
#define ERRORS 418
#define ESCAPED 419
#define ESCAPE_SYM 420
#define EVENTS_SYM 421
#define EVENT_SYM 422
#define EVERY_SYM 423
#define EXAMINED_SYM 424
#define EXECUTE_SYM 425
#define EXISTS 426
#define EXIT_SYM 427
#define EXPANSION_SYM 428
#define EXTENDED_SYM 429
#define EXTENT_SIZE_SYM 430
#define EXTRACT_SYM 431
#define FALSE_SYM 432
#define FAST_SYM 433
#define FAULTS_SYM 434
#define FETCH_SYM 435
#define FILE_SYM 436
#define FIRST_SYM 437
#define FIXED_SYM 438
#define FLOAT_NUM 439
#define FLOAT_SYM 440
#define FLUSH_SYM 441
#define FORCE_SYM 442
#define FOREIGN 443
#define FOR_SYM 444
#define FOUND_SYM 445
#define FROM 446
#define FULL 447
#define FULLTEXT_SYM 448
#define FUNCTION_SYM 449
#define GE 450
#define GENERAL 451
#define GENERATED_SYM 452
#define GEOMETRYCOLLECTION 453
#define GEOMETRY_SYM 454
#define GET_FORMAT 455
#define GLOBAL_SYM 456
#define GRANT 457
#define GRANTS 458
#define GROUP_SYM 459
#define GROUP_CONCAT_SYM 460
#define GT_SYM 461
#define HANDLER_SYM 462
#define HARD_SYM 463
#define HASH_SYM 464
#define HAVING 465
#define HELP_SYM 466
#define HEX_NUM 467
#define HIGH_PRIORITY 468
#define HOST_SYM 469
#define HOSTS_SYM 470
#define HOUR_MICROSECOND_SYM 471
#define HOUR_MINUTE_SYM 472
#define HOUR_SECOND_SYM 473
#define HOUR_SYM 474
#define IDENT 475
#define IDENTIFIED_SYM 476
#define IDENT_QUOTED 477
#define IF 478
#define IGNORE_SYM 479
#define IGNORE_SERVER_IDS_SYM 480
#define IMPORT 481
#define INDEXES 482
#define INDEX_SYM 483
#define INDEX_STATS_SYM 484
#define INFILE 485
#define INITIAL_SIZE_SYM 486
#define INNER_SYM 487
#define INOUT_SYM 488
#define INSENSITIVE_SYM 489
#define INSERT 490
#define INSERT_METHOD 491
#define INSTALL_SYM 492
#define INTERVAL_SYM 493
#define INTO 494
#define INT_SYM 495
#define INVOKER_SYM 496
#define IN_SYM 497
#define IO_SYM 498
#define IPC_SYM 499
#define IS 500
#define ISOLATION 501
#define ISSUER_SYM 502
#define ITERATE_SYM 503
#define JOIN_SYM 504
#define KEYS 505
#define KEY_BLOCK_SIZE 506
#define KEY_SYM 507
#define KILL_SYM 508
#define LANGUAGE_SYM 509
#define LAST_SYM 510
#define LAST_VALUE 511
#define LE 512
#define LEADING 513
#define LEAVES 514
#define LEAVE_SYM 515
#define LEFT 516
#define LESS_SYM 517
#define LEVEL_SYM 518
#define LEX_HOSTNAME 519
#define LIKE 520
#define LIMIT 521
#define LINEAR_SYM 522
#define LINES 523
#define LINESTRING 524
#define LIST_SYM 525
#define LOAD 526
#define LOCAL_SYM 527
#define LOCATOR_SYM 528
#define LOCKS_SYM 529
#define LOCK_SYM 530
#define LOGFILE_SYM 531
#define LOGS_SYM 532
#define LONGBLOB 533
#define LONGTEXT 534
#define LONG_NUM 535
#define LONG_SYM 536
#define LOOP_SYM 537
#define LOW_PRIORITY 538
#define LT 539
#define MASTER_CONNECT_RETRY_SYM 540
#define MASTER_HOST_SYM 541
#define MASTER_LOG_FILE_SYM 542
#define MASTER_LOG_POS_SYM 543
#define MASTER_PASSWORD_SYM 544
#define MASTER_PORT_SYM 545
#define MASTER_SERVER_ID_SYM 546
#define MASTER_SSL_CAPATH_SYM 547
#define MASTER_SSL_CA_SYM 548
#define MASTER_SSL_CERT_SYM 549
#define MASTER_SSL_CIPHER_SYM 550
#define MASTER_SSL_CRL_SYM 551
#define MASTER_SSL_CRLPATH_SYM 552
#define MASTER_SSL_KEY_SYM 553
#define MASTER_SSL_SYM 554
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 555
#define MASTER_SYM 556
#define MASTER_USER_SYM 557
#define MASTER_HEARTBEAT_PERIOD_SYM 558
#define MATCH 559
#define MAX_CONNECTIONS_PER_HOUR 560
#define MAX_QUERIES_PER_HOUR 561
#define MAX_ROWS 562
#define MAX_SIZE_SYM 563
#define MAX_SYM 564
#define MAX_UPDATES_PER_HOUR 565
#define MAX_USER_CONNECTIONS_SYM 566
#define MAX_VALUE_SYM 567
#define MEDIUMBLOB 568
#define MEDIUMINT 569
#define MEDIUMTEXT 570
#define MEDIUM_SYM 571
#define MEMORY_SYM 572
#define MERGE_SYM 573
#define MESSAGE_TEXT_SYM 574
#define MICROSECOND_SYM 575
#define MIGRATE_SYM 576
#define MINUTE_MICROSECOND_SYM 577
#define MINUTE_SECOND_SYM 578
#define MINUTE_SYM 579
#define MIN_ROWS 580
#define MIN_SYM 581
#define MODE_SYM 582
#define MODIFIES_SYM 583
#define MODIFY_SYM 584
#define MOD_SYM 585
#define MONTH_SYM 586
#define MULTILINESTRING 587
#define MULTIPOINT 588
#define MULTIPOLYGON 589
#define MUTEX_SYM 590
#define MYSQL_ERRNO_SYM 591
#define NAMES_SYM 592
#define NAME_SYM 593
#define NATIONAL_SYM 594
#define NATURAL 595
#define NCHAR_STRING 596
#define NCHAR_SYM 597
#define NDBCLUSTER_SYM 598
#define NE 599
#define NEG 600
#define NEW_SYM 601
#define NEXT_SYM 602
#define NODEGROUP_SYM 603
#define NONE_SYM 604
#define NOT2_SYM 605
#define NOT_SYM 606
#define NOW_SYM 607
#define NO_SYM 608
#define NO_WAIT_SYM 609
#define NO_WRITE_TO_BINLOG 610
#define NULL_SYM 611
#define NUM 612
#define NUMERIC_SYM 613
#define NVARCHAR_SYM 614
#define OFFSET_SYM 615
#define OLD_PASSWORD 616
#define ON 617
#define ONE_SYM 618
#define ONLY_SYM 619
#define ONLINE_SYM 620
#define OPEN_SYM 621
#define OPTIMIZE 622
#define OPTIONS_SYM 623
#define OPTION 624
#define OPTIONALLY 625
#define OR2_SYM 626
#define ORDER_SYM 627
#define OR_OR_SYM 628
#define OR_SYM 629
#define OUTER 630
#define OUTFILE 631
#define OUT_SYM 632
#define OWNER_SYM 633
#define PACK_KEYS_SYM 634
#define PAGE_SYM 635
#define PAGE_CHECKSUM_SYM 636
#define PARAM_MARKER 637
#define PARSER_SYM 638
#define PARSE_VCOL_EXPR_SYM 639
#define PARTIAL 640
#define PARTITIONING_SYM 641
#define PARTITIONS_SYM 642
#define PARTITION_SYM 643
#define PASSWORD 644
#define PERSISTENT_SYM 645
#define PHASE_SYM 646
#define PLUGINS_SYM 647
#define PLUGIN_SYM 648
#define POINT_SYM 649
#define POLYGON 650
#define PORT_SYM 651
#define POSITION_SYM 652
#define PRECISION 653
#define PREPARE_SYM 654
#define PRESERVE_SYM 655
#define PREV_SYM 656
#define PRIMARY_SYM 657
#define PRIVILEGES 658
#define PROCEDURE_SYM 659
#define PROCESS 660
#define PROCESSLIST_SYM 661
#define PROFILE_SYM 662
#define PROFILES_SYM 663
#define PROXY_SYM 664
#define PURGE 665
#define QUARTER_SYM 666
#define QUERY_SYM 667
#define QUICK 668
#define RANGE_SYM 669
#define READS_SYM 670
#define READ_ONLY_SYM 671
#define READ_SYM 672
#define READ_WRITE_SYM 673
#define REAL 674
#define REBUILD_SYM 675
#define RECOVER_SYM 676
#define REDOFILE_SYM 677
#define REDO_BUFFER_SIZE_SYM 678
#define REDUNDANT_SYM 679
#define REFERENCES 680
#define REGEXP 681
#define RELAY 682
#define RELAYLOG_SYM 683
#define RELAY_LOG_FILE_SYM 684
#define RELAY_LOG_POS_SYM 685
#define RELAY_THREAD 686
#define RELEASE_SYM 687
#define RELOAD 688
#define REMOVE_SYM 689
#define RENAME 690
#define REORGANIZE_SYM 691
#define REPAIR 692
#define REPEATABLE_SYM 693
#define REPEAT_SYM 694
#define REPLACE 695
#define REPLICATION 696
#define REQUIRE_SYM 697
#define RESET_SYM 698
#define RESIGNAL_SYM 699
#define RESOURCES 700
#define RESTORE_SYM 701
#define RESTRICT 702
#define RESUME_SYM 703
#define RETURNS_SYM 704
#define RETURN_SYM 705
#define REVOKE 706
#define RIGHT 707
#define ROLLBACK_SYM 708
#define ROLLUP_SYM 709
#define ROUTINE_SYM 710
#define ROWS_SYM 711
#define ROW_FORMAT_SYM 712
#define ROW_SYM 713
#define RTREE_SYM 714
#define SAVEPOINT_SYM 715
#define SCHEDULE_SYM 716
#define SCHEMA_NAME_SYM 717
#define SECOND_MICROSECOND_SYM 718
#define SECOND_SYM 719
#define SECURITY_SYM 720
#define SELECT_SYM 721
#define SENSITIVE_SYM 722
#define SEPARATOR_SYM 723
#define SERIALIZABLE_SYM 724
#define SERIAL_SYM 725
#define SESSION_SYM 726
#define SERVER_SYM 727
#define SERVER_OPTIONS 728
#define SET 729
#define SET_VAR 730
#define SHARE_SYM 731
#define SHIFT_LEFT 732
#define SHIFT_RIGHT 733
#define SHOW 734
#define SHUTDOWN 735
#define SIGNAL_SYM 736
#define SIGNED_SYM 737
#define SIMPLE_SYM 738
#define SLAVE 739
#define SLAVES 740
#define SLOW 741
#define SMALLINT 742
#define SNAPSHOT_SYM 743
#define SOCKET_SYM 744
#define SOFT_SYM 745
#define SONAME_SYM 746
#define SOUNDS_SYM 747
#define SOURCE_SYM 748
#define SPATIAL_SYM 749
#define SPECIFIC_SYM 750
#define SQLEXCEPTION_SYM 751
#define SQLSTATE_SYM 752
#define SQLWARNING_SYM 753
#define SQL_BIG_RESULT 754
#define SQL_BUFFER_RESULT 755
#define SQL_CACHE_SYM 756
#define SQL_CALC_FOUND_ROWS 757
#define SQL_NO_CACHE_SYM 758
#define SQL_SMALL_RESULT 759
#define SQL_SYM 760
#define SQL_THREAD 761
#define SSL_SYM 762
#define STARTING 763
#define STARTS_SYM 764
#define START_SYM 765
#define STATUS_SYM 766
#define STDDEV_SAMP_SYM 767
#define STD_SYM 768
#define STOP_SYM 769
#define STORAGE_SYM 770
#define STRAIGHT_JOIN 771
#define STRING_SYM 772
#define SUBCLASS_ORIGIN_SYM 773
#define SUBDATE_SYM 774
#define SUBJECT_SYM 775
#define SUBPARTITIONS_SYM 776
#define SUBPARTITION_SYM 777
#define SUBSTRING 778
#define SUM_SYM 779
#define SUPER_SYM 780
#define SUSPEND_SYM 781
#define SWAPS_SYM 782
#define SWITCHES_SYM 783
#define SYSDATE 784
#define TABLES 785
#define TABLESPACE 786
#define TABLE_REF_PRIORITY 787
#define TABLE_STATS_SYM 788
#define TABLE_SYM 789
#define TABLE_CHECKSUM_SYM 790
#define TABLE_NAME_SYM 791
#define TEMPORARY 792
#define TEMPTABLE_SYM 793
#define TERMINATED 794
#define TEXT_STRING 795
#define TEXT_SYM 796
#define THAN_SYM 797
#define THEN_SYM 798
#define TIMESTAMP 799
#define TIMESTAMP_ADD 800
#define TIMESTAMP_DIFF 801
#define TIME_SYM 802
#define TINYBLOB 803
#define TINYINT 804
#define TINYTEXT 805
#define TO_SYM 806
#define TRAILING 807
#define TRANSACTION_SYM 808
#define TRANSACTIONAL_SYM 809
#define TRIGGERS_SYM 810
#define TRIGGER_SYM 811
#define TRIM 812
#define TRUE_SYM 813
#define TRUNCATE_SYM 814
#define TYPES_SYM 815
#define TYPE_SYM 816
#define UDF_RETURNS_SYM 817
#define ULONGLONG_NUM 818
#define UNCOMMITTED_SYM 819
#define UNDEFINED_SYM 820
#define UNDERSCORE_CHARSET 821
#define UNDOFILE_SYM 822
#define UNDO_BUFFER_SIZE_SYM 823
#define UNDO_SYM 824
#define UNICODE_SYM 825
#define UNINSTALL_SYM 826
#define UNION_SYM 827
#define UNIQUE_SYM 828
#define UNKNOWN_SYM 829
#define UNLOCK_SYM 830
#define UNSIGNED 831
#define UNTIL_SYM 832
#define UPDATE_SYM 833
#define UPGRADE_SYM 834
#define USAGE 835
#define USER 836
#define USER_STATS_SYM 837
#define USE_FRM 838
#define USE_SYM 839
#define USING 840
#define UTC_DATE_SYM 841
#define UTC_TIMESTAMP_SYM 842
#define UTC_TIME_SYM 843
#define VALUES 844
#define VALUE_SYM 845
#define VARBINARY 846
#define VARCHAR 847
#define VARIABLES 848
#define VARIANCE_SYM 849
#define VARYING 850
#define VAR_SAMP_SYM 851
#define VIA_SYM 852
#define VIEW_SYM 853
#define VIRTUAL_SYM 854
#define WAIT_SYM 855
#define WARNINGS 856
#define WEEK_SYM 857
#define WHEN_SYM 858
#define WHERE 859
#define WHILE_SYM 860
#define WITH 861
#define WITH_CUBE_SYM 862
#define WITH_ROLLUP_SYM 863
#define WORK_SYM 864
#define WRAPPER_SYM 865
#define WRITE_SYM 866
#define X509_SYM 867
#define XA_SYM 868
#define XML_SYM 869
#define XOR 870
#define YEAR_MONTH_SYM 871
#define YEAR_SYM 872
#define ZEROFILL 873
#define IMPOSSIBLE_ACTION 874




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 845 "/home/buildbot/buildbot/build/sql/sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  enum ha_choice choice;
  CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  struct sp_cond_type *spcondtype;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  DYNCALL_CREATE_DEF *dyncol_def;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;



/* Line 1676 of yacc.c  */
#line 1343 "/home/buildbot/buildbot/build/mkdist/sql/sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif



