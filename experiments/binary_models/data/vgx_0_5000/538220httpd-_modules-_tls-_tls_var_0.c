static const char *var_get_server_cert(const tls_var_lookup_ctx_t *ctx)
{
const rustls_certificate *cert;
const char *pem;
apr_status_t rv;

if (!ctx->cc->key) return NULL;
cert = rustls_certified_key_get_certificate(ctx->cc->key, 0);
if (!cert) return NULL;
if (APR_SUCCESS != (rv = tls_cert_to_pem(&pem, ctx->p, cert))) {
ap_log_error(APLOG_MARK, APLOG_DEBUG, rv, ctx->s, APLOGNO(10316)
"Failed to create server certificate PEM");
return NULL;
}
return pem;
}