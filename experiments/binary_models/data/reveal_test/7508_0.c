void append_result ( DYNAMIC_STRING * ds , MYSQL_RES * res ) {
 MYSQL_ROW row ;
 uint num_fields = mysql_num_fields ( res ) ;
 MYSQL_FIELD * fields = mysql_fetch_fields ( res ) ;
 ulong * lengths ;
 while ( ( row = mysql_fetch_row ( res ) ) ) {
 uint i ;
 lengths = mysql_fetch_lengths ( res ) ;
 for ( i = 0 ;
 i < num_fields ;
 i ++ ) append_field ( ds , i , & fields [ i ] , row [ i ] , lengths [ i ] , ! row [ i ] ) ;
 if ( ! display_result_vertically ) dynstr_append_mem ( ds , "\n" , 1 ) ;
 }
 }