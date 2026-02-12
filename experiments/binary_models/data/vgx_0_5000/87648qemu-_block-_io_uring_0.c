static void luring_resubmit_short_read(LuringState *s, LuringAIOCB *luringcb,
int nread)
{
QEMUIOVector *resubmit_qiov;
size_t remaining;

trace_luring_resubmit_short_read(s, luringcb, nread);


luringcb->total_read = nread;
remaining = luringcb->qiov->size - luringcb->total_read;


resubmit_qiov = &luringcb->resubmit_qiov;
if (resubmit_qiov->iov == NULL) {
qemu_iovec_init(resubmit_qiov, luringcb->qiov->niov);
} else {
qemu_iovec_reset(resubmit_qiov);
}
qemu_iovec_concat(resubmit_qiov, luringcb->qiov, luringcb->total_read,
remaining);


luringcb->sqeq.off = nread;
luringcb->sqeq.addr = (__u64)(uintptr_t)luringcb->resubmit_qiov.iov;
luringcb->sqeq.len = luringcb->resubmit_qiov.niov;

luring_resubmit(s, luringcb);
}