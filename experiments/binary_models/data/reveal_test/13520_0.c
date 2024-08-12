static void start_monitoring_file_list ( NautilusDirectory * directory ) {
 DirectoryLoadState * state ;
 if ( ! directory -> details -> file_list_monitored ) {
 g_assert ( ! directory -> details -> directory_load_in_progress ) ;
 directory -> details -> file_list_monitored = TRUE ;
 nautilus_file_list_ref ( directory -> details -> file_list ) ;
 }
 if ( directory -> details -> directory_loaded || directory -> details -> directory_load_in_progress != NULL ) {
 return ;
 }
 if ( ! async_job_start ( directory , "file list" ) ) {
 return ;
 }
 mark_all_files_unconfirmed ( directory ) ;
 state = g_new0 ( DirectoryLoadState , 1 ) ;
 state -> directory = directory ;
 state -> cancellable = g_cancellable_new ( ) ;
 state -> load_mime_list_hash = istr_set_new ( ) ;
 state -> load_file_count = 0 ;
 g_assert ( directory -> details -> location != NULL ) ;
 state -> load_directory_file = nautilus_directory_get_corresponding_file ( directory ) ;
 state -> load_directory_file -> details -> loading_directory = TRUE ;
 # ifdef DEBUG_LOAD_DIRECTORY g_message ( "load_directory called to monitor file list of %p" , directory -> details -> location ) ;
 # endif directory -> details -> directory_load_in_progress = state ;
 g_file_enumerate_children_async ( directory -> details -> location , NAUTILUS_FILE_DEFAULT_ATTRIBUTES , 0 , G_PRIORITY_DEFAULT , state -> cancellable , enumerate_children_callback , state ) ;
 }