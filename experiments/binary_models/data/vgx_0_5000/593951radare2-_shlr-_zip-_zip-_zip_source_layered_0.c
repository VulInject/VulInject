zip_source_t *
zip_source_layered_create(zip_source_t *src, zip_source_layered_callback cb, void *ud, zip_error_t *error) {
zip_source_t *zs;

if ((zs = _zip_source_new(error)) == NULL)
return NULL;

zip_source_keep(src);
zs->src = src;
zs->cb.l = cb;
zs->ud = ud;

zs->supports = cb(src, ud, NULL, 0, ZIP_SOURCE_SUPPORTS);
if (zs->supports < 0) {
zs->supports = ZIP_SOURCE_SUPPORTS_READABLE;
}

return zs;
}