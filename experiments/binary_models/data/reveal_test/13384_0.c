static void deep_count_load ( DeepCountState * state , GFile * location ) {
 state -> deep_count_location = g_object_ref ( location ) ;
 # ifdef DEBUG_LOAD_DIRECTORY g_message ( "load_directory called to get deep file count for %p" , location ) ;
 # endif g_file_enumerate_children_async ( state -> deep_count_location , G_FILE_ATTRIBUTE_STANDARD_NAME "," G_FILE_ATTRIBUTE_STANDARD_TYPE "," G_FILE_ATTRIBUTE_STANDARD_SIZE "," G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN "," G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP "," G_FILE_ATTRIBUTE_ID_FILESYSTEM "," G_FILE_ATTRIBUTE_UNIX_INODE , G_FILE_QUERY_INFO_NOFOLLOW_SYMLINKS , G_PRIORITY_LOW , state -> cancellable , deep_count_callback , state ) ;
 }