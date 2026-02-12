static void nps_enet_tx_handler(struct net_device *ndev)
{
struct nps_enet_priv *priv = netdev_priv(ndev);
u32 tx_ctrl_value = nps_enet_reg_get(priv, NPS_ENET_REG_TX_CTL);
u32 tx_ctrl_et = (tx_ctrl_value & TX_CTL_ET_MASK) >> TX_CTL_ET_SHIFT;
u32 tx_ctrl_nt = (tx_ctrl_value & TX_CTL_NT_MASK) >> TX_CTL_NT_SHIFT;


if (!nps_enet_is_tx_pending(priv))
return;


nps_enet_reg_set(priv, NPS_ENET_REG_TX_CTL, 0);


if (unlikely(tx_ctrl_et)) {
ndev->stats.tx_errors++;
} else {
ndev->stats.tx_packets++;
ndev->stats.tx_bytes += tx_ctrl_nt;
}

dev_kfree_skb(priv->tx_skb);
priv->tx_skb = NULL;

if (netif_queue_stopped(ndev))
netif_wake_queue(ndev);
}