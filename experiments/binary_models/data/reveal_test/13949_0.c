static int show_net_compression ( THD * thd , SHOW_VAR * var , char * buff ) {
 var -> type = SHOW_MY_BOOL ;
 var -> value = ( char * ) & thd -> net . compress ;
 return 0 ;
 }