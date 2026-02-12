zip_int64_t
zip_source_read(zip_source_t *src, void *data, zip_uint64_t len) {
zip_uint64_t bytes_read;
zip_int64_t n;

if (src->source_closed) {
return -1;
}
if (!ZIP_SOURCE_IS_OPEN_READING(src) || len > ZIP_INT64_MAX || (len > 0 && data == NULL)) {
zip_error_set(&src->error, ZIP_ER_INVAL, 0);
return -1;
}

if (src->had_read_error) {
return -1;
}

if (_zip_source_eof(src)) {
return 0;
}

if (len == 0) {
return 0;
}

bytes_read = 0;
while (bytes_read < len) {
if ((n = _zip_source_call(src, (zip_uint8_t *)data + bytes_read, len - bytes_read, ZIP_SOURCE_READ)) < 0) {
src->had_read_error = true;
if (bytes_read == 0) {
return -1;
}
else {
return (zip_int64_t)bytes_read;
}
}

if (n == 0) {
src->eof = 1;
break;
}

bytes_read += (zip_uint64_t)n;
}

return (zip_int64_t)bytes_read;
}