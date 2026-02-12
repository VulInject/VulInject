static bool
_zip_win32_named_op_stat(zip_source_file_context_t *ctx, zip_source_file_stat_t *st) {
zip_win32_file_operations_t *file_ops = (zip_win32_file_operations_t *)ctx->ops_userdata;

WIN32_FILE_ATTRIBUTE_DATA file_attributes;

if (!file_ops->get_file_attributes_ex(ctx->fname, GetFileExInfoStandard, &file_attributes)) {
DWORD error = GetLastError();
if (error == ERROR_FILE_NOT_FOUND) {
st->exists = false;
return true;
}
zip_error_set(&ctx->error, ZIP_ER_READ, _zip_win32_error_to_errno(error));
return false;
}

st->exists = true;
st->regular_file = false;

if (file_attributes.dwFileAttributes != INVALID_FILE_ATTRIBUTES) {
if ((file_attributes.dwFileAttributes & (FILE_ATTRIBUTE_DIRECTORY | FILE_ATTRIBUTE_DEVICE | FILE_ATTRIBUTE_REPARSE_POINT)) == 0) {
st->regular_file = true;
}
}

if (!_zip_filetime_to_time_t(file_attributes.ftLastWriteTime, &st->mtime)) {
zip_error_set(&ctx->error, ZIP_ER_READ, ERANGE);
return false;
}
st->size = ((zip_uint64_t)file_attributes.nFileSizeHigh << 32) | file_attributes.nFileSizeLow;



return true;
}