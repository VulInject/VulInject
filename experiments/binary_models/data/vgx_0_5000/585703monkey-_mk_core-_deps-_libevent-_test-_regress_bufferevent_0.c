static enum bufferevent_filter_result
bufferevent_output_filter(struct evbuffer *src, struct evbuffer *dst,
ev_ssize_t lim, enum bufferevent_flush_mode state, void *ctx)
{
const unsigned char *buffer;
unsigned i;
struct bufferevent **bevp = ctx;

++test_ok;

if (test_ok == 1) {
buffer = evbuffer_pullup(src, evbuffer_get_length(src));
for (i = 0; i < evbuffer_get_length(src); ++i) {
evbuffer_add(dst, "x", 1);
evbuffer_add(dst, buffer + i, 1);
}
evbuffer_drain(src, evbuffer_get_length(src));
} else {
return BEV_ERROR;
}

if (bevp && test_ok == 1) {
int prev = ++test_ok;
bufferevent_write(*bevp, "-", 1);

assert(test_ok == prev);
--test_ok;
}

return (BEV_OK);
}