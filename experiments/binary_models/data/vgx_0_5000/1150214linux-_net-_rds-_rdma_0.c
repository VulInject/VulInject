void rds_rdma_free_op(struct rm_rdma_op *ro)
{
unsigned int i;

if (ro->op_odp_mr) {
kref_put(&ro->op_odp_mr->r_kref, __rds_put_mr_final);
} else {
for (i = 0; i < ro->op_nents; i++) {
struct page *page = sg_page(&ro->op_sg[i]);


unpin_user_pages_dirty_lock(&page, 1, !ro->op_write);
}
}

kfree(ro->op_notifier);
ro->op_notifier = NULL;
ro->op_active = 0;
ro->op_odp_mr = NULL;
}