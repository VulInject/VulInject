static const char * cmd_guardian_log ( cmd_parms * cmd , void * _dcfg , const char * p1 , const char * p2 ) {
 extern char * guardianlog_name ;
 extern apr_file_t * guardianlog_fd ;
 extern char * guardianlog_condition ;
 if ( cmd -> server -> is_virtual ) {
 return "ModSecurity: SecGuardianLog not allowed in VirtualHost" ;
 }
 if ( p2 != NULL ) {
 if ( strncmp ( p2 , "env=" , 4 ) != 0 ) {
 return "ModSecurity: Error in condition clause" ;
 }
 if ( ( p2 [ 4 ] == '\0' ) || ( ( p2 [ 4 ] == '!' ) && ( p2 [ 5 ] == '\0' ) ) ) {
 return "ModSecurity: Missing variable name" ;
 }
 guardianlog_condition = apr_pstrdup ( cmd -> pool , p2 + 4 ) ;
 }
 guardianlog_name = ( char * ) p1 ;
 if ( guardianlog_name [ 0 ] == '|' ) {
 const char * pipe_name = ap_server_root_relative ( cmd -> pool , guardianlog_name + 1 ) ;
 piped_log * pipe_log ;
 pipe_log = ap_open_piped_log ( cmd -> pool , pipe_name ) ;
 if ( pipe_log == NULL ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: Failed to open the guardian log pipe: %s" , pipe_name ) ;
 }
 guardianlog_fd = ap_piped_log_write_fd ( pipe_log ) ;
 }
 else {
 const char * file_name = ap_server_root_relative ( cmd -> pool , guardianlog_name ) ;
 apr_status_t rc ;
 rc = apr_file_open ( & guardianlog_fd , file_name , APR_WRITE | APR_APPEND | APR_CREATE | APR_BINARY , CREATEMODE , cmd -> pool ) ;
 if ( rc != APR_SUCCESS ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: Failed to open the guardian log file: %s" , file_name ) ;
 }
 }
 return NULL ;
 }