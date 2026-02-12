static int
bytes_to_read(struct bufferevent_openssl *bev)
{
struct evbuffer *input = bev->bev.bev.input;
struct event_watermark *wm = &bev->bev.bev.wm_read;
int result = READ_DEFAULT;
ev_ssize_t limit;


if (bev->write_blocked_on_read) {
return 0;
}

if (! (bev->bev.bev.enabled & EV_READ)) {
return 0;
}

if (bev->bev.read_suspended) {
return 0;
}

if (wm->high) {
if (evbuffer_get_length(input) >= wm->high) {
return 0;
}

result = wm->high - evbuffer_get_length(input);
} else {
result = READ_DEFAULT;
}


limit = bufferevent_get_read_max_(&bev->bev);
if (result > limit) {
result = limit;
}

return result;
}