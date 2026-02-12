static void ti_hecc_change_state(struct net_device *ndev,
enum can_state rx_state,
enum can_state tx_state)
{
struct ti_hecc_priv *priv = netdev_priv(ndev);
struct can_frame *cf;
struct sk_buff *skb;
u32 timestamp;
int err;

skb = alloc_can_err_skb(priv->ndev, &cf);
if (unlikely(!skb)) {
priv->can.state = max(tx_state, rx_state);
return;
}

can_change_state(priv->ndev, cf, tx_state, rx_state);

if (max(tx_state, rx_state) != CAN_STATE_BUS_OFF) {
cf->can_id |= CAN_ERR_CNT;
cf->data[6] = hecc_read(priv, HECC_CANTEC);
cf->data[7] = hecc_read(priv, HECC_CANREC);
}

timestamp = hecc_read(priv, HECC_CANLNT);
err = can_rx_offload_queue_timestamp(&priv->offload, skb, timestamp);
if (err)
ndev->stats.rx_fifo_errors++;
}