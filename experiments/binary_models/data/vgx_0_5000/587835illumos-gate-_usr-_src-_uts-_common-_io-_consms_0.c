static int
consms_mux_disp_ioctl(queue_t *q, mblk_t *mp)
{
struct iocblk	*iocp;
consms_msg_t	*msg;
consms_lq_t	*lq;
mblk_t		*copy_mp;
int		error = 0;

iocp = (struct iocblk *)mp->b_rptr;
msg = (consms_msg_t *)kmem_zalloc(sizeof (*msg), KM_SLEEP);
msg->msg_id = iocp->ioc_id;
msg->msg_request = mp;
msg->msg_queue = q;
msg->msg_num_requests = consms_state.consms_num_lqs;
consms_mux_link_msg(msg);

for (lq = consms_state.consms_lqs; lq != NULL; lq = lq->lq_next) {
if ((copy_mp = copymsg(mp)) != NULL) {
(void) putq(lq->lq_queue, copy_mp);
} else {

msg->msg_num_requests--;
}
}

if (msg->msg_num_requests <= 0) {

(void) consms_mux_unlink_msg(msg->msg_id);
kmem_free(msg, sizeof (*msg));
error = ENOMEM;
}

return (error);
}