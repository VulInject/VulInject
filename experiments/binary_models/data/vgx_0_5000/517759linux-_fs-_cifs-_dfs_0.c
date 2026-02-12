static int get_session(struct cifs_mount_ctx *mnt_ctx, const char *full_path)
{
struct smb3_fs_context *ctx = mnt_ctx->fs_ctx;
int rc;

ctx->leaf_fullpath = (char *)full_path;
rc = cifs_mount_get_session(mnt_ctx);
ctx->leaf_fullpath = NULL;
if (!rc) {
struct cifs_ses *ses = mnt_ctx->ses;

mutex_lock(&ses->session_mutex);
ses->dfs_root_ses = mnt_ctx->root_ses;
mutex_unlock(&ses->session_mutex);
}
return rc;
}