static int mtk_spi_transfer_one(struct spi_master *master,
struct spi_device *spi,
struct spi_transfer *xfer)
{
struct mtk_spi *mdata = spi_master_get_devdata(spi->master);
u32 reg_val = 0;


if (mdata->dev_comp->ipm_design) {
if (!xfer->tx_buf || !xfer->rx_buf) {
reg_val |= SPI_CFG3_IPM_HALF_DUPLEX_EN;
if (xfer->rx_buf)
reg_val |= SPI_CFG3_IPM_HALF_DUPLEX_DIR;
}
writel(reg_val, mdata->base + SPI_CFG3_IPM_REG);
}

if (master->can_dma(master, spi, xfer))
return mtk_spi_dma_transfer(master, spi, xfer);
else
return mtk_spi_fifo_transfer(master, spi, xfer);
}