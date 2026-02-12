static int rockchip_spi_transfer_one(
struct spi_controller *ctlr,
struct spi_device *spi,
struct spi_transfer *xfer)
{
struct rockchip_spi *rs = spi_controller_get_devdata(ctlr);
int ret;
bool use_dma;


if (!xfer->len) {
spi_finalize_current_transfer(ctlr);
return 1;
}

WARN_ON(readl_relaxed(rs->regs + ROCKCHIP_SPI_SSIENR) &&
(readl_relaxed(rs->regs + ROCKCHIP_SPI_SR) & SR_BUSY));

if (!xfer->tx_buf && !xfer->rx_buf) {
dev_err(rs->dev, "No buffer for transfer\n");
return -EINVAL;
}

if (xfer->len > ROCKCHIP_SPI_MAX_TRANLEN) {
dev_err(rs->dev, "Transfer is too long (%d)\n", xfer->len);
return -EINVAL;
}

rs->n_bytes = xfer->bits_per_word <= 8 ? 1 : 2;
rs->xfer = xfer;
use_dma = ctlr->can_dma ? ctlr->can_dma(ctlr, spi, xfer) : false;

ret = rockchip_spi_config(rs, spi, xfer, use_dma, ctlr->slave);
if (ret)
return ret;

if (use_dma)
return rockchip_spi_prepare_dma(rs, ctlr, xfer);

return rockchip_spi_prepare_irq(rs, ctlr, xfer);
}