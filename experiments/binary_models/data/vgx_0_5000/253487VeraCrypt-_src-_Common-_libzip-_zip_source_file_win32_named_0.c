static HANDLE
win32_named_open(zip_source_file_context_t *ctx, const char *name, bool temporary, PSECURITY_ATTRIBUTES security_attributes) {
zip_win32_file_operations_t *file_ops = (zip_win32_file_operations_t *)ctx->ops_userdata;

DWORD access = GENERIC_READ;
DWORD share_mode = FILE_SHARE_READ | FILE_SHARE_WRITE;
DWORD creation_disposition = OPEN_EXISTING;
DWORD file_attributes = FILE_ATTRIBUTE_NORMAL;
HANDLE h;

if (temporary) {
access = GENERIC_READ | GENERIC_WRITE;
share_mode = FILE_SHARE_READ;
creation_disposition = CREATE_NEW;
file_attributes = FILE_ATTRIBUTE_NORMAL | FILE_ATTRIBUTE_TEMPORARY;
}

h = file_ops->create_file(name, access, share_mode, security_attributes, creation_disposition, file_attributes, NULL);

if (h == INVALID_HANDLE_VALUE) {
zip_error_set(&ctx->error, ZIP_ER_OPEN, _zip_win32_error_to_errno(GetLastError()));
}

return h;
}