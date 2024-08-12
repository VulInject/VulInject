static void test_bug15613 ( ) {
 MYSQL_STMT * stmt ;
 const char * stmt_text ;
 MYSQL_RES * metadata ;
 MYSQL_FIELD * field ;
 int rc ;
 myheader ( "test_bug15613" ) ;
 rc = mysql_query ( mysql , "set names latin1" ) ;
 myquery ( rc ) ;
 mysql_query ( mysql , "drop table if exists t1" ) ;
 rc = mysql_query ( mysql , "create table t1 (t text character set utf8, " "tt tinytext character set utf8, " "mt mediumtext character set utf8, " "lt longtext character set utf8, " "vl varchar(255) character set latin1," "vb varchar(255) character set binary," "vu varchar(255) character set utf8)" ) ;
 myquery ( rc ) ;
 stmt = mysql_stmt_init ( mysql ) ;
 stmt_text = ( "select t, tt, mt, lt, vl, vb, vu from t1" ) ;
 rc = mysql_stmt_prepare ( stmt , stmt_text , strlen ( stmt_text ) ) ;
 metadata = mysql_stmt_result_metadata ( stmt ) ;
 field = mysql_fetch_fields ( metadata ) ;
 if ( ! opt_silent ) {
 printf ( "Field lengths (client character set is latin1):\n" "text character set utf8:\t\t%lu\n" "tinytext character set utf8:\t\t%lu\n" "mediumtext character set utf8:\t\t%lu\n" "longtext character set utf8:\t\t%lu\n" "varchar(255) character set latin1:\t%lu\n" "varchar(255) character set binary:\t%lu\n" "varchar(255) character set utf8:\t%lu\n" , field [ 0 ] . length , field [ 1 ] . length , field [ 2 ] . length , field [ 3 ] . length , field [ 4 ] . length , field [ 5 ] . length , field [ 6 ] . length ) ;
 }
 DIE_UNLESS ( field [ 0 ] . length == 65535 ) ;
 DIE_UNLESS ( field [ 1 ] . length == 255 ) ;
 DIE_UNLESS ( field [ 2 ] . length == 16777215 ) ;
 DIE_UNLESS ( field [ 3 ] . length == 4294967295UL ) ;
 DIE_UNLESS ( field [ 4 ] . length == 255 ) ;
 DIE_UNLESS ( field [ 5 ] . length == 255 ) ;
 DIE_UNLESS ( field [ 6 ] . length == 255 ) ;
 mysql_free_result ( metadata ) ;
 mysql_stmt_free_result ( stmt ) ;
 rc = mysql_query ( mysql , "drop table t1" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "set names default" ) ;
 myquery ( rc ) ;
 mysql_stmt_close ( stmt ) ;
 }