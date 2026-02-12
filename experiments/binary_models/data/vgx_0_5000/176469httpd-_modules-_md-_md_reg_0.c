apr_status_t md_reg_set_props(md_reg_t *reg, apr_pool_t *p, int can_http, int can_https)
{
if (reg->can_http != can_http || reg->can_https != can_https) {
md_json_t *json;

if (reg->domains_frozen) return APR_EACCES; 
reg->can_http = can_http;
reg->can_https = can_https;

json = md_json_create(p);
md_json_setb(can_http, json, MD_KEY_PROTO, MD_KEY_HTTP, NULL);
md_json_setb(can_https, json, MD_KEY_PROTO, MD_KEY_HTTPS, NULL);

return md_store_save(reg->store, p, MD_SG_NONE, NULL, MD_FN_HTTPD_JSON, MD_SV_JSON, json, 0);
}
return APR_SUCCESS;
}