void mct_close_log ( ) {
 if ( ! mct_log_file ) return ;
 my_fclose ( mct_log_file , MYF ( 0 ) ) ;
 mct_log_file = NULL ;
 }