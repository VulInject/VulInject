void hvutil_transport_destroy(struct hvutil_transport *hvt)
{
int mode_old;

mutex_lock(&hvt->lock);
mode_old = hvt->mode;
hvt->mode = HVUTIL_TRANSPORT_DESTROY;
wake_up_interruptible(&hvt->outmsg_q);
mutex_unlock(&hvt->lock);


spin_lock(&hvt_list_lock);
list_del(&hvt->list);
spin_unlock(&hvt_list_lock);
if (hvt->cn_id.idx > 0 && hvt->cn_id.val > 0)
cn_del_callback(&hvt->cn_id);

if (mode_old == HVUTIL_TRANSPORT_CHARDEV)
wait_for_completion(&hvt->release);

hvt_transport_free(hvt);
}