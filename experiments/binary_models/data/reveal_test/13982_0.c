static void set_root ( const char * path ) {
 # if ! defined ( __WIN__ ) if ( chroot ( path ) == - 1 ) {
 sql_perror ( "chroot" ) ;
 unireg_abort ( 1 ) ;
 }
 my_setwd ( "/" , MYF ( 0 ) ) ;
 # endif }