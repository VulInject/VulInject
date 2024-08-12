static const char * cpio_rename ( const char * name ) {
 static char buff [ 1024 ] ;
 FILE * t ;
 char * p , * ret ;
 # if defined ( _WIN32 ) && ! defined ( __CYGWIN__ ) FILE * to ;
 t = fopen ( "CONIN$" , "r" ) ;
 if ( t == NULL ) return ( name ) ;
 to = fopen ( "CONOUT$" , "w" ) ;
 if ( to == NULL ) {
 fclose ( t ) ;
 return ( name ) ;
 }
 fprintf ( to , "%s (Enter/./(new name))? " , name ) ;
 fclose ( to ) ;
 # else t = fopen ( "/dev/tty" , "r+" ) ;
 if ( t == NULL ) return ( name ) ;
 fprintf ( t , "%s (Enter/./(new name))? " , name ) ;
 fflush ( t ) ;
 # endif p = fgets ( buff , sizeof ( buff ) , t ) ;
 fclose ( t ) ;
 if ( p == NULL ) return ( NULL ) ;
 while ( * p == ' ' || * p == '\t' ) ++ p ;
 if ( * p == '\n' || * p == '\0' ) return ( NULL ) ;
 if ( * p == '.' && p [ 1 ] == '\n' ) return ( name ) ;
 ret = p ;
 while ( * p != '\0' && * p != '\n' ) ++ p ;
 * p = '\0' ;
 return ( ret ) ;
 }