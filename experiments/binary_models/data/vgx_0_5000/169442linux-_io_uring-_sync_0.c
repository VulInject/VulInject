int io_sfr_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
struct io_sync *sync = io_kiocb_to_cmd(req, struct io_sync);

if (unlikely(sqe->addr || sqe->buf_index || sqe->splice_fd_in))
return -EINVAL;

sync->off = READ_ONCE(sqe->off);
sync->len = READ_ONCE(sqe->len);
sync->flags = READ_ONCE(sqe->sync_range_flags);
req->flags |= REQ_F_FORCE_ASYNC;

return 0;
}