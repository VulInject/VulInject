void do_set_charset ( struct st_command * command ) {
 char * charset_name = command -> first_argument ;
 char * p ;
 if ( ! charset_name || ! * charset_name ) die ( "Missing charset name in 'character_set'" ) ;
 p = charset_name ;
 while ( * p && ! my_isspace ( charset_info , * p ) ) p ++ ;
 if ( * p ) * p ++ = 0 ;
 command -> last_argument = p ;
 charset_info = get_charset_by_csname ( charset_name , MY_CS_PRIMARY , MYF ( MY_WME ) ) ;
 if ( ! charset_info ) abort_not_supported_test ( "Test requires charset '%s'" , charset_name ) ;
 }