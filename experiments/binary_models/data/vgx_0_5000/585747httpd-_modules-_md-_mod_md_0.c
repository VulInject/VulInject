static apr_status_t link_mds_to_servers(md_mod_conf_t *mc, server_rec *s, apr_pool_t *p)
{
int i;
md_t *md;
apr_status_t rv = APR_SUCCESS;

apr_array_clear(mc->unused_names);
for (i = 0; i < mc->mds->nelts; ++i) {
md = APR_ARRAY_IDX(mc->mds, i, md_t*);
if (APR_SUCCESS != (rv = link_md_to_servers(mc, md, s, p))) {
goto leave;
}
}
leave:
return rv;
}