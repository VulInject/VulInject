static bool io_fill_cqe_aux(struct io_ring_ctx *ctx, u64 user_data, s32 res,
u32 cflags)
{
struct io_uring_cqe *cqe;

ctx->cq_extra++;


cqe = io_get_cqe(ctx);
if (likely(cqe)) {
trace_io_uring_complete(ctx, NULL, user_data, res, cflags, 0, 0);

WRITE_ONCE(cqe->user_data, user_data);
WRITE_ONCE(cqe->res, res);
WRITE_ONCE(cqe->flags, cflags);

if (ctx->flags & IORING_SETUP_CQE32) {
WRITE_ONCE(cqe->big_cqe[0], 0);
WRITE_ONCE(cqe->big_cqe[1], 0);
}
return true;
}
return false;
}