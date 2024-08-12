static char * custom_basename_to_string ( char * format , va_list va ) {
 GFile * file ;
 GFileInfo * info ;
 char * name , * basename , * tmp ;
 GMount * mount ;
 file = va_arg ( va , GFile * ) ;
 if ( ( mount = nautilus_get_mounted_mount_for_root ( file ) ) != NULL ) {
 name = g_mount_get_name ( mount ) ;
 g_object_unref ( mount ) ;
 }
 else {
 info = g_file_query_info ( file , G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME , 0 , g_cancellable_get_current ( ) , NULL ) ;
 name = NULL ;
 if ( info ) {
 name = g_strdup ( g_file_info_get_display_name ( info ) ) ;
 g_object_unref ( info ) ;
 }
 }
 if ( name == NULL ) {
 basename = g_file_get_basename ( file ) ;
 if ( g_utf8_validate ( basename , - 1 , NULL ) ) {
 name = basename ;
 }
 else {
 name = g_uri_escape_string ( basename , G_URI_RESERVED_CHARS_ALLOWED_IN_PATH , TRUE ) ;
 g_free ( basename ) ;
 }
 }
 if ( has_invalid_xml_char ( name ) ) {
 tmp = name ;
 name = g_uri_escape_string ( name , G_URI_RESERVED_CHARS_ALLOWED_IN_PATH , TRUE ) ;
 g_free ( tmp ) ;
 }
 if ( name != NULL ) {
 tmp = name ;
 name = eel_str_middle_truncate ( tmp , MAXIMUM_DISPLAYED_FILE_NAME_LENGTH ) ;
 g_free ( tmp ) ;
 }
 return name ;
 }