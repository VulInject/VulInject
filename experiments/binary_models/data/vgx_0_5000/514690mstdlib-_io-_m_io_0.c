M_io_error_t M_io_layer_read(M_io_t *io, size_t layer_id, unsigned char *buf, size_t *read_len, M_io_meta_t *meta)
{
ssize_t       i;
M_io_error_t  err   = M_IO_ERROR_ERROR;
M_io_layer_t *layer = NULL;

if (io == NULL) {
err = M_IO_ERROR_INVALID;
goto fail;
}

if (layer_id >= M_list_len(io->layer)) {
err = M_IO_ERROR_INVALID;
goto fail;
}

for (i=(ssize_t)layer_id; i >= 0; i--) {
layer = M_io_layer_at(io, (size_t)i);

if (layer->cb.cb_read == NULL)
continue;

err = layer->cb.cb_read(layer, buf, read_len, meta);
break;
}

fail:
if (M_io_error_is_critical(err)) {

M_io_softevent_clearall(io, M_TRUE);
M_io_layer_softevent_add(layer, M_FALSE, (err == M_IO_ERROR_DISCONNECT)?M_EVENT_TYPE_DISCONNECTED:M_EVENT_TYPE_ERROR, err);
}

return err;
}