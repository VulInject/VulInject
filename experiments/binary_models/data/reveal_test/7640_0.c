int flush_blocks ( MI_CHECK * param , KEY_CACHE * key_cache , File file ) {
 if ( flush_key_blocks ( key_cache , file , FLUSH_RELEASE ) ) {
 mi_check_print_error ( param , "%d when trying to write bufferts" , my_errno ) ;
 return ( 1 ) ;
 }
 if ( ! param -> using_global_keycache ) end_key_cache ( key_cache , 1 ) ;
 return 0 ;
 }