static const char * cmd_cookiev0_separator ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 directory_config * dcfg = ( directory_config * ) _dcfg ;
 if ( strlen ( p1 ) != 1 ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: Invalid cookie v0 separator: %s" , p1 ) ;
 }
 dcfg -> cookiev0_separator = p1 ;
 return NULL ;
 }