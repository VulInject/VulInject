int ap_cache_check_no_cache(cache_request_rec *cache, request_rec *r)
{

cache_server_conf *conf =
(cache_server_conf *)ap_get_module_config(r->server->module_config,
&cache_module);




if (!cache->control_in.parsed) {
const char *cc_req = cache_table_getm(r->pool, r->headers_in,
"Cache-Control");
const char *pragma = cache_table_getm(r->pool, r->headers_in, "Pragma");
ap_cache_control(r, &cache->control_in, cc_req, pragma, r->headers_in);
}

if (cache->control_in.no_cache) {

if (!conf->ignorecachecontrol) {
return 0;
}
else {
ap_log_rerror(APLOG_MARK, APLOG_INFO, 0, r, APLOGNO(02657)
"Incoming request is asking for an uncached version of "
"%s, but we have been configured to ignore it and serve "
"cached content anyway", r->unparsed_uri);
}
}

return 1;
}