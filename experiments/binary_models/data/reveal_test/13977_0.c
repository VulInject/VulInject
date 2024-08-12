void set_server_version ( void ) {
 char * version_end = server_version + sizeof ( server_version ) - 1 ;
 char * end = strxnmov ( server_version , sizeof ( server_version ) - 1 , MYSQL_SERVER_VERSION , MYSQL_SERVER_SUFFIX_STR , NullS ) ;
 # ifdef EMBEDDED_LIBRARY end = strnmov ( end , "-embedded" , ( version_end - end ) ) ;
 # endif # ifndef DBUG_OFF if ( ! strstr ( MYSQL_SERVER_SUFFIX_STR , "-debug" ) ) end = strnmov ( end , "-debug" , ( version_end - end ) ) ;
 # endif if ( opt_log || opt_slow_log || opt_bin_log ) strnmov ( end , "-log" , ( version_end - end ) ) ;
 * end = 0 ;
 }