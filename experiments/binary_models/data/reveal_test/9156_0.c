static const char * cmd_upload_dir ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 directory_config * dcfg = ( directory_config * ) _dcfg ;
 if ( dcfg == NULL ) return NULL ;
 if ( strcasecmp ( p1 , "none" ) == 0 ) dcfg -> upload_dir = NULL ;
 else dcfg -> upload_dir = ap_server_root_relative ( cmd -> pool , p1 ) ;
 return NULL ;
 }