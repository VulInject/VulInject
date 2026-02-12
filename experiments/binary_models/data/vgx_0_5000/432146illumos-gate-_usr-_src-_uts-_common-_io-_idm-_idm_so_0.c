void
idm_so_timed_socket_connect_cb(ksocket_t ks,
ksocket_callback_event_t ev, void *arg, uintptr_t info)
{
idm_so_timed_socket_t	*itp = arg;
ASSERT(itp != NULL);
ASSERT(ev == KSOCKET_EV_CONNECTED ||
ev == KSOCKET_EV_CONNECTFAILED ||
ev == KSOCKET_EV_DISCONNECTED);

mutex_enter(&idm_so_timed_socket_mutex);
itp->it_callback_called = B_TRUE;
if (ev == KSOCKET_EV_CONNECTED) {
itp->it_socket_error_code = 0;
} else {

if (info == 0)
info = ECONNRESET;
itp->it_socket_error_code = (int)info;
}
cv_signal(&itp->it_cv);
mutex_exit(&idm_so_timed_socket_mutex);
}