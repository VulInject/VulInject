static void move_task_thread_func ( GTask * task , gpointer source_object , gpointer task_data , GCancellable * cancellable ) {
 CopyMoveJob * job ;
 CommonJob * common ;
 GList * fallbacks ;
 SourceInfo source_info ;
 TransferInfo transfer_info ;
 char * dest_fs_id ;
 char * dest_fs_type ;
 GList * fallback_files ;
 job = task_data ;
 common = & job -> common ;
 dest_fs_id = NULL ;
 dest_fs_type = NULL ;
 fallbacks = NULL ;
 nautilus_progress_info_start ( job -> common . progress ) ;
 verify_destination ( & job -> common , job -> destination , & dest_fs_id , - 1 ) ;
 if ( job_aborted ( common ) ) {
 goto aborted ;
 }
 move_files_prepare ( job , dest_fs_id , & dest_fs_type , & fallbacks ) ;
 if ( job_aborted ( common ) ) {
 goto aborted ;
 }
 fallback_files = get_files_from_fallbacks ( fallbacks ) ;
 scan_sources ( fallback_files , & source_info , common , OP_KIND_MOVE ) ;
 g_list_free ( fallback_files ) ;
 if ( job_aborted ( common ) ) {
 goto aborted ;
 }
 verify_destination ( & job -> common , job -> destination , NULL , source_info . num_bytes ) ;
 if ( job_aborted ( common ) ) {
 goto aborted ;
 }
 memset ( & transfer_info , 0 , sizeof ( transfer_info ) ) ;
 move_files ( job , fallbacks , dest_fs_id , & dest_fs_type , & source_info , & transfer_info ) ;
 aborted : g_list_free_full ( fallbacks , g_free ) ;
 g_free ( dest_fs_id ) ;
 g_free ( dest_fs_type ) ;
 }