static const char * cmd_audit_log ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 directory_config * dcfg = _dcfg ;
 dcfg -> auditlog_name = ( char * ) p1 ;
 if ( dcfg -> auditlog_name [ 0 ] == '|' ) {
 const char * pipe_name = dcfg -> auditlog_name + 1 ;
 piped_log * pipe_log ;
 pipe_log = ap_open_piped_log ( cmd -> pool , pipe_name ) ;
 if ( pipe_log == NULL ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: Failed to open the audit log pipe: %s" , pipe_name ) ;
 }
 dcfg -> auditlog_fd = ap_piped_log_write_fd ( pipe_log ) ;
 }
 else {
 const char * file_name = ap_server_root_relative ( cmd -> pool , dcfg -> auditlog_name ) ;
 apr_status_t rc ;
 rc = apr_file_open ( & dcfg -> auditlog_fd , file_name , APR_WRITE | APR_APPEND | APR_CREATE | APR_BINARY , CREATEMODE , cmd -> pool ) ;
 if ( rc != APR_SUCCESS ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: Failed to open the audit log file: %s" , file_name ) ;
 }
 }
 return NULL ;
 }