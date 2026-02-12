static void ks8851_wrreg16(struct ks8851_net *ks, unsigned reg, unsigned val)
{
struct spi_transfer *xfer = &ks->spi_xfer1;
struct spi_message *msg = &ks->spi_msg1;
__le16 txb[2];
int ret;

txb[0] = cpu_to_le16(MK_OP(reg & 2 ? 0xC : 0x03, reg) | KS_SPIOP_WR);
txb[1] = cpu_to_le16(val);

xfer->tx_buf = txb;
xfer->rx_buf = NULL;
xfer->len = 4;

ret = spi_sync(ks->spidev, msg);
if (ret < 0)
netdev_err(ks->netdev, "spi_sync() failed\n");
}