int dtls1_send_hello_verify_request ( SSL * s ) {
 unsigned int msg_len ;
 unsigned char * msg , * buf , * p ;
 if ( s -> state == DTLS1_ST_SW_HELLO_VERIFY_REQUEST_A ) {
 buf = ( unsigned char * ) s -> init_buf -> data ;
 msg = p = & ( buf [ DTLS1_HM_HEADER_LENGTH ] ) ;
 * ( p ++ ) = s -> version >> 8 ;
 * ( p ++ ) = s -> version & 0xFF ;
 if ( s -> ctx -> app_gen_cookie_cb == NULL || s -> ctx -> app_gen_cookie_cb ( s , s -> d1 -> cookie , & ( s -> d1 -> cookie_len ) ) == 0 ) {
 SSLerr ( SSL_F_DTLS1_SEND_HELLO_VERIFY_REQUEST , ERR_R_INTERNAL_ERROR ) ;
 return 0 ;
 }
 * ( p ++ ) = ( unsigned char ) s -> d1 -> cookie_len ;
 memcpy ( p , s -> d1 -> cookie , s -> d1 -> cookie_len ) ;
 p += s -> d1 -> cookie_len ;
 msg_len = p - msg ;
 dtls1_set_message_header ( s , buf , DTLS1_MT_HELLO_VERIFY_REQUEST , msg_len , 0 , msg_len ) ;
 s -> state = DTLS1_ST_SW_HELLO_VERIFY_REQUEST_B ;
 s -> init_num = p - buf ;
 s -> init_off = 0 ;
 }
 return ( dtls1_do_write ( s , SSL3_RT_HANDSHAKE ) ) ;
 }