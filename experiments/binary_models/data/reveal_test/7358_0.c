void free_replace_column ( ) {
 uint i ;
 for ( i = 0 ;
 i < max_replace_column ;
 i ++ ) {
 if ( replace_column [ i ] ) {
 my_free ( replace_column [ i ] ) ;
 replace_column [ i ] = 0 ;
 }
 }
 max_replace_column = 0 ;
 }