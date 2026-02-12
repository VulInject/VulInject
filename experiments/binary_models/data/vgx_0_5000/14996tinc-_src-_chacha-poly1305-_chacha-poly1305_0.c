bool chacha_poly1305_encrypt(chacha_poly1305_ctx_t *ctx, uint64_t seqnr, const void *indata, size_t inlen, void *voutdata, size_t *outlen) {
uint8_t seqbuf[8];
const uint8_t one[8] = { 1, 0, 0, 0, 0, 0, 0, 0 };      
uint8_t poly_key[POLY1305_KEYLEN];
uint8_t *outdata = voutdata;


memset(poly_key, 0, sizeof(poly_key));
put_u64(seqbuf, seqnr);
chacha_ivsetup(&ctx->main_ctx, seqbuf, NULL);
chacha_encrypt_bytes(&ctx->main_ctx, poly_key, poly_key, sizeof(poly_key));


chacha_ivsetup(&ctx->main_ctx, seqbuf, one);

chacha_encrypt_bytes(&ctx->main_ctx, indata, outdata, inlen);
poly1305_auth(outdata + inlen, outdata, inlen, poly_key);

if(outlen) {
*outlen = inlen + POLY1305_TAGLEN;
}

return true;
}