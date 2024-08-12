static int kexinit ( LIBSSH2_SESSION * session ) {
 size_t data_len = 62 ;
 size_t kex_len , hostkey_len = 0 ;
 size_t crypt_cs_len , crypt_sc_len ;
 size_t comp_cs_len , comp_sc_len ;
 size_t mac_cs_len , mac_sc_len ;
 size_t lang_cs_len , lang_sc_len ;
 unsigned char * data , * s ;
 int rc ;
 if ( session -> kexinit_state == libssh2_NB_state_idle ) {
 kex_len = LIBSSH2_METHOD_PREFS_LEN ( session -> kex_prefs , libssh2_kex_methods ) ;
 hostkey_len = LIBSSH2_METHOD_PREFS_LEN ( session -> hostkey_prefs , libssh2_hostkey_methods ( ) ) ;
 crypt_cs_len = LIBSSH2_METHOD_PREFS_LEN ( session -> local . crypt_prefs , libssh2_crypt_methods ( ) ) ;
 crypt_sc_len = LIBSSH2_METHOD_PREFS_LEN ( session -> remote . crypt_prefs , libssh2_crypt_methods ( ) ) ;
 mac_cs_len = LIBSSH2_METHOD_PREFS_LEN ( session -> local . mac_prefs , _libssh2_mac_methods ( ) ) ;
 mac_sc_len = LIBSSH2_METHOD_PREFS_LEN ( session -> remote . mac_prefs , _libssh2_mac_methods ( ) ) ;
 comp_cs_len = LIBSSH2_METHOD_PREFS_LEN ( session -> local . comp_prefs , _libssh2_comp_methods ( session ) ) ;
 comp_sc_len = LIBSSH2_METHOD_PREFS_LEN ( session -> remote . comp_prefs , _libssh2_comp_methods ( session ) ) ;
 lang_cs_len = LIBSSH2_METHOD_PREFS_LEN ( session -> local . lang_prefs , NULL ) ;
 lang_sc_len = LIBSSH2_METHOD_PREFS_LEN ( session -> remote . lang_prefs , NULL ) ;
 data_len += kex_len + hostkey_len + crypt_cs_len + crypt_sc_len + comp_cs_len + comp_sc_len + mac_cs_len + mac_sc_len + lang_cs_len + lang_sc_len ;
 s = data = LIBSSH2_ALLOC ( session , data_len ) ;
 if ( ! data ) {
 return _libssh2_error ( session , LIBSSH2_ERROR_ALLOC , "Unable to allocate memory" ) ;
 }
 * ( s ++ ) = SSH_MSG_KEXINIT ;
 _libssh2_random ( s , 16 ) ;
 s += 16 ;
 LIBSSH2_METHOD_PREFS_STR ( s , kex_len , session -> kex_prefs , libssh2_kex_methods ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , hostkey_len , session -> hostkey_prefs , libssh2_hostkey_methods ( ) ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , crypt_cs_len , session -> local . crypt_prefs , libssh2_crypt_methods ( ) ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , crypt_sc_len , session -> remote . crypt_prefs , libssh2_crypt_methods ( ) ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , mac_cs_len , session -> local . mac_prefs , _libssh2_mac_methods ( ) ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , mac_sc_len , session -> remote . mac_prefs , _libssh2_mac_methods ( ) ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , comp_cs_len , session -> local . comp_prefs , _libssh2_comp_methods ( session ) ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , comp_sc_len , session -> remote . comp_prefs , _libssh2_comp_methods ( session ) ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , lang_cs_len , session -> local . lang_prefs , NULL ) ;
 LIBSSH2_METHOD_PREFS_STR ( s , lang_sc_len , session -> remote . lang_prefs , NULL ) ;
 * ( s ++ ) = 0 ;
 _libssh2_htonu32 ( s , 0 ) ;
 # ifdef LIBSSH2DEBUG {
 unsigned char * p = data + 21 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent KEX: %s" , p ) ;
 p += kex_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent HOSTKEY: %s" , p ) ;
 p += hostkey_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent CRYPT_CS: %s" , p ) ;
 p += crypt_cs_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent CRYPT_SC: %s" , p ) ;
 p += crypt_sc_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent MAC_CS: %s" , p ) ;
 p += mac_cs_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent MAC_SC: %s" , p ) ;
 p += mac_sc_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent COMP_CS: %s" , p ) ;
 p += comp_cs_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent COMP_SC: %s" , p ) ;
 p += comp_sc_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent LANG_CS: %s" , p ) ;
 p += lang_cs_len + 4 ;
 _libssh2_debug ( session , LIBSSH2_TRACE_KEX , "Sent LANG_SC: %s" , p ) ;
 p += lang_sc_len + 4 ;
 }
 # endif session -> kexinit_state = libssh2_NB_state_created ;
 }
 else {
 data = session -> kexinit_data ;
 data_len = session -> kexinit_data_len ;
 session -> kexinit_data = NULL ;
 session -> kexinit_data_len = 0 ;
 }
 rc = _libssh2_transport_send ( session , data , data_len , NULL , 0 ) ;
 if ( rc == LIBSSH2_ERROR_EAGAIN ) {
 session -> kexinit_data = data ;
 session -> kexinit_data_len = data_len ;
 return rc ;
 }
 else if ( rc ) {
 LIBSSH2_FREE ( session , data ) ;
 session -> kexinit_state = libssh2_NB_state_idle ;
 return _libssh2_error ( session , rc , "Unable to send KEXINIT packet to remote host" ) ;
 }
 if ( session -> local . kexinit ) {
 LIBSSH2_FREE ( session , session -> local . kexinit ) ;
 }
 session -> local . kexinit = data ;
 session -> local . kexinit_len = data_len ;
 session -> kexinit_state = libssh2_NB_state_idle ;
 return 0 ;
 }