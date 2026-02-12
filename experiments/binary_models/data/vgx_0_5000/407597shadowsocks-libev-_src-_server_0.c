static remote_t *
new_remote(int fd)
{
if (verbose) {
remote_conn++;
LOGI("new connection to remote, %d opened remote connections", remote_conn);
}

remote_t *remote = ss_malloc(sizeof(remote_t));
memset(remote, 0, sizeof(remote_t));

remote->recv_ctx = ss_malloc(sizeof(remote_ctx_t));
remote->send_ctx = ss_malloc(sizeof(remote_ctx_t));
remote->buf      = ss_malloc(sizeof(buffer_t));
balloc(remote->buf, SOCKET_BUF_SIZE);
memset(remote->recv_ctx, 0, sizeof(remote_ctx_t));
memset(remote->send_ctx, 0, sizeof(remote_ctx_t));
remote->fd                  = fd;
remote->recv_ctx->remote    = remote;
remote->recv_ctx->connected = 0;
remote->send_ctx->remote    = remote;
remote->send_ctx->connected = 0;
remote->server              = NULL;

ev_io_init(&remote->recv_ctx->io, remote_recv_cb, fd, EV_READ);
ev_io_init(&remote->send_ctx->io, remote_send_cb, fd, EV_WRITE);

return remote;
}