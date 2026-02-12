static void mcp251x_tx_work_handler(struct work_struct *ws)
{
struct mcp251x_priv *priv = container_of(ws, struct mcp251x_priv,
tx_work);
struct spi_device *spi = priv->spi;
struct net_device *net = priv->net;
struct can_frame *frame;

mutex_lock(&priv->mcp_lock);
if (priv->tx_skb) {
if (priv->can.state == CAN_STATE_BUS_OFF) {
mcp251x_clean(net);
} else {
frame = (struct can_frame *)priv->tx_skb->data;

if (frame->can_dlc > CAN_FRAME_MAX_DATA_LEN)
frame->can_dlc = CAN_FRAME_MAX_DATA_LEN;
mcp251x_hw_tx(spi, frame, 0);
priv->tx_len = 1 + frame->can_dlc;
can_put_echo_skb(priv->tx_skb, net, 0);
priv->tx_skb = NULL;
}
}
mutex_unlock(&priv->mcp_lock);
}