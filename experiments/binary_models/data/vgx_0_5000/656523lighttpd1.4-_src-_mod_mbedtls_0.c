static int
mod_mbedtls_ssl_write_err(connection *con, handler_ctx *hctx, int wr, size_t wr_len)
{
switch (wr) {
case MBEDTLS_ERR_SSL_WANT_READ:
con->is_readable = -1;
break; 
case MBEDTLS_ERR_SSL_WANT_WRITE:
con->is_writable = -1;
break; 
case MBEDTLS_ERR_SSL_CRYPTO_IN_PROGRESS:
case MBEDTLS_ERR_SSL_ASYNC_IN_PROGRESS:
break; 
case MBEDTLS_ERR_NET_CONN_RESET:
if (hctx->conf.ssl_log_noise)
elog(hctx->r->conf.errh, __FILE__, __LINE__, wr,
"peer closed connection");
return -1;
default:
elog(hctx->r->conf.errh, __FILE__, __LINE__, wr, __func__);
return -1;
}

if (0 != hctx->ssl.out_left)  
hctx->pending_write = wr_len;

return 0; 
}