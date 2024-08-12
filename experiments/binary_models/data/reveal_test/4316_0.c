bool cephx_build_service_ticket_reply ( CephContext * cct , CryptoKey & principal_secret , vector < CephXSessionAuthInfo > ticket_info_vec , bool should_encrypt_ticket , CryptoKey & ticket_enc_key , bufferlist & reply ) {
 __u8 service_ticket_reply_v = 1 ;
 : : encode ( service_ticket_reply_v , reply ) ;
 uint32_t num = ticket_info_vec . size ( ) ;
 : : encode ( num , reply ) ;
 ldout ( cct , 10 ) << "build_service_ticket_reply encoding " << num << " tickets with secret " << principal_secret << dendl ;
 for ( vector < CephXSessionAuthInfo > : : iterator ticket_iter = ticket_info_vec . begin ( ) ;
 ticket_iter != ticket_info_vec . end ( ) ;
 ++ ticket_iter ) {
 CephXSessionAuthInfo & info = * ticket_iter ;
 : : encode ( info . service_id , reply ) ;
 __u8 service_ticket_v = 1 ;
 : : encode ( service_ticket_v , reply ) ;
 CephXServiceTicket msg_a ;
 msg_a . session_key = info . session_key ;
 msg_a . validity = info . validity ;
 std : : string error ;
 if ( encode_encrypt ( cct , msg_a , principal_secret , reply , error ) ) {
 ldout ( cct , - 1 ) << "error encoding encrypted: " << error << dendl ;
 return false ;
 }
 bufferlist service_ticket_bl ;
 CephXTicketBlob blob ;
 if ( ! cephx_build_service_ticket_blob ( cct , info , blob ) ) {
 return false ;
 }
 : : encode ( blob , service_ticket_bl ) ;
 ldout ( cct , 30 ) << "service_ticket_blob is " ;
 service_ticket_bl . hexdump ( * _dout ) ;
 * _dout << dendl ;
 : : encode ( ( __u8 ) should_encrypt_ticket , reply ) ;
 if ( should_encrypt_ticket ) {
 if ( encode_encrypt ( cct , service_ticket_bl , ticket_enc_key , reply , error ) ) {
 ldout ( cct , - 1 ) << "error encoding encrypted ticket: " << error << dendl ;
 return false ;
 }
 }
 else {
 : : encode ( service_ticket_bl , reply ) ;
 }
 }
 return true ;
 }