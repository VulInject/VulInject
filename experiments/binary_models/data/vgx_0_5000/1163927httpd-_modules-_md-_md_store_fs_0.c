static apr_status_t insp_dir(void *baton, apr_pool_t *p, apr_pool_t *ptemp, 
const char *dir, const char *name, apr_filetype_e ftype)
{
inspect_ctx *ctx = baton;
apr_status_t rv;
const char *fpath;

(void)ftype;
md_log_perror(MD_LOG_MARK, MD_LOG_TRACE3, 0, ptemp, "inspecting dir at: %s/%s", dir, name);
if (MD_OK(md_util_path_merge(&fpath, p, dir, name, NULL))) {
ctx->dirname = name;
rv = md_util_files_do(insp, ctx, p, fpath, ctx->aspect, NULL);
if (APR_STATUS_IS_ENOENT(rv)) {
rv = APR_SUCCESS;
}
} 
return rv;
}