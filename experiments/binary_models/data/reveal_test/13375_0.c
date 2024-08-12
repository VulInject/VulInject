static void activate_activation_uris_ready_callback ( GList * files_ignore , gpointer callback_data ) {
 ActivateParameters * parameters = callback_data ;
 GList * l , * next , * files ;
 NautilusFile * file ;
 LaunchLocation * location ;
 parameters -> files_handle = NULL ;
 for ( l = parameters -> locations ;
 l != NULL ;
 l = next ) {
 location = l -> data ;
 file = location -> file ;
 next = l -> next ;
 if ( file_was_cancelled ( file ) ) {
 launch_location_free ( location ) ;
 parameters -> locations = g_list_delete_link ( parameters -> locations , l ) ;
 continue ;
 }
 if ( nautilus_file_is_broken_symbolic_link ( file ) ) {
 launch_location_free ( location ) ;
 parameters -> locations = g_list_delete_link ( parameters -> locations , l ) ;
 pause_activation_timed_cancel ( parameters ) ;
 report_broken_symbolic_link ( parameters -> parent_window , file ) ;
 unpause_activation_timed_cancel ( parameters ) ;
 continue ;
 }
 if ( nautilus_file_get_file_type ( file ) == G_FILE_TYPE_MOUNTABLE && ! nautilus_file_has_activation_uri ( file ) ) {
 launch_location_free ( location ) ;
 parameters -> locations = g_list_delete_link ( parameters -> locations , l ) ;
 continue ;
 }
 }
 if ( parameters -> locations == NULL ) {
 activation_parameters_free ( parameters ) ;
 return ;
 }
 for ( l = parameters -> locations ;
 l != NULL ;
 l = l -> next ) {
 char * uri ;
 location = l -> data ;
 uri = nautilus_file_get_activation_uri ( location -> file ) ;
 if ( uri != NULL ) {
 launch_location_update_from_uri ( location , uri ) ;
 }
 g_free ( uri ) ;
 }
 files = get_file_list_for_launch_locations ( parameters -> locations ) ;
 nautilus_file_list_call_when_ready ( files , nautilus_mime_actions_get_required_file_attributes ( ) , & parameters -> files_handle , activate_callback , parameters ) ;
 nautilus_file_list_free ( files ) ;
 }