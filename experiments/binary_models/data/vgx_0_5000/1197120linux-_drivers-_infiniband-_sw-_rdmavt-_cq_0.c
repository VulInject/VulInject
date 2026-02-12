int rvt_destroy_cq(struct ib_cq *ibcq, struct ib_udata *udata)
{
struct rvt_cq *cq = ibcq_to_rvtcq(ibcq);
struct rvt_dev_info *rdi = cq->rdi;

flush_work(&cq->comptask);
spin_lock_irq(&rdi->n_cqs_lock);
rdi->n_cqs_allocated--;
spin_unlock_irq(&rdi->n_cqs_lock);
if (cq->ip)
kref_put(&cq->ip->ref, rvt_release_mmap_info);
else
vfree(cq->kqueue);
return 0;
}