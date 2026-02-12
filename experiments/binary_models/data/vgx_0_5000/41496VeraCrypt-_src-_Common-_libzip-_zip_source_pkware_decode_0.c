zip_source_t *
zip_source_pkware_decode(zip_t *za, zip_source_t *src, zip_uint16_t em, int flags, const char *password) {
struct trad_pkware *ctx;
zip_source_t *s2;

if (password == NULL || src == NULL || em != ZIP_EM_TRAD_PKWARE) {
zip_error_set(&za->error, ZIP_ER_INVAL, 0);
return NULL;
}
if (flags & ZIP_CODEC_ENCODE) {
zip_error_set(&za->error, ZIP_ER_ENCRNOTSUPP, 0);
return NULL;
}

if ((ctx = trad_pkware_new(password, &za->error)) == NULL) {
return NULL;
}

if ((s2 = zip_source_layered(za, src, pkware_decrypt, ctx)) == NULL) {
trad_pkware_free(ctx);
return NULL;
}

return s2;
}