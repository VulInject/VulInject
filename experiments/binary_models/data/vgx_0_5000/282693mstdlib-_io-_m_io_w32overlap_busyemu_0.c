static void *M_io_w32overlap_busyemu_thread(void *arg)
{
M_io_layer_t                         *layer     = arg;
M_io_t                               *io        = M_io_layer_get_io(layer);
M_io_handle_t                        *handle    = M_io_layer_get_handle(layer);
unsigned char                        *buf;
DWORD                                 retlen;
size_t                                bufsize;
M_io_w32overlap_busyemu_threadstate_t state;

M_mem_set(&state, 0, sizeof(state));

while (M_io_w32overlap_busyemu_thread_should_run(handle, &state)) {

M_io_layer_acquire(io, 0, NULL);


bufsize          = M_buf_alloc_size(handle->rbuf);
if (handle->rbuffull && bufsize < MAX_IO_BUFFER_SIZE)
bufsize *= 2;
buf              = M_buf_direct_write_start(handle->rbuf, &bufsize);
handle->rbuffull = M_FALSE;
if (!ReadFile(handle->rhandle, buf, (DWORD)bufsize, &retlen, NULL)) {
M_buf_direct_write_end(handle->rbuf, 0);
goto fail;
}

M_buf_direct_write_end(handle->rbuf, retlen);
if (retlen == bufsize)
handle->rbuffull = M_TRUE;


if (retlen != 0 && M_buf_len(handle->rbuf) == retlen) {
M_io_layer_softevent_add(layer, M_TRUE, M_EVENT_TYPE_READ, M_IO_ERROR_SUCCESS);
}


if (M_buf_len(handle->wbuf)) {
if (!WriteFile(handle->whandle, M_buf_peek(handle->wbuf), (DWORD)M_buf_len(handle->wbuf), &retlen, NULL))
goto fail;


if (retlen != M_buf_len(handle->wbuf))
handle->wbuffull = M_FALSE;

M_buf_drop(handle->wbuf, retlen);


if (M_buf_len(handle->wbuf) == 0) {
M_io_layer_softevent_add(layer, M_TRUE, M_EVENT_TYPE_WRITE, M_IO_ERROR_SUCCESS);
}
}


M_io_layer_release(layer);


M_thread_sleep(15000); 
}


if (handle->busyemu_state == M_IO_W32OVERLAP_BUSYEMU_STATE_REQ_DISCONNECT) {

M_thread_sleep(100000);
M_io_layer_acquire(io, 0, NULL);
M_io_w32overlap_busyemu_close_handle(handle);
M_io_layer_softevent_add(layer, M_TRUE, M_EVENT_TYPE_DISCONNECTED, M_IO_ERROR_DISCONNECT);
M_io_layer_release(layer);
}

handle->busyemu_state = M_IO_W32OVERLAP_BUSYEMU_STATE_STOPPED;
return NULL;

fail:


handle->last_error_sys = GetLastError();


M_io_w32overlap_busyemu_close_handle(handle);


M_io_layer_softevent_add(layer, M_TRUE, (M_io_win32_err_to_ioerr(handle->last_error_sys) == M_IO_ERROR_DISCONNECT)?M_EVENT_TYPE_DISCONNECTED:M_EVENT_TYPE_ERROR, M_io_win32_err_to_ioerr(handle->last_error_sys));


handle->busyemu_state = M_IO_W32OVERLAP_BUSYEMU_STATE_STOPPED;


M_io_layer_release(layer);

return NULL;
}