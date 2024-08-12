static void thumbnail_read_callback ( GObject * source_object , GAsyncResult * res , gpointer user_data ) {
 ThumbnailState * state ;
 gsize file_size ;
 char * file_contents ;
 gboolean result ;
 NautilusDirectory * directory ;
 GdkPixbuf * pixbuf ;
 GFile * location ;
 state = user_data ;
 if ( state -> directory == NULL ) {
 thumbnail_state_free ( state ) ;
 return ;
 }
 directory = nautilus_directory_ref ( state -> directory ) ;
 result = g_file_load_contents_finish ( G_FILE ( source_object ) , res , & file_contents , & file_size , NULL , NULL ) ;
 pixbuf = NULL ;
 if ( result ) {
 pixbuf = get_pixbuf_for_content ( file_size , file_contents ) ;
 g_free ( file_contents ) ;
 }
 if ( pixbuf == NULL && state -> trying_original ) {
 state -> trying_original = FALSE ;
 location = g_file_new_for_path ( state -> file -> details -> thumbnail_path ) ;
 g_file_load_contents_async ( location , state -> cancellable , thumbnail_read_callback , state ) ;
 g_object_unref ( location ) ;
 }
 else {
 state -> directory -> details -> thumbnail_state = NULL ;
 async_job_end ( state -> directory , "thumbnail" ) ;
 thumbnail_got_pixbuf ( state -> directory , state -> file , pixbuf , state -> tried_original ) ;
 thumbnail_state_free ( state ) ;
 }
 nautilus_directory_unref ( directory ) ;
 }