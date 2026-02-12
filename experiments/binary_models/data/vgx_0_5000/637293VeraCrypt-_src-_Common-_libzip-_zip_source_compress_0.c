static zip_source_t *
compression_source_new(zip_t *za, zip_source_t *src, zip_int32_t method, bool compress, int compression_flags) {
struct context *ctx;
zip_source_t *s2;
zip_compression_algorithm_t *algorithm = NULL;

if (src == NULL) {
zip_error_set(&za->error, ZIP_ER_INVAL, 0);
return NULL;
}

if ((algorithm = get_algorithm(method, compress)) == NULL) {
zip_error_set(&za->error, ZIP_ER_COMPNOTSUPP, 0);
return NULL;
}

if ((ctx = context_new(method, compress, compression_flags, algorithm)) == NULL) {
zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
return NULL;
}

if ((s2 = zip_source_layered(za, src, compress_callback, ctx)) == NULL) {
context_free(ctx);
return NULL;
}

return s2;
}