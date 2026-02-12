static void chx_rxidle(fsm_instance *fi, int event, void *arg)
{
struct channel *ch = arg;
struct net_device *dev = ch->netdev;
struct ctcm_priv *priv = dev->ml_priv;
__u16 buflen;
int rc;

fsm_deltimer(&ch->timer);
buflen = *((__u16 *)ch->trans_skb->data);
CTCM_PR_DEBUG("%s: %s: Initial RX count = %d\n",
__func__, dev->name, buflen);

if (buflen >= CTCM_INITIAL_BLOCKLEN) {
if (ctcm_checkalloc_buffer(ch))
return;
ch->ccw[1].count = ch->max_bufsize;
fsm_newstate(fi, CTC_STATE_RXIDLE);
rc = ccw_device_start(ch->cdev, &ch->ccw[0],
(unsigned long)ch, 0xff, 0);
if (rc != 0) {
fsm_newstate(fi, CTC_STATE_RXINIT);
ctcm_ccw_check_rc(ch, rc, "initial RX");
} else
fsm_event(priv->fsm, DEV_EVENT_RXUP, dev);
} else {
CTCM_PR_DEBUG("%s: %s: Initial RX count %d not %d\n",
__func__, dev->name,
buflen, CTCM_INITIAL_BLOCKLEN);
chx_firstio(fi, event, arg);
}
}