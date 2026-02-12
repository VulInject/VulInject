static void emac_setmac(struct emac_priv *priv, u32 ch, char *mac_addr)
{
struct device *emac_dev = &priv->ndev->dev;

if (priv->rx_addr_type == 0) {
emac_set_type0addr(priv, ch, mac_addr);
} else if (priv->rx_addr_type == 1) {
u32 cnt;
for (cnt = 0; cnt < EMAC_MAX_TXRX_CHANNELS; cnt++)
emac_set_type1addr(priv, ch, mac_addr);
} else if (priv->rx_addr_type == 2) {
emac_set_type2addr(priv, ch, mac_addr, ch, 1);
emac_set_type0addr(priv, ch, mac_addr);
} else {
if (netif_msg_drv(priv))
dev_err(emac_dev, "DaVinci EMAC: Wrong addressing\n");
}
}