int my_getc ( FILE * file ) {
 if ( line_buffer_pos == line_buffer ) return fgetc ( file ) ;
 return * -- line_buffer_pos ;
 }