bool chacha_poly1305_decrypt(chacha_poly1305_ctx_t *ctx, uint64_t seqnr, const void *vindata, size_t inlen, void *outdata, size_t *outlen) {
uint8_t seqbuf[8];
const uint8_t one[8] = { 1, 0, 0, 0, 0, 0, 0, 0 };      
uint8_t expected_tag[POLY1305_TAGLEN], poly_key[POLY1305_KEYLEN];
const uint8_t *indata = vindata;


memset(poly_key, 0, sizeof(poly_key));
put_u64(seqbuf, seqnr);
chacha_ivsetup(&ctx->main_ctx, seqbuf, NULL);
chacha_encrypt_bytes(&ctx->main_ctx, poly_key, poly_key, sizeof(poly_key));


chacha_ivsetup(&ctx->main_ctx, seqbuf, one);


inlen -= POLY1305_TAGLEN;
const uint8_t *tag = indata + inlen;

poly1305_auth(expected_tag, indata, inlen, poly_key);

if(memcmp(expected_tag, tag, POLY1305_TAGLEN)) {
return false;
}

chacha_encrypt_bytes(&ctx->main_ctx, indata, outdata, inlen);

if(outlen) {
*outlen = inlen;
}

return true;
}