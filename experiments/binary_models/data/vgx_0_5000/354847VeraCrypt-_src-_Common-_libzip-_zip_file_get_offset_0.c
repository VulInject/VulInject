



zip_uint64_t
_zip_file_get_offset(const zip_t *za, zip_uint64_t idx, zip_error_t *error) {
zip_uint64_t offset;
zip_int32_t size;

if (za->entry[idx].orig == NULL) {
zip_error_set(error, ZIP_ER_INTERNAL, 0);
return 0;
}

offset = za->entry[idx].orig->offset;

if (zip_source_seek(za->src, (zip_int64_t)offset, SEEK_SET) < 0) {
_zip_error_set_from_source(error, za->src);
return 0;
}


if ((size = _zip_dirent_size(za->src, ZIP_EF_LOCAL, error)) < 0)
return 0;

if (offset + (zip_uint32_t)size > ZIP_INT64_MAX) {
zip_error_set(error, ZIP_ER_SEEK, EFBIG);
return 0;
}

return offset + (zip_uint32_t)size;
}