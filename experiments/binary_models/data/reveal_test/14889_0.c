static void restore_query_logs ( ) {
 int rc ;
 rc = mysql_query ( mysql , "set @@global.general_log=@save_global_general_log" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "set @@global.slow_query_log=@save_global_slow_query_log" ) ;
 myquery ( rc ) ;
 }