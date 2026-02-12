static bool spi_ingenic_can_dma(struct spi_controller *ctlr,
struct spi_device *spi,
struct spi_transfer *xfer)
{
struct dma_slave_caps caps;
int ret;

ret = dma_get_slave_caps(ctlr->dma_tx, &caps);
if (ret) {
dev_err(&spi->dev, "Unable to get slave caps: %d\n", ret);
return false;
}

return !caps.max_sg_burst ||
xfer->len <= caps.max_sg_burst * SPI_INGENIC_FIFO_SIZE;
}