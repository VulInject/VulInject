int main ( int argc , char * * argv ) {
 int error ;
 MY_INIT ( argv [ 0 ] ) ;
 my_progname_short = my_progname + dirname_length ( my_progname ) ;
 myisamchk_init ( & check_param ) ;
 check_param . opt_lock_memory = 1 ;
 check_param . using_global_keycache = 0 ;
 get_options ( & argc , ( char * * * ) & argv ) ;
 myisam_quick_table_bits = decode_bits ;
 error = 0 ;
 while ( -- argc >= 0 ) {
 int new_error = myisamchk ( & check_param , * ( argv ++ ) ) ;
 if ( ( check_param . testflag & T_REP_ANY ) != T_REP ) check_param . testflag &= ~ T_REP ;
 ( void ) fflush ( stdout ) ;
 ( void ) fflush ( stderr ) ;
 if ( ( check_param . error_printed | check_param . warning_printed ) && ( check_param . testflag & T_FORCE_CREATE ) && ( ! ( check_param . testflag & ( T_REP | T_REP_BY_SORT | T_SORT_RECORDS | T_SORT_INDEX ) ) ) ) {
 uint old_testflag = check_param . testflag ;
 if ( ! ( check_param . testflag & T_REP ) ) check_param . testflag |= T_REP_BY_SORT ;
 check_param . testflag &= ~ T_EXTEND ;
 error |= myisamchk ( & check_param , argv [ - 1 ] ) ;
 check_param . testflag = old_testflag ;
 ( void ) fflush ( stdout ) ;
 ( void ) fflush ( stderr ) ;
 }
 else error |= new_error ;
 if ( argc && ( ! ( check_param . testflag & T_SILENT ) || check_param . testflag & T_INFO ) ) {
 puts ( "\n---------\n" ) ;
 ( void ) fflush ( stdout ) ;
 }
 }
 if ( check_param . total_files > 1 ) {
 char buff [ 22 ] , buff2 [ 22 ] ;
 if ( ! ( check_param . testflag & T_SILENT ) || check_param . testflag & T_INFO ) puts ( "\n---------\n" ) ;
 printf ( "\nTotal of all %d MyISAM-files:\nData records: %9s Deleted blocks: %9s\n" , check_param . total_files , llstr ( check_param . total_records , buff ) , llstr ( check_param . total_deleted , buff2 ) ) ;
 }
 free_defaults ( default_argv ) ;
 free_tmpdir ( & myisamchk_tmpdir ) ;
 ft_free_stopwords ( ) ;
 my_end ( check_param . testflag & T_INFO ? MY_CHECK_ERROR | MY_GIVE_INFO : MY_CHECK_ERROR ) ;
 exit ( error ) ;
 # ifndef _lint return 0 ;
 # endif }