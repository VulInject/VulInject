static void dynstr_append_checked ( DYNAMIC_STRING * dest , const char * src ) {
 if ( dynstr_append ( dest , src ) ) die ( EX_MYSQLERR , DYNAMIC_STR_ERROR_MSG ) ;
 }