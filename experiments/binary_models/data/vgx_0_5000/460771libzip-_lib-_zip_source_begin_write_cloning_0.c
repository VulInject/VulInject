ZIP_EXTERN int
zip_source_begin_write_cloning(zip_source_t *src, zip_uint64_t offset) {
if (ZIP_SOURCE_IS_LAYERED(src)) {
zip_error_set(&src->error, ZIP_ER_OPNOTSUPP, 0);
return -1;
}

if (ZIP_SOURCE_IS_OPEN_WRITING(src)) {
zip_error_set(&src->error, ZIP_ER_INVAL, 0);
return -1;
}

if (_zip_source_call(src, NULL, offset, ZIP_SOURCE_BEGIN_WRITE_CLONING) < 0) {
return -1;
}

src->write_state = ZIP_SOURCE_WRITE_OPEN;

return 0;
}