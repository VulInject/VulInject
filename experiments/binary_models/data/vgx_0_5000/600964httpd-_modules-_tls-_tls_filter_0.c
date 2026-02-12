static apr_status_t filter_abort(
tls_filter_ctx_t *fctx)
{
apr_status_t rv;

if (fctx->cc->state != TLS_CONN_ST_DONE) {
if (fctx->cc->state > TLS_CONN_ST_CLIENT_HELLO) {
rustls_connection_send_close_notify(fctx->cc->rustls_connection);
rv = fout_pass_all_to_net(fctx, 1);
ap_log_cerror(APLOG_MARK, APLOG_TRACE2, rv, fctx->c, "filter_abort, flushed output");
}
fctx->c->aborted = 1;
fctx->cc->state = TLS_CONN_ST_DONE;
}
return APR_ECONNABORTED;
}