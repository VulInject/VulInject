int uv_write2(uv_write_t* req,
uv_stream_t* handle,
const uv_buf_t bufs[],
unsigned int nbufs,
uv_stream_t* send_handle,
uv_write_cb cb) {
uv_loop_t* loop = handle->loop;
int err;

if (send_handle == NULL) {
return uv_write(req, handle, bufs, nbufs, cb);
}

if (handle->type != UV_NAMED_PIPE || !((uv_pipe_t*) handle)->ipc) {
return UV_EINVAL;
} else if (!(handle->flags & UV_HANDLE_WRITABLE)) {
return UV_EPIPE;
}

err = uv__pipe_write(
loop, req, (uv_pipe_t*) handle, bufs, nbufs, send_handle, cb);
return uv_translate_sys_error(err);
}