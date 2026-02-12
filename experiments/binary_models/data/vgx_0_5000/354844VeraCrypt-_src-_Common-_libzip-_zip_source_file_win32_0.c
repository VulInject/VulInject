static bool
_zip_stat_win32(zip_source_file_context_t *ctx, zip_source_file_stat_t *st, HANDLE h) {
FILETIME mtimeft;
time_t mtime;
LARGE_INTEGER size;

if (!GetFileTime(h, NULL, NULL, &mtimeft)) {
zip_error_set(&ctx->error, ZIP_ER_READ, _zip_win32_error_to_errno(GetLastError()));
return false;
}
if (_zip_filetime_to_time_t(mtimeft, &mtime) < 0) {
zip_error_set(&ctx->error, ZIP_ER_READ, ERANGE);
return false;
}

st->exists = true;
st->mtime = mtime;

if (GetFileType(h) == FILE_TYPE_DISK) {
st->regular_file = 1;

if (!GetFileSizeEx(h, &size)) {
zip_error_set(&ctx->error, ZIP_ER_READ, _zip_win32_error_to_errno(GetLastError()));
return false;
}

st->size = (zip_uint64_t)size.QuadPart;
}



return true;
}