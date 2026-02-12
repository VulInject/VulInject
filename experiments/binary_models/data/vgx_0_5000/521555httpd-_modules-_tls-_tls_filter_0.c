static apr_status_t fout_add_bucket_to_plain(tls_filter_ctx_t *fctx, apr_bucket *b)
{
const char *data;
apr_size_t dlen, buf_remain;
apr_status_t rv = APR_SUCCESS;

ap_assert((apr_size_t)-1 != b->length);
if (b->length == 0) {
apr_bucket_delete(b);
goto cleanup;
}

buf_remain = fctx->fout_buf_plain_size - fctx->fout_buf_plain_len;
if (buf_remain == 0) {
rv = fout_pass_all_to_tls(fctx);
if (APR_SUCCESS != rv) goto cleanup;
buf_remain = fctx->fout_buf_plain_size - fctx->fout_buf_plain_len;
ap_assert(buf_remain > 0);
}
if (b->length > buf_remain) {
apr_bucket_split(b, buf_remain);
}
rv = apr_bucket_read(b, &data, &dlen, APR_BLOCK_READ);
if (APR_SUCCESS != rv) goto cleanup;

ap_assert(dlen <= buf_remain);
memcpy(fctx->fout_buf_plain + fctx->fout_buf_plain_len, data, dlen);
fctx->fout_buf_plain_len += dlen;
apr_bucket_delete(b);
cleanup:
return rv;
}