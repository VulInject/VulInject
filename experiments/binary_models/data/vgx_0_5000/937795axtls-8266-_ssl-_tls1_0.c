EXP_FUNC SSL_CTX *STDCALL ssl_ctx_new(uint32_t options, int num_sessions)
{
SSL_CTX *ssl_ctx = (SSL_CTX *)calloc(1, sizeof (SSL_CTX));
ssl_ctx->options = options;
RNG_initialize();

if (load_key_certs(ssl_ctx) < 0)
{
free(ssl_ctx);  
return NULL;
}

ssl_ctx->num_sessions = num_sessions;

SSL_CTX_MUTEX_INIT(ssl_ctx->mutex);

if (num_sessions)
{
ssl_ctx->ssl_sessions = (SSL_SESSION **)
calloc(1, num_sessions*sizeof(SSL_SESSION *));
}

return ssl_ctx;
}