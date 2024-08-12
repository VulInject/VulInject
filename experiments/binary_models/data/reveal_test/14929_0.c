static void test_opt_reconnect ( ) {
 MYSQL * lmysql ;
 my_bool my_true = TRUE ;
 myheader ( "test_opt_reconnect" ) ;
 if ( ! ( lmysql = mysql_client_init ( NULL ) ) ) {
 myerror ( "mysql_client_init() failed" ) ;
 exit ( 1 ) ;
 }
 if ( ! opt_silent ) fprintf ( stdout , "reconnect before mysql_options: %d\n" , lmysql -> reconnect ) ;
 DIE_UNLESS ( lmysql -> reconnect == 0 ) ;
 if ( mysql_options ( lmysql , MYSQL_OPT_RECONNECT , & my_true ) ) {
 myerror ( "mysql_options failed: unknown option MYSQL_OPT_RECONNECT\n" ) ;
 DIE_UNLESS ( 0 ) ;
 }
 if ( ! opt_silent ) fprintf ( stdout , "reconnect after mysql_options: %d\n" , lmysql -> reconnect ) ;
 DIE_UNLESS ( lmysql -> reconnect == 1 ) ;
 if ( ! ( mysql_real_connect ( lmysql , opt_host , opt_user , opt_password , current_db , opt_port , opt_unix_socket , 0 ) ) ) {
 myerror ( "connection failed" ) ;
 DIE_UNLESS ( 0 ) ;
 }
 if ( ! opt_silent ) fprintf ( stdout , "reconnect after mysql_real_connect: %d\n" , lmysql -> reconnect ) ;
 DIE_UNLESS ( lmysql -> reconnect == 1 ) ;
 mysql_close ( lmysql ) ;
 if ( ! ( lmysql = mysql_client_init ( NULL ) ) ) {
 myerror ( "mysql_client_init() failed" ) ;
 DIE_UNLESS ( 0 ) ;
 }
 if ( ! opt_silent ) fprintf ( stdout , "reconnect before mysql_real_connect: %d\n" , lmysql -> reconnect ) ;
 DIE_UNLESS ( lmysql -> reconnect == 0 ) ;
 if ( ! ( mysql_real_connect ( lmysql , opt_host , opt_user , opt_password , current_db , opt_port , opt_unix_socket , 0 ) ) ) {
 myerror ( "connection failed" ) ;
 DIE_UNLESS ( 0 ) ;
 }
 if ( ! opt_silent ) fprintf ( stdout , "reconnect after mysql_real_connect: %d\n" , lmysql -> reconnect ) ;
 DIE_UNLESS ( lmysql -> reconnect == 0 ) ;
 mysql_close ( lmysql ) ;
 }