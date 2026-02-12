static void
usba_pipe_do_async_func_thread(void *arg)
{
usba_pipe_async_req_t	*request = (usba_pipe_async_req_t *)arg;
usba_ph_impl_t		*ph_impl = request->ph_impl;
usb_pipe_handle_t	pipe_handle = (usb_pipe_handle_t)ph_impl;
int			rval;
usb_cb_flags_t		cb_flags = USB_CB_NO_INFO;

if ((rval = request->sync_func(request->dip, ph_impl,
request, request->usb_flags | USB_FLAGS_SLEEP)) !=
USB_SUCCESS) {
USB_DPRINTF_L2(DPRINT_MASK_USBAI, usbai_log_handle,
"sync func failed (%d)", rval);
}

if (request->callback) {
request->callback(pipe_handle, request->callback_arg, rval,
cb_flags);
}

kmem_free(request, sizeof (usba_pipe_async_req_t));
}