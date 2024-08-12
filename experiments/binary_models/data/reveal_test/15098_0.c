static void test_bug2247 ( ) {
 MYSQL_STMT * stmt ;
 MYSQL_RES * res ;
 int rc ;
 int i ;
 const char * create = "CREATE TABLE bug2247(id INT UNIQUE AUTO_INCREMENT)" ;
 const char * insert = "INSERT INTO bug2247 VALUES (NULL)" ;
 const char * SELECT = "SELECT id FROM bug2247" ;
 const char * update = "UPDATE bug2247 SET id=id+10" ;
 const char * drop = "DROP TABLE IF EXISTS bug2247" ;
 ulonglong exp_count ;
 enum {
 NUM_ROWS = 5 }
 ;
 myheader ( "test_bug2247" ) ;
 if ( ! opt_silent ) fprintf ( stdout , "\nChecking if stmt_affected_rows is not affected by\n" "mysql_query ... " ) ;
 rc = mysql_query ( mysql , drop ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , create ) ;
 myquery ( rc ) ;
 stmt = mysql_simple_prepare ( mysql , insert ) ;
 check_stmt ( stmt ) ;
 for ( i = 0 ;
 i < NUM_ROWS ;
 ++ i ) {
 rc = mysql_stmt_execute ( stmt ) ;
 check_execute ( stmt , rc ) ;
 }
 exp_count = mysql_stmt_affected_rows ( stmt ) ;
 DIE_UNLESS ( exp_count == 1 ) ;
 rc = mysql_query ( mysql , SELECT ) ;
 myquery ( rc ) ;
 res = mysql_store_result ( mysql ) ;
 mytest ( res ) ;
 DIE_UNLESS ( mysql_affected_rows ( mysql ) == NUM_ROWS ) ;
 DIE_UNLESS ( exp_count == mysql_stmt_affected_rows ( stmt ) ) ;
 rc = mysql_query ( mysql , update ) ;
 myquery ( rc ) ;
 DIE_UNLESS ( mysql_affected_rows ( mysql ) == NUM_ROWS ) ;
 DIE_UNLESS ( exp_count == mysql_stmt_affected_rows ( stmt ) ) ;
 mysql_free_result ( res ) ;
 mysql_stmt_close ( stmt ) ;
 stmt = mysql_simple_prepare ( mysql , SELECT ) ;
 check_stmt ( stmt ) ;
 rc = mysql_stmt_execute ( stmt ) ;
 check_execute ( stmt , rc ) ;
 rc = mysql_stmt_store_result ( stmt ) ;
 check_execute ( stmt , rc ) ;
 exp_count = mysql_stmt_affected_rows ( stmt ) ;
 DIE_UNLESS ( exp_count == NUM_ROWS ) ;
 rc = mysql_query ( mysql , insert ) ;
 myquery ( rc ) ;
 DIE_UNLESS ( mysql_affected_rows ( mysql ) == 1 ) ;
 DIE_UNLESS ( mysql_stmt_affected_rows ( stmt ) == exp_count ) ;
 mysql_stmt_close ( stmt ) ;
 if ( ! opt_silent ) fprintf ( stdout , "OK" ) ;
 }