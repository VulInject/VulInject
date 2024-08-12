static void test_bug14169 ( ) {
 MYSQL_STMT * stmt ;
 const char * stmt_text ;
 MYSQL_RES * res ;
 MYSQL_FIELD * field ;
 int rc ;
 myheader ( "test_bug14169" ) ;
 rc = mysql_query ( mysql , "drop table if exists t1" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "set session group_concat_max_len=1024" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "create table t1 (f1 int unsigned, f2 varchar(255))" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "insert into t1 values (1,repeat('a',255))," "(2,repeat('b',255))" ) ;
 myquery ( rc ) ;
 stmt = mysql_stmt_init ( mysql ) ;
 stmt_text = "select f2,group_concat(f1) from t1 group by f2" ;
 rc = mysql_stmt_prepare ( stmt , stmt_text , strlen ( stmt_text ) ) ;
 myquery ( rc ) ;
 res = mysql_stmt_result_metadata ( stmt ) ;
 field = mysql_fetch_fields ( res ) ;
 if ( ! opt_silent ) printf ( "GROUP_CONCAT() result type %i" , field [ 1 ] . type ) ;
 DIE_UNLESS ( field [ 1 ] . type == MYSQL_TYPE_BLOB ) ;
 mysql_free_result ( res ) ;
 mysql_stmt_free_result ( stmt ) ;
 mysql_stmt_close ( stmt ) ;
 rc = mysql_query ( mysql , "drop table t1" ) ;
 myquery ( rc ) ;
 }