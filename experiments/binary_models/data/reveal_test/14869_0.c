static void disable_query_logs ( ) {
 int rc ;
 rc = mysql_query ( mysql , "set @@global.general_log=off" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "set @@global.slow_query_log=off" ) ;
 myquery ( rc ) ;
 }