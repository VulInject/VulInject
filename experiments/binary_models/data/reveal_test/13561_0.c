static void extract_job_on_progress ( AutoarExtractor * extractor , guint64 archive_current_decompressed_size , guint archive_current_decompressed_files , gpointer user_data ) {
 ExtractJob * extract_job = user_data ;
 CommonJob * common = user_data ;
 GFile * source_file ;
 char * details ;
 double elapsed ;
 double transfer_rate ;
 int remaining_time ;
 guint64 archive_total_decompressed_size ;
 gdouble archive_weight ;
 gdouble archive_decompress_progress ;
 guint64 job_completed_size ;
 gdouble job_progress ;
 source_file = autoar_extractor_get_source_file ( extractor ) ;
 nautilus_progress_info_take_status ( common -> progress , f ( _ ( "Extracting “%B”" ) , source_file ) ) ;
 archive_total_decompressed_size = autoar_extractor_get_total_size ( extractor ) ;
 archive_decompress_progress = ( gdouble ) archive_current_decompressed_size / ( gdouble ) archive_total_decompressed_size ;
 archive_weight = 0 ;
 if ( extract_job -> total_compressed_size ) {
 archive_weight = ( gdouble ) extract_job -> archive_compressed_size / ( gdouble ) extract_job -> total_compressed_size ;
 }
 job_progress = archive_decompress_progress * archive_weight + extract_job -> base_progress ;
 elapsed = g_timer_elapsed ( common -> time , NULL ) ;
 transfer_rate = 0 ;
 remaining_time = - 1 ;
 job_completed_size = job_progress * extract_job -> total_compressed_size ;
 if ( elapsed > 0 ) {
 transfer_rate = job_completed_size / elapsed ;
 }
 if ( transfer_rate > 0 ) {
 remaining_time = ( extract_job -> total_compressed_size - job_completed_size ) / transfer_rate ;
 }
 if ( elapsed < SECONDS_NEEDED_FOR_RELIABLE_TRANSFER_RATE || transfer_rate == 0 ) {
 details = f ( _ ( "%S / %S" ) , job_completed_size , extract_job -> total_compressed_size ) ;
 }
 else {
 details = f ( ngettext ( "%S / %S \xE2\x80\x94 %T left (%S/sec)" , "%S / %S \xE2\x80\x94 %T left (%S/sec)" , seconds_count_format_time_units ( remaining_time ) ) , job_completed_size , extract_job -> total_compressed_size , remaining_time , ( goffset ) transfer_rate ) ;
 }
 nautilus_progress_info_take_details ( common -> progress , details ) ;
 if ( elapsed > SECONDS_NEEDED_FOR_APROXIMATE_TRANSFER_RATE ) {
 nautilus_progress_info_set_remaining_time ( common -> progress , remaining_time ) ;
 nautilus_progress_info_set_elapsed_time ( common -> progress , elapsed ) ;
 }
 nautilus_progress_info_set_progress ( common -> progress , job_progress , 1 ) ;
 }