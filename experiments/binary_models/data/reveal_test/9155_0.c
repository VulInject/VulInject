static const char * cmd_rule_perf_time ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 directory_config * dcfg = ( directory_config * ) _dcfg ;
 long int limit ;
 if ( dcfg == NULL ) return NULL ;
 limit = strtol ( p1 , NULL , 10 ) ;
 if ( ( limit == LONG_MAX ) || ( limit == LONG_MIN ) || ( limit <= 0 ) ) {
 return apr_psprintf ( cmd -> pool , "ModSecurity: Invalid value for SecRulePerfTime: %s" , p1 ) ;
 }
 dcfg -> max_rule_time = limit ;
 return NULL ;
 }