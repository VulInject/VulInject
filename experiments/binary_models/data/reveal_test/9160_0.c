static const char * cmd_action ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 return add_rule ( cmd , ( directory_config * ) _dcfg , RULE_TYPE_ACTION , SECACTION_TARGETS , SECACTION_ARGS , p1 ) ;
 }