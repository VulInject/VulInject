static const char * cmd_web_app_id ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 directory_config * dcfg = ( directory_config * ) _dcfg ;
 dcfg -> webappid = p1 ;
 return NULL ;
 }