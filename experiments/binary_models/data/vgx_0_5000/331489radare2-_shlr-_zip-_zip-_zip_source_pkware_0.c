struct zip_source *
zip_source_pkware(struct zip *za, struct zip_source *src,
zip_uint16_t em, int flags, const char *password)
{
struct trad_pkware *ctx;
struct zip_source *s2;

if (password == NULL || src == NULL || em != ZIP_EM_TRAD_PKWARE) {
_zip_error_set(&za->error, ZIP_ER_INVAL, 0);
return NULL;
}
if (flags & ZIP_CODEC_ENCODE) {
_zip_error_set(&za->error, ZIP_ER_ENCRNOTSUPP, 0);
return NULL;
}

if ((ctx=(struct trad_pkware *)malloc(sizeof(*ctx))) == NULL) {
_zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
return NULL;
}

ctx->e[0] = ctx->e[1] = 0;

ctx->key[0] = KEY0;
ctx->key[1] = KEY1;
ctx->key[2] = KEY2;
decrypt(ctx, NULL, (const zip_uint8_t *)password, strlen(password), 1);

if ((s2=zip_source_layered(za, src, pkware_decrypt, ctx)) == NULL) {
pkware_free(ctx);
return NULL;
}

return s2;
}