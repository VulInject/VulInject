static void remove_cntrl ( String & buffer ) {
 char * start , * end ;
 end = ( start = ( char * ) buffer . ptr ( ) ) + buffer . length ( ) ;
 while ( start < end && ! my_isgraph ( charset_info , end [ - 1 ] ) ) end -- ;
 buffer . length ( ( uint ) ( end - start ) ) ;
 }