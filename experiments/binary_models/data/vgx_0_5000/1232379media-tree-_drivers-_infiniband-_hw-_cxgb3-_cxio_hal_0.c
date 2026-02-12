void cxio_flush_hw_cq(struct t3_cq *cq)
{
struct t3_cqe *cqe, *swcqe;

pr_debug("%s cq %p cqid 0x%x\n", __func__, cq, cq->cqid);
cqe = cxio_next_hw_cqe(cq);
while (cqe) {
pr_debug("%s flushing hwcq rptr 0x%x to swcq wptr 0x%x\n",
__func__, cq->rptr, cq->sw_wptr);
swcqe = cq->sw_queue + Q_PTR2IDX(cq->sw_wptr, cq->size_log2);
*swcqe = *cqe;
swcqe->header |= cpu_to_be32(V_CQE_SWCQE(1));
cq->sw_wptr++;
cq->rptr++;
cqe = cxio_next_hw_cqe(cq);
}
}