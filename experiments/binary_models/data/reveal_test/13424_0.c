static void deep_count_more_files_callback ( GObject * source_object , GAsyncResult * res , gpointer user_data ) {
 DeepCountState * state ;
 NautilusDirectory * directory ;
 GList * files , * l ;
 GFileInfo * info ;
 state = user_data ;
 if ( state -> directory == NULL ) {
 deep_count_state_free ( state ) ;
 return ;
 }
 directory = nautilus_directory_ref ( state -> directory ) ;
 g_assert ( directory -> details -> deep_count_in_progress != NULL ) ;
 g_assert ( directory -> details -> deep_count_in_progress == state ) ;
 files = g_file_enumerator_next_files_finish ( state -> enumerator , res , NULL ) ;
 for ( l = files ;
 l != NULL ;
 l = l -> next ) {
 info = l -> data ;
 deep_count_one ( state , info ) ;
 g_object_unref ( info ) ;
 }
 if ( files == NULL ) {
 g_file_enumerator_close_async ( state -> enumerator , 0 , NULL , NULL , NULL ) ;
 g_object_unref ( state -> enumerator ) ;
 state -> enumerator = NULL ;
 deep_count_next_dir ( state ) ;
 }
 else {
 g_file_enumerator_next_files_async ( state -> enumerator , DIRECTORY_LOAD_ITEMS_PER_CALLBACK , G_PRIORITY_LOW , state -> cancellable , deep_count_more_files_callback , state ) ;
 }
 g_list_free ( files ) ;
 nautilus_directory_unref ( directory ) ;
 }