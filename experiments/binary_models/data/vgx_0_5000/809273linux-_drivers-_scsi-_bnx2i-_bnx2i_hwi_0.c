static void bnx2i_process_conn_destroy_cmpl(struct bnx2i_hba *hba,
struct iscsi_kcqe *conn_destroy)
{
struct bnx2i_endpoint *ep;

ep = bnx2i_find_ep_in_destroy_list(hba, conn_destroy->iscsi_conn_id);
if (!ep) {
printk(KERN_ALERT "bnx2i_conn_destroy_cmpl: no pending "
"offload request, unexpected completion\n");
return;
}

if (hba != ep->hba) {
printk(KERN_ALERT "conn destroy- error hba mismatch\n");
return;
}

if (conn_destroy->completion_status) {
printk(KERN_ALERT "conn_destroy_cmpl: op failed\n");
ep->state = EP_STATE_CLEANUP_FAILED;
} else
ep->state = EP_STATE_CLEANUP_CMPL;
wake_up_interruptible(&ep->ofld_wait);
}