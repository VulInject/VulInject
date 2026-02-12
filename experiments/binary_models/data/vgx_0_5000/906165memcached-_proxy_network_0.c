static void proxy_backend_postwrite_ur(void *udata, struct io_uring_cqe *cqe) {
mcp_backend_t *be = udata;
P_DEBUG("%s: %d\n", __func__, cqe->res);
assert(cqe->res != -EINVAL);
int sent = cqe->res;
if (sent < 0) {

if (sent == -EAGAIN || sent == -EWOULDBLOCK) {

_proxy_evthr_evset_be_wrpoll(be, &be->event_thread->tunables.read_ur);
} else {
_reset_bad_backend(be, P_BE_FAIL_WRITING);
_backend_failed_ur(be);
}
}

if (_post_pending_write(be, sent)) {

_proxy_evthr_evset_be_read(be, be->rbuf+be->rbufused, READ_BUFFER_SIZE-be->rbufused, &be->event_thread->tunables.read_ur);
}

if (be->io_next) {



_proxy_evthr_evset_be_wrpoll(be, &be->event_thread->tunables.read_ur);
}


}