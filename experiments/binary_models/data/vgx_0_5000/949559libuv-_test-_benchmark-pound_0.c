static void read_cb(uv_stream_t* stream, ssize_t nread, const uv_buf_t* buf) {

ASSERT_NOT_NULL(stream);

printf("read_cb %d\n", p->i);

uv_close((uv_handle_t*)stream, close_cb);

if (nread < 0) {
if (nread == UV_EOF) {
;
} else if (nread == UV_ECONNRESET) {
conns_failed++;
} else {
fprintf(stderr, "read error %s\n", uv_err_name(nread));
ASSERT(0);
}
}
}