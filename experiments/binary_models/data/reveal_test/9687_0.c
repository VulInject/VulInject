static void generate_json_array ( FBuffer * buffer , VALUE Vstate , JSON_Generator_State * state , VALUE obj ) {
 char * array_nl = state -> array_nl ;
 long array_nl_len = state -> array_nl_len ;
 char * indent = state -> indent ;
 long indent_len = state -> indent_len ;
 long max_nesting = state -> max_nesting ;
 char * delim = FBUFFER_PTR ( state -> array_delim ) ;
 long delim_len = FBUFFER_LEN ( state -> array_delim ) ;
 long depth = ++ state -> depth ;
 int i , j ;
 if ( max_nesting != 0 && depth > max_nesting ) {
 fbuffer_free ( buffer ) ;
 rb_raise ( eNestingError , "nesting of %ld is too deep" , -- state -> depth ) ;
 }
 fbuffer_append_char ( buffer , '[' ) ;
 if ( array_nl ) fbuffer_append ( buffer , array_nl , array_nl_len ) ;
 for ( i = 0 ;
 i < RARRAY_LEN ( obj ) ;
 i ++ ) {
 if ( i > 0 ) fbuffer_append ( buffer , delim , delim_len ) ;
 if ( indent ) {
 for ( j = 0 ;
 j < depth ;
 j ++ ) {
 fbuffer_append ( buffer , indent , indent_len ) ;
 }
 }
 generate_json ( buffer , Vstate , state , rb_ary_entry ( obj , i ) ) ;
 }
 state -> depth = -- depth ;
 if ( array_nl ) {
 fbuffer_append ( buffer , array_nl , array_nl_len ) ;
 if ( indent ) {
 for ( j = 0 ;
 j < depth ;
 j ++ ) {
 fbuffer_append ( buffer , indent , indent_len ) ;
 }
 }
 }
 fbuffer_append_char ( buffer , ']' ) ;
 }