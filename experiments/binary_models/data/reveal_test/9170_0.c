static const char * cmd_rule_inheritance ( cmd_parms * cmd , void * _dcfg , int flag ) {
 directory_config * dcfg = ( directory_config * ) _dcfg ;
 if ( dcfg == NULL ) return NULL ;
 dcfg -> rule_inheritance = flag ;
 return NULL ;
 }