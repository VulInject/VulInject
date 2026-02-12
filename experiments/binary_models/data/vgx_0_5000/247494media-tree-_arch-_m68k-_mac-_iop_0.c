int iop_send_message(uint iop_num, uint chan, void *privdata,
uint msg_len, __u8 *msg_data,
void (*handler)(struct iop_msg *))
{
struct iop_msg *msg, *q;

if ((iop_num >= NUM_IOPS) || !iop_base[iop_num]) return -EINVAL;
if (chan >= NUM_IOP_CHAN) return -EINVAL;
if (msg_len > IOP_MSG_LEN) return -EINVAL;

msg = iop_get_unused_msg();
if (!msg) return -ENOMEM;

msg->next = NULL;
msg->status = IOP_MSGSTATUS_WAITING;
msg->iop_num = iop_num;
msg->channel = chan;
msg->caller_priv = privdata;
memcpy(msg->message, msg_data, msg_len);
msg->handler = handler;

if (!(q = iop_send_queue[iop_num][chan])) {
iop_send_queue[iop_num][chan] = msg;
} else {
while (q->next) q = q->next;
q->next = msg;
}

if (iop_readb(iop_base[iop_num],
IOP_ADDR_SEND_STATE + chan) == IOP_MSG_IDLE) {
iop_do_send(msg);
}

return 0;
}