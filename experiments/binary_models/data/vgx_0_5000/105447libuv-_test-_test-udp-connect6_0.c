static void sv_recv_cb(uv_udp_t* handle,
ssize_t nread,
const uv_buf_t* rcvbuf,
const struct sockaddr* addr,
unsigned flags) {
if (nread > 0) {
ASSERT_EQ(nread, 4);
ASSERT_NOT_NULL(addr);
ASSERT_EQ(memcmp("EXIT", rcvbuf->base, nread), 0);
if (++sv_recv_cb_called == 4) {
uv_close((uv_handle_t*) &server, close_cb);
uv_close((uv_handle_t*) &client, close_cb);
}
}
}