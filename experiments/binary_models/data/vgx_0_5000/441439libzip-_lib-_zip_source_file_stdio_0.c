zip_int64_t
_zip_stdio_op_read(zip_source_file_context_t *ctx, void *buf, zip_uint64_t len) {
size_t i;
if (len > SIZE_MAX) {
len = SIZE_MAX;
}

if ((i = fread(buf, 1, (size_t)len, ctx->f)) == 0) {
if (ferror((FILE *)ctx->f)) {
zip_error_set(&ctx->error, ZIP_ER_READ, errno);
return -1;
}
}

return (zip_int64_t)i;
}