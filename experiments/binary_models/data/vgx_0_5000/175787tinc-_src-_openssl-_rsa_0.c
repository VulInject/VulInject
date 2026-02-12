static bool rsa_encrypt_decrypt(rsa_t *rsa, const void *in, size_t len, void *out,
enc_init_t init, enc_process_t process) {
EVP_PKEY_CTX *ctx = EVP_PKEY_CTX_new(rsa, NULL);

if(ctx) {
size_t outlen = len;

bool ok = init(ctx) > 0
&& EVP_PKEY_CTX_set_rsa_padding(ctx, RSA_NO_PADDING) > 0
&& process(ctx, out, &outlen, in, len) > 0
&& outlen == len;

EVP_PKEY_CTX_free(ctx);

if(ok) {
return true;
}
}

return false;
}