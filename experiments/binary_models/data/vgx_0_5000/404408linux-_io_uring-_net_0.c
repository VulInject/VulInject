static inline bool io_recv_finish(struct io_kiocb *req, int *ret,
unsigned int cflags, bool mshot_finished,
unsigned issue_flags)
{
if (!(req->flags & REQ_F_APOLL_MULTISHOT)) {
io_req_set_res(req, *ret, cflags);
*ret = IOU_OK;
return true;
}

if (!mshot_finished) {
if (io_aux_cqe(req->ctx, issue_flags & IO_URING_F_COMPLETE_DEFER,
req->cqe.user_data, *ret, cflags | IORING_CQE_F_MORE, true)) {
io_recv_prep_retry(req);
return false;
}

}

io_req_set_res(req, *ret, cflags);

if (issue_flags & IO_URING_F_MULTISHOT)
*ret = IOU_STOP_MULTISHOT;
else
*ret = IOU_OK;
return true;
}