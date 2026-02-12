int io_madvise_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
struct io_madvise *ma = io_kiocb_to_cmd(req, struct io_madvise);

if (sqe->buf_index || sqe->off || sqe->splice_fd_in)
return -EINVAL;

ma->addr = READ_ONCE(sqe->addr);
ma->len = READ_ONCE(sqe->len);
ma->advice = READ_ONCE(sqe->fadvise_advice);
req->flags |= REQ_F_FORCE_ASYNC;
return 0;
return -EOPNOTSUPP;
}