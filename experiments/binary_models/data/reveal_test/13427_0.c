static void extension_info_stop ( NautilusDirectory * directory ) {
 if ( directory -> details -> extension_info_in_progress != NULL ) {
 NautilusFile * file ;
 file = directory -> details -> extension_info_file ;
 if ( file != NULL ) {
 g_assert ( NAUTILUS_IS_FILE ( file ) ) ;
 g_assert ( file -> details -> directory == directory ) ;
 if ( is_needy ( file , lacks_extension_info , REQUEST_EXTENSION_INFO ) ) {
 return ;
 }
 }
 extension_info_cancel ( directory ) ;
 }
 }