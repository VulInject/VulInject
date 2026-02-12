static apr_status_t tree_start_do(void *baton, apr_pool_t *p, apr_pool_t *ptemp)
{
md_util_fwalk_t *ctx = baton;
apr_finfo_t info;
apr_status_t rv;
apr_int32_t wanted = ctx->follow_links? APR_FINFO_TYPE : (APR_FINFO_TYPE|APR_FINFO_LINK);

rv = apr_stat(&info, ctx->path, wanted, ptemp);
if (rv == APR_SUCCESS) {
switch (info.filetype) {
case APR_DIR:
rv = tree_do(ctx, p, ptemp, ctx->path);
break;
default:
rv = APR_EINVAL;
}
}
return rv;
}