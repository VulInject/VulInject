static int ec_bhf_setup_offsets(struct ec_bhf_priv *priv)
{
struct device *dev = PRIV_TO_DEV(priv);
unsigned block_count, i;
void __iomem *ec_info;

block_count = ioread8(priv->io + INFO_BLOCK_BLK_CNT);
for (i = 0; i < block_count; i++) {
u16 type = ioread16(priv->io + i * INFO_BLOCK_SIZE +
INFO_BLOCK_TYPE);
if (type == ETHERCAT_MASTER_ID)
break;
}
if (i == block_count) {
dev_err(dev, "EtherCAT master with DMA block not found\n");
return -ENODEV;
}

ec_info = priv->io + i * INFO_BLOCK_SIZE;

priv->tx_dma_chan = ioread8(ec_info + INFO_BLOCK_TX_CHAN);
priv->rx_dma_chan = ioread8(ec_info + INFO_BLOCK_RX_CHAN);

priv->ec_io = priv->io + ioread32(ec_info + INFO_BLOCK_OFFSET);
priv->mii_io = priv->ec_io + ioread32(priv->ec_io + EC_MII_OFFSET);
priv->fifo_io = priv->ec_io + ioread32(priv->ec_io + EC_FIFO_OFFSET);
priv->mac_io = priv->ec_io + ioread32(priv->ec_io + EC_MAC_OFFSET);

return 0;
}