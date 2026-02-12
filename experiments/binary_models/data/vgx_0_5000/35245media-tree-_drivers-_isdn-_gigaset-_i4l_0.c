void gigaset_skb_sent(struct bc_state *bcs, struct sk_buff *skb)
{
isdn_if *iif = bcs->cs->iif;
unsigned char *ack_header = skb_mac_header(skb);
unsigned len;
isdn_ctrl response;

++bcs->trans_up;

if (skb->len)
dev_warn(bcs->cs->dev, "%s: skb->len==%d\n",
__func__, skb->len);

len = ack_header[0] + ((unsigned) ack_header[1] << 8);
if (len) {
gig_dbg(DEBUG_MCMD, "ACKing to LL (id: %d, ch: %d, sz: %u)",
bcs->cs->myid, bcs->channel, len);

response.driver = bcs->cs->myid;
response.command = ISDN_STAT_BSENT;
response.arg = bcs->channel;
response.parm.length = len;
iif->statcallb(&response);
}
}