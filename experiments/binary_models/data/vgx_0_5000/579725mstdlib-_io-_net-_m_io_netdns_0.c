static M_bool M_io_netdns_next_io_start(M_io_layer_t *layer)
{
M_io_handle_t *handle  = M_io_layer_get_handle(layer);
size_t         nextidx = M_io_netdns_next_io_idx(handle);
M_io_t        *io      = M_io_layer_get_io(layer);
M_event_t     *event   = M_io_get_event(io);
M_bool         rv      = M_FALSE;

if (nextidx != 0) {
handle->data.netdns.io_try_idx = nextidx;
M_event_add(event, handle->data.netdns.io_try[nextidx], M_io_netdns_realio_cb, io);
rv = M_TRUE;
}


M_io_netdns_happyeyeballs_timer(layer);

return rv;
}