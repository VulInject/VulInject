static int _sx_get_pending_write(sx_t s) {
sx_buf_t in, out;
int ret;

assert(s != NULL);

if (s->wbufpending != NULL) {

return 0;
}


in = jqueue_pull(s->wbufq);
if(in == NULL) {

in = _sx_buffer_new(NULL, 0, NULL, NULL);
}


s->want_write = jqueue_size(s->wbufq);


out = _sx_buffer_new(in->data, in->len, in->notify, in->notify_arg);

_sx_debug(ZONE, "encoding %d bytes for writing: %.*s", in->len, in->len, in->data);


ret = _sx_chain_io_write(s, out);
if(ret <= 0) {
if(ret == -1) {

jqueue_push(s->wbufq, in, (s->wbufq->front != NULL) ? s->wbufq->front->priority : 0);
s->want_write = 1;
} else {
_sx_buffer_free(in);
}

if(ret == -2) {


s->want_read = s->want_write = 0;
return -1;
}


return 0;
}

_sx_buffer_free(in);

if (out->len == 0)

_sx_buffer_free(out);
else
s->wbufpending = out;

return 0;
}