static void choose_program ( GtkDialog * message_dialog , int response , gpointer callback_data ) {
 GtkWidget * dialog ;
 NautilusFile * file ;
 GFile * location ;
 ActivateParametersInstall * parameters = callback_data ;
 if ( response != GTK_RESPONSE_ACCEPT ) {
 gtk_widget_destroy ( GTK_WIDGET ( message_dialog ) ) ;
 activate_parameters_install_free ( parameters ) ;
 return ;
 }
 file = g_object_get_data ( G_OBJECT ( message_dialog ) , "mime-action:file" ) ;
 g_assert ( NAUTILUS_IS_FILE ( file ) ) ;
 location = nautilus_file_get_location ( file ) ;
 nautilus_file_ref ( file ) ;
 gtk_widget_destroy ( GTK_WIDGET ( message_dialog ) ) ;
 dialog = gtk_app_chooser_dialog_new ( parameters -> parent_window , GTK_DIALOG_MODAL , location ) ;
 g_object_set_data_full ( G_OBJECT ( dialog ) , "mime-action:file" , nautilus_file_ref ( file ) , ( GDestroyNotify ) nautilus_file_unref ) ;
 gtk_widget_show ( dialog ) ;
 g_signal_connect ( dialog , "response" , G_CALLBACK ( open_with_response_cb ) , parameters ) ;
 g_object_unref ( location ) ;
 nautilus_file_unref ( file ) ;
 }