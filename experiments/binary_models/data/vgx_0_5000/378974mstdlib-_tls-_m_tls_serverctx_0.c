static int M_tls_serverctx_sni_cb(SSL *ssl, int *ad, void *arg)
{
M_tls_serverctx_t *ctx      = arg;
M_tls_serverctx_t *child    = NULL;
const char        *hostname;
int                retval   = SSL_TLSEXT_ERR_OK;

(void)ad;

if (ssl == NULL || ctx == NULL)
return SSL_TLSEXT_ERR_NOACK;

hostname = SSL_get_servername(ssl, TLSEXT_NAMETYPE_host_name);
if (M_str_isempty(hostname))
return SSL_TLSEXT_ERR_NOACK;


if (ctx->parent)
ctx = ctx->parent;

M_thread_mutex_lock(ctx->lock);

child = M_tls_serverctx_SNI_lookup(ctx, hostname);


if (child != NULL && ctx != child) {
M_thread_mutex_lock(child->lock);
if (!SSL_set_SSL_CTX(ssl, child->ctx)) {
retval = SSL_TLSEXT_ERR_NOACK;
}
M_thread_mutex_unlock(child->lock);
}
M_thread_mutex_unlock(ctx->lock);

return retval;
}