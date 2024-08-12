static int aes_gcm_tls_cipher ( EVP_CIPHER_CTX * ctx , unsigned char * out , const unsigned char * in , size_t len ) {
 EVP_AES_GCM_CTX * gctx = EVP_C_DATA ( EVP_AES_GCM_CTX , ctx ) ;
 int rv = - 1 ;
 if ( out != in || len < ( EVP_GCM_TLS_EXPLICIT_IV_LEN + EVP_GCM_TLS_TAG_LEN ) ) return - 1 ;
 if ( EVP_CIPHER_CTX_ctrl ( ctx , EVP_CIPHER_CTX_encrypting ( ctx ) ? EVP_CTRL_GCM_IV_GEN : EVP_CTRL_GCM_SET_IV_INV , EVP_GCM_TLS_EXPLICIT_IV_LEN , out ) <= 0 ) goto err ;
 if ( CRYPTO_gcm128_aad ( & gctx -> gcm , EVP_CIPHER_CTX_buf_noconst ( ctx ) , gctx -> tls_aad_len ) ) goto err ;
 in += EVP_GCM_TLS_EXPLICIT_IV_LEN ;
 out += EVP_GCM_TLS_EXPLICIT_IV_LEN ;
 len -= EVP_GCM_TLS_EXPLICIT_IV_LEN + EVP_GCM_TLS_TAG_LEN ;
 if ( EVP_CIPHER_CTX_encrypting ( ctx ) ) {
 if ( gctx -> ctr ) {
 size_t bulk = 0 ;
 # if defined ( AES_GCM_ASM ) if ( len >= 32 && AES_GCM_ASM ( gctx ) ) {
 if ( CRYPTO_gcm128_encrypt ( & gctx -> gcm , NULL , NULL , 0 ) ) return - 1 ;
 bulk = AES_gcm_encrypt ( in , out , len , gctx -> gcm . key , gctx -> gcm . Yi . c , gctx -> gcm . Xi . u ) ;
 gctx -> gcm . len . u [ 1 ] += bulk ;
 }
 # endif if ( CRYPTO_gcm128_encrypt_ctr32 ( & gctx -> gcm , in + bulk , out + bulk , len - bulk , gctx -> ctr ) ) goto err ;
 }
 else {
 size_t bulk = 0 ;
 # if defined ( AES_GCM_ASM2 ) if ( len >= 32 && AES_GCM_ASM2 ( gctx ) ) {
 if ( CRYPTO_gcm128_encrypt ( & gctx -> gcm , NULL , NULL , 0 ) ) return - 1 ;
 bulk = AES_gcm_encrypt ( in , out , len , gctx -> gcm . key , gctx -> gcm . Yi . c , gctx -> gcm . Xi . u ) ;
 gctx -> gcm . len . u [ 1 ] += bulk ;
 }
 # endif if ( CRYPTO_gcm128_encrypt ( & gctx -> gcm , in + bulk , out + bulk , len - bulk ) ) goto err ;
 }
 out += len ;
 CRYPTO_gcm128_tag ( & gctx -> gcm , out , EVP_GCM_TLS_TAG_LEN ) ;
 rv = len + EVP_GCM_TLS_EXPLICIT_IV_LEN + EVP_GCM_TLS_TAG_LEN ;
 }
 else {
 if ( gctx -> ctr ) {
 size_t bulk = 0 ;
 # if defined ( AES_GCM_ASM ) if ( len >= 16 && AES_GCM_ASM ( gctx ) ) {
 if ( CRYPTO_gcm128_decrypt ( & gctx -> gcm , NULL , NULL , 0 ) ) return - 1 ;
 bulk = AES_gcm_decrypt ( in , out , len , gctx -> gcm . key , gctx -> gcm . Yi . c , gctx -> gcm . Xi . u ) ;
 gctx -> gcm . len . u [ 1 ] += bulk ;
 }
 # endif if ( CRYPTO_gcm128_decrypt_ctr32 ( & gctx -> gcm , in + bulk , out + bulk , len - bulk , gctx -> ctr ) ) goto err ;
 }
 else {
 size_t bulk = 0 ;
 # if defined ( AES_GCM_ASM2 ) if ( len >= 16 && AES_GCM_ASM2 ( gctx ) ) {
 if ( CRYPTO_gcm128_decrypt ( & gctx -> gcm , NULL , NULL , 0 ) ) return - 1 ;
 bulk = AES_gcm_decrypt ( in , out , len , gctx -> gcm . key , gctx -> gcm . Yi . c , gctx -> gcm . Xi . u ) ;
 gctx -> gcm . len . u [ 1 ] += bulk ;
 }
 # endif if ( CRYPTO_gcm128_decrypt ( & gctx -> gcm , in + bulk , out + bulk , len - bulk ) ) goto err ;
 }
 CRYPTO_gcm128_tag ( & gctx -> gcm , EVP_CIPHER_CTX_buf_noconst ( ctx ) , EVP_GCM_TLS_TAG_LEN ) ;
 if ( CRYPTO_memcmp ( EVP_CIPHER_CTX_buf_noconst ( ctx ) , in + len , EVP_GCM_TLS_TAG_LEN ) ) {
 OPENSSL_cleanse ( out , len ) ;
 goto err ;
 }
 rv = len ;
 }
 err : gctx -> iv_set = 0 ;
 gctx -> tls_aad_len = - 1 ;
 return rv ;
 }