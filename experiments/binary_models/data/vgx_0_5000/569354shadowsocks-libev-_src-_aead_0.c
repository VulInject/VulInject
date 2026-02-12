static void
aead_cipher_ctx_set_key(cipher_ctx_t *cipher_ctx, int enc)
{
const digest_type_t *md = mbedtls_md_info_from_string("SHA1");
if (md == NULL) {
FATAL("SHA1 Digest not found in crypto library");
}

int err = crypto_hkdf(md,
cipher_ctx->salt, cipher_ctx->cipher->key_len,
cipher_ctx->cipher->key, cipher_ctx->cipher->key_len,
(uint8_t *)SUBKEY_INFO, strlen(SUBKEY_INFO),
cipher_ctx->skey, cipher_ctx->cipher->key_len);
if (err) {
FATAL("Unable to generate subkey");
}

memset(cipher_ctx->nonce, 0, cipher_ctx->cipher->nonce_len);


if (cipher_ctx->cipher->method >= CHACHA20POLY1305IETF) {
return;
}
if (cipher_ctx->aes256gcm_ctx != NULL) {
if (crypto_aead_aes256gcm_beforenm(cipher_ctx->aes256gcm_ctx,
cipher_ctx->skey) != 0) {
FATAL("Cannot set libsodium cipher key");
}
return;
}
if (mbedtls_cipher_setkey(cipher_ctx->evp, cipher_ctx->skey,
cipher_ctx->cipher->key_len * 8, enc) != 0) {
FATAL("Cannot set mbed TLS cipher key");
}
if (mbedtls_cipher_reset(cipher_ctx->evp) != 0) {
FATAL("Cannot finish preparation of mbed TLS cipher context");
}
}