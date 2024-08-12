void getconfig ( int argc , char * * argv ) {
 char line [ MAXLINE ] ;
 # ifdef DEBUG atexit ( free_all_config_trees ) ;
 # endif # ifndef SYS_WINNT config_file = CONFIG_FILE ;
 # else temp = CONFIG_FILE ;
 if ( ! ExpandEnvironmentStrings ( ( LPCTSTR ) temp , ( LPTSTR ) config_file_storage , ( DWORD ) sizeof ( config_file_storage ) ) ) {
 msyslog ( LOG_ERR , "ExpandEnvironmentStrings CONFIG_FILE failed: %m\n" ) ;
 exit ( 1 ) ;
 }
 config_file = config_file_storage ;
 temp = ALT_CONFIG_FILE ;
 if ( ! ExpandEnvironmentStrings ( ( LPCTSTR ) temp , ( LPTSTR ) alt_config_file_storage , ( DWORD ) sizeof ( alt_config_file_storage ) ) ) {
 msyslog ( LOG_ERR , "ExpandEnvironmentStrings ALT_CONFIG_FILE failed: %m\n" ) ;
 exit ( 1 ) ;
 }
 alt_config_file = alt_config_file_storage ;
 # endif snprintf ( line , sizeof ( line ) , "daemon_version=\"%s\"" , Version ) ;
 set_sys_var ( line , strlen ( line ) + 1 , RO ) ;
 set_tod_using = & ntpd_set_tod_using ;
 # ifndef SYS_WINNT strncpy ( line , "settimeofday=\"UNKNOWN\"" , sizeof ( line ) ) ;
 set_sys_var ( line , strlen ( line ) + 1 , RO ) ;
 # endif getCmdOpts ( argc , argv ) ;
 init_syntax_tree ( & cfgt ) ;
 curr_include_level = 0 ;
 if ( ( fp [ curr_include_level ] = F_OPEN ( FindConfig ( config_file ) , "r" ) ) == NULL # ifdef HAVE_NETINFO && check_netinfo && ! ( config_netinfo = get_netinfo_config ( ) ) # endif ) {
 msyslog ( LOG_INFO , "getconfig: Couldn't open <%s>" , FindConfig ( config_file ) ) ;
 # ifndef SYS_WINNT io_open_sockets ( ) ;
 return ;
 # else if ( ( fp [ curr_include_level ] = F_OPEN ( FindConfig ( alt_config_file ) , "r" ) ) == NULL ) {
 msyslog ( LOG_INFO , "getconfig: Couldn't open <%s>" , FindConfig ( alt_config_file ) ) ;
 io_open_sockets ( ) ;
 return ;
 }
 cfgt . source . value . s = estrdup ( alt_config_file ) ;
 # endif }
 else cfgt . source . value . s = estrdup ( config_file ) ;
 # ifdef DEBUG yydebug = ! ! ( debug >= 5 ) ;
 # endif ip_file = fp [ curr_include_level ] ;
 yyparse ( ) ;
 DPRINTF ( 1 , ( "Finished Parsing!!\n" ) ) ;
 cfgt . source . attr = CONF_SOURCE_FILE ;
 cfgt . timestamp = time ( NULL ) ;
 save_and_apply_config_tree ( ) ;
 while ( curr_include_level != - 1 ) FCLOSE ( fp [ curr_include_level -- ] ) ;
 # ifdef HAVE_NETINFO if ( config_netinfo ) free_netinfo_config ( config_netinfo ) ;
 # endif }