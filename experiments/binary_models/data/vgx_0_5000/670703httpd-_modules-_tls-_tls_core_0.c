static apr_status_t get_proxy_ciphers(const apr_array_header_t **pciphersuites,
apr_pool_t *pool, tls_conf_proxy_t *pc)
{
const apr_array_header_t *ciphers, *suites = NULL;
apr_status_t rv = APR_SUCCESS;

rv = calc_ciphers(pool, pc->defined_in, pc->global,
"", pc->proxy_pref_ciphers, pc->proxy_supp_ciphers, &ciphers);
if (APR_SUCCESS != rv) goto cleanup;

if (ciphers) {
suites = tls_proto_get_rustls_suites(pc->global->proto, ciphers, pool);

if (APLOGtrace2(pc->defined_in)) {
tls_proto_conf_t *conf = pc->global->proto;
ap_log_error(APLOG_MARK, APLOG_TRACE2, 0, pc->defined_in,
"tls proxy ciphers configured[%s]: %s",
pc->defined_in->server_hostname,
tls_proto_get_cipher_names(conf, ciphers, pool));
}
}

cleanup:
*pciphersuites = (APR_SUCCESS == rv)? suites : NULL;
return rv;
}