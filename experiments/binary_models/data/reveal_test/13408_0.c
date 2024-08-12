void nautilus_directory_stop_monitoring_file_list ( NautilusDirectory * directory ) {
 if ( ! directory -> details -> file_list_monitored ) {
 g_assert ( directory -> details -> directory_load_in_progress == NULL ) ;
 return ;
 }
 directory -> details -> file_list_monitored = FALSE ;
 file_list_cancel ( directory ) ;
 nautilus_file_list_unref ( directory -> details -> file_list ) ;
 directory -> details -> directory_loaded = FALSE ;
 }