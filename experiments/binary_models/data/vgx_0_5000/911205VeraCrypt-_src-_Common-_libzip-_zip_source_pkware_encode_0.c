static int
encrypt_header(zip_source_t *src, struct trad_pkware *ctx) {
struct zip_stat st;
unsigned short dostime, dosdate;
zip_uint8_t *header;

if (zip_source_stat(src, &st) != 0) {
_zip_error_set_from_source(&ctx->error, src);
return -1;
}

_zip_u2d_time(st.mtime, &dostime, &dosdate);

if ((ctx->buffer = _zip_buffer_new(NULL, ZIP_CRYPTO_PKWARE_HEADERLEN)) == NULL) {
zip_error_set(&ctx->error, ZIP_ER_MEMORY, 0);
return -1;
}

header = _zip_buffer_data(ctx->buffer);


if (!zip_secure_random(header, ZIP_CRYPTO_PKWARE_HEADERLEN - 1)) {
zip_error_set(&ctx->error, ZIP_ER_INTERNAL, 0);
_zip_buffer_free(ctx->buffer);
ctx->buffer = NULL;
return -1;
}
header[ZIP_CRYPTO_PKWARE_HEADERLEN - 1] = (zip_uint8_t)((dostime >> 8) & 0xff);

_zip_pkware_encrypt(&ctx->keys, header, header, ZIP_CRYPTO_PKWARE_HEADERLEN);

return 0;
}