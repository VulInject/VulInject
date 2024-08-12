static const char * cmd_default_action ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 directory_config * dcfg = ( directory_config * ) _dcfg ;
 extern msc_engine * modsecurity ;
 char * my_error_msg = NULL ;
 dcfg -> tmp_default_actionset = msre_actionset_create ( modsecurity -> msre , p1 , & my_error_msg ) ;
 if ( dcfg -> tmp_default_actionset == NULL ) {
 if ( my_error_msg != NULL ) return my_error_msg ;
 else return FATAL_ERROR ;
 }
 if ( dcfg -> tmp_default_actionset -> intercept_action == NOT_SET ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: SecDefaultAction must specify a disruptive action." ) ;
 }
 if ( dcfg -> tmp_default_actionset -> phase == NOT_SET ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: SecDefaultAction must specify a phase." ) ;
 }
 if ( ( dcfg -> tmp_default_actionset -> id != NOT_SET_P ) || ( dcfg -> tmp_default_actionset -> rev != NOT_SET_P ) || ( dcfg -> tmp_default_actionset -> version != NOT_SET_P ) || ( dcfg -> tmp_default_actionset -> maturity != NOT_SET ) || ( dcfg -> tmp_default_actionset -> accuracy != NOT_SET ) || ( dcfg -> tmp_default_actionset -> msg != NOT_SET_P ) ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: SecDefaultAction must not " "contain any metadata actions (id, rev, msg, tag, severity, ver, accuracy, maturity, logdata)." ) ;
 }
 if ( ( dcfg -> tmp_default_actionset -> severity != NOT_SET ) || ( dcfg -> tmp_default_actionset -> logdata != NOT_SET_P ) ) {
 ap_log_perror ( APLOG_MARK , APLOG_STARTUP | APLOG_WARNING | APLOG_NOERRNO , 0 , cmd -> pool , "ModSecurity: WARNING Using \"severity\" or \"logdata\" in " "SecDefaultAction is deprecated (%s:%d)." , cmd -> directive -> filename , cmd -> directive -> line_num ) ;
 }
 if ( apr_table_get ( dcfg -> tmp_default_actionset -> actions , "t" ) ) {
 ap_log_perror ( APLOG_MARK , APLOG_STARTUP | APLOG_WARNING | APLOG_NOERRNO , 0 , cmd -> pool , "ModSecurity: WARNING Using transformations in " "SecDefaultAction is deprecated (%s:%d)." , cmd -> directive -> filename , cmd -> directive -> line_num ) ;
 }
 if ( dcfg -> tmp_default_actionset -> is_chained != NOT_SET ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: SecDefaultAction must not " "contain a chain action." ) ;
 }
 if ( dcfg -> tmp_default_actionset -> skip_count != NOT_SET ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: SecDefaultAction must not " "contain a skip action." ) ;
 }
 if ( dcfg -> tmp_default_actionset -> skip_after != NOT_SET_P ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: SecDefaultAction must not " "contain a skipAfter action." ) ;
 }
 return NULL ;
 }