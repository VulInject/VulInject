void
nfslog_record_put(void *cookie, size_t size, bool_t sync,
unsigned int which_buffers)
{
struct lr_alloc *lrp = (struct lr_alloc *)cookie;
struct log_buffer *lbp = lrp->lb;


if (size == 0 || size > lrp->size) {
nfslog_free_logrecords(lrp);
return;
}


lrp->size = size;


if (which_buffers == NFSLOG_ALL_BUFFERS) {
(void) nfslog_record_append2all(lrp);
nfslog_free_logrecords(lrp);
return;
}


mutex_enter(&lbp->lb_lock);
if (lbp->lb_records == NULL) {
lbp->lb_records = (caddr_t)lrp;
lbp->lb_num_recs = 1;
lbp->lb_size_queued = lrp->size;
} else {
insque(lrp, ((struct lr_alloc *)lbp->lb_records)->prev);
lbp->lb_num_recs++;
lbp->lb_size_queued += lrp->size;
}


if (lbp->lb_size_queued >= nfslog_num_bytes_to_write ||
lbp->lb_num_recs > nfslog_num_records_to_write || sync == TRUE) {
mutex_exit(&lbp->lb_lock);
(void) nfslog_records_flush_to_disk(lbp);
} else {
mutex_exit(&lbp->lb_lock);
}

}