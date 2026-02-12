static int ilo_pkt_dequeue(struct ilo_hwinfo *hw, struct ccb *ccb,
int dir, int *id, int *len, void **pkt)
{
char *fifobar, *desc;
int entry = 0, pkt_id = 0;
int ret;

if (dir == SENDQ) {
fifobar = ccb->ccb_u1.send_fifobar;
desc = ccb->ccb_u2.send_desc;
} else {
fifobar = ccb->ccb_u3.recv_fifobar;
desc = ccb->ccb_u4.recv_desc;
}

ret = fifo_dequeue(hw, fifobar, &entry);
if (ret) {
pkt_id = get_entry_id(entry);
if (id)
*id = pkt_id;
if (len)
*len = get_entry_len(entry);
if (pkt)
*pkt = (void *)(desc + desc_mem_sz(pkt_id));
}

return ret;
}