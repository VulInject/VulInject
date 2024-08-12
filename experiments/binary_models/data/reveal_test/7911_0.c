static int get_bin_log_name ( MYSQL * mysql_con , char * buff_log_name , uint buff_len ) {
 MYSQL_RES * res ;
 MYSQL_ROW row ;
 if ( mysql_query ( mysql_con , "SHOW MASTER STATUS" ) || ! ( res = mysql_store_result ( mysql ) ) ) return 1 ;
 if ( ! ( row = mysql_fetch_row ( res ) ) ) {
 mysql_free_result ( res ) ;
 return 1 ;
 }
 strmake ( buff_log_name , row [ 0 ] , buff_len - 1 ) ;
 mysql_free_result ( res ) ;
 return 0 ;
 }