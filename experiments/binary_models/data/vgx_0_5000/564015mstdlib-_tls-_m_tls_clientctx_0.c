M_bool M_tls_clientctx_set_applications(M_tls_clientctx_t *ctx, M_list_str_t *applications)
{
(void)ctx;
(void)applications;
return M_FALSE;
unsigned char *apps     = NULL;
size_t         apps_len = 0;
M_bool         retval   = M_TRUE;

if (ctx == NULL)
return M_FALSE;

M_thread_mutex_lock(ctx->lock);

apps = M_tls_alpn_list(applications, &apps_len);


if (SSL_CTX_set_alpn_protos(ctx->ctx, apps, (unsigned int)apps_len) != 0)
retval = M_FALSE;

M_free(apps);

M_thread_mutex_unlock(ctx->lock);

return retval;
}