static const char * cmd_pcre_match_limit_recursion ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 long val ;
 if ( cmd -> server -> is_virtual ) {
 return "ModSecurity: SecPcreMatchLimitRecursion not allowed in VirtualHost" ;
 }
 val = atol ( p1 ) ;
 if ( val <= 0 ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: Invalid setting for " "SecPcreMatchLimitRecursion: %s" , p1 ) ;
 }
 msc_pcre_match_limit_recursion = ( unsigned long int ) val ;
 return NULL ;
 }