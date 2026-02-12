static apr_status_t upgrade_from_1_0(md_store_fs_t *s_fs, apr_pool_t *p, apr_pool_t *ptemp)
{
md_store_group_t g;
apr_status_t rv = APR_SUCCESS;

(void)ptemp;

for (g = MD_SG_NONE; g < MD_SG_COUNT && APR_SUCCESS == rv; ++g) {
rv = md_util_files_do(rename_pkey, s_fs, p, s_fs->base, 
md_store_group_name(g), "*", "pkey.pem", NULL);
}

rv = md_util_files_do(mk_pubcert, s_fs, p, s_fs->base, 
md_store_group_name(MD_SG_DOMAINS), "*", MD_FN_CERT, NULL);
rv = md_util_files_do(mk_pubcert, s_fs, p, s_fs->base, 
md_store_group_name(MD_SG_ARCHIVE), "*", MD_FN_CERT, NULL);

return rv;
}