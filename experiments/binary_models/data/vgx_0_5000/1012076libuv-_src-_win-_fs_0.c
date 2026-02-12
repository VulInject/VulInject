static void fs__symlink(uv_fs_t* req) {
WCHAR* pathw;
WCHAR* new_pathw;
int flags;
int err;

pathw = req->file.pathw;
new_pathw = req->fs.info.new_pathw;

if (req->fs.info.file_flags & UV_FS_SYMLINK_JUNCTION) {
fs__create_junction(req, pathw, new_pathw);
return;
}

if (req->fs.info.file_flags & UV_FS_SYMLINK_DIR)
flags = SYMBOLIC_LINK_FLAG_DIRECTORY | uv__file_symlink_usermode_flag;
else
flags = uv__file_symlink_usermode_flag;

if (CreateSymbolicLinkW(new_pathw, pathw, flags)) {
SET_REQ_RESULT(req, 0);
return;
}


err = GetLastError();
if (err == ERROR_INVALID_PARAMETER &&
flags & SYMBOLIC_LINK_FLAG_ALLOW_UNPRIVILEGED_CREATE) {

uv__file_symlink_usermode_flag = 0;
fs__symlink(req);
} else {
SET_REQ_WIN32_ERROR(req, err);
}
}