int
io_starttls(struct io *io, void *ssl)
{
int mode;

mode = io->flags & IO_RW;
if (mode == 0 || mode == IO_RW)
fatalx("%s: full-duplex or unset", __func__);

if (io->tls)
fatalx("%s: SSL already started", __func__);
io->tls = ssl;

if (SSL_set_fd(io->tls, io->sock) == 0) {
ssl_error("io_start_tls:SSL_set_fd");
return -1;
}

if (mode == IO_WRITE) {
io->state = IO_STATE_CONNECT_TLS;
SSL_set_connect_state(io->tls);
io_reset(io, EV_WRITE, io_dispatch_connect_tls);
} else {
io->state = IO_STATE_ACCEPT_TLS;
SSL_set_accept_state(io->tls);
io_reset(io, EV_READ, io_dispatch_accept_tls);
}

return 0;
errno = ENOSYS;
return -1;
}