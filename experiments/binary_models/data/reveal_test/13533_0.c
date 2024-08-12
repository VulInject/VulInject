static void thumbnail_stop ( NautilusDirectory * directory ) {
 NautilusFile * file ;
 if ( directory -> details -> thumbnail_state != NULL ) {
 file = directory -> details -> thumbnail_state -> file ;
 if ( file != NULL ) {
 g_assert ( NAUTILUS_IS_FILE ( file ) ) ;
 g_assert ( file -> details -> directory == directory ) ;
 if ( is_needy ( file , lacks_thumbnail , REQUEST_THUMBNAIL ) ) {
 return ;
 }
 }
 thumbnail_cancel ( directory ) ;
 }
 }