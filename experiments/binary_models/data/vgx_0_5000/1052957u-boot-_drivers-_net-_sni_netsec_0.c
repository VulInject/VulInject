static int netsec_send(struct udevice *dev, void *packet, int length)
{
struct netsec_priv *priv = dev_get_priv(dev);
u32 val, tout;

val = netsec_read_reg(priv, NETSEC_REG_NRM_TX_STATUS);
netsec_cache_flush((uintptr_t)packet, length);
netsec_set_tx_de(priv, packet, length);
netsec_write_reg(priv, NETSEC_REG_NRM_TX_PKTCNT, 1); 

val = netsec_read_reg(priv, NETSEC_REG_NRM_TX_PKTCNT);

tout = 10000;
do {
val = netsec_read_reg(priv, NETSEC_REG_NRM_TX_DONE_PKTCNT);
udelay(2);
} while (--tout && !val);

if (!tout) {
val = netsec_read_reg(priv, NETSEC_REG_NRM_TX_PKTCNT);
pr_err("%s: ETIMEDOUT:  %dpackets\n", __func__, val);
return -ETIMEDOUT;
}

return 0;
}