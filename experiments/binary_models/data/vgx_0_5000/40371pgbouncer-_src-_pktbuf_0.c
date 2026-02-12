static void pktbuf_send_func(evutil_socket_t fd, short flags, void *arg)
{
PktBuf *buf = arg;
SBuf *sbuf = &buf->queued_dst->sbuf;
int amount, res;

log_debug("pktbuf_send_func(%" PRId64 ", %d, %p)", (int64_t)fd, (int)flags, buf);

if (buf->failed)
return;

amount = buf->write_pos - buf->send_pos;
res = sbuf_op_send(sbuf, buf->buf + buf->send_pos, amount);
if (res < 0) {
if (errno == EAGAIN) {
res = 0;
} else {
log_error("pktbuf_send_func: %s", strerror(errno));
pktbuf_free(buf);
return;
}
}
buf->send_pos += res;

if (buf->send_pos < buf->write_pos) {
event_assign(buf->ev, pgb_event_base, fd, EV_WRITE, pktbuf_send_func, buf);
res = event_add(buf->ev, NULL);
if (res < 0) {
log_error("pktbuf_send_func: %s", strerror(errno));
pktbuf_free(buf);
}
} else {
pktbuf_free(buf);
}
}