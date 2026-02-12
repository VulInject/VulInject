int fnic_rq_cmpl_handler(struct fnic *fnic, int rq_work_to_do)
{
unsigned int tot_rq_work_done = 0, cur_work_done;
unsigned int i;
int err;

for (i = 0; i < fnic->rq_count; i++) {
cur_work_done = vnic_cq_service(&fnic->cq[i], rq_work_to_do,
fnic_rq_cmpl_handler_cont,
NULL);
if (cur_work_done) {
err = vnic_rq_fill(&fnic->rq[i], fnic_alloc_rq_frame);
if (err)
shost_printk(KERN_ERR, fnic->lport->host,
"fnic_alloc_rq_frame can't alloc"
" frame\n");
}
tot_rq_work_done += cur_work_done;
}

return tot_rq_work_done;
}