bool is_delimiter ( const char * p ) {
 uint match = 0 ;
 char * delim = delimiter ;
 while ( * p && * p == * delim ++ ) {
 match ++ ;
 p ++ ;
 }
 return ( match == delimiter_length ) ;
 }