static const char * cmd_upload_file_limit ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 directory_config * dcfg = ( directory_config * ) _dcfg ;
 if ( dcfg == NULL ) return NULL ;
 if ( strcasecmp ( p1 , "default" ) == 0 ) {
 dcfg -> upload_file_limit = NOT_SET ;
 }
 else {
 dcfg -> upload_file_limit = atoi ( p1 ) ;
 }
 return NULL ;
 }