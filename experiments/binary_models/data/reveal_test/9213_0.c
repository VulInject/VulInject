static const char * cmd_server_signature ( cmd_parms * cmd , void * _dcfg , const char * p1 ) {
 if ( cmd -> server -> is_virtual ) {
 return "ModSecurity: SecServerSignature not allowed in VirtualHost" ;
 }
 new_server_signature = ( char * ) p1 ;
 return NULL ;
 }