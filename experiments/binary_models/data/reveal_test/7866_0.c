static void restore_sql_mode ( FILE * sql_file , const char * delimiter ) {
 fprintf ( sql_file , "/*!50003 SET sql_mode = @saved_sql_mode */ %s\n" , ( const char * ) delimiter ) ;
 }