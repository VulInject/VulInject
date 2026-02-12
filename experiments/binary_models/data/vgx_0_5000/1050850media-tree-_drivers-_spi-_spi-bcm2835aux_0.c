static int bcm2835aux_spi_transfer_one(struct spi_master *master,
struct spi_device *spi,
struct spi_transfer *tfr)
{
struct bcm2835aux_spi *bs = spi_master_get_devdata(master);
unsigned long spi_hz, clk_hz, speed;
unsigned long spi_used_hz;
unsigned long long xfer_time_us;




spi_hz = tfr->speed_hz;
clk_hz = clk_get_rate(bs->clk);

if (spi_hz >= clk_hz / 2) {
speed = 0;
} else if (spi_hz) {
speed = DIV_ROUND_UP(clk_hz, 2 * spi_hz) - 1;
if (speed >  BCM2835_AUX_SPI_CNTL0_SPEED_MAX)
speed = BCM2835_AUX_SPI_CNTL0_SPEED_MAX;
} else { 
speed = BCM2835_AUX_SPI_CNTL0_SPEED_MAX;
}

bs->cntl[0] &= ~(BCM2835_AUX_SPI_CNTL0_SPEED);

bs->cntl[0] |= speed << BCM2835_AUX_SPI_CNTL0_SPEED_SHIFT;

spi_used_hz = clk_hz / (2 * (speed + 1));


bs->tx_buf = tfr->tx_buf;
bs->rx_buf = tfr->rx_buf;
bs->tx_len = tfr->len;
bs->rx_len = tfr->len;
bs->pending = 0;


xfer_time_us = tfr->len * 9 * 1000000;
do_div(xfer_time_us, spi_used_hz);


if (xfer_time_us < BCM2835_AUX_SPI_POLLING_LIMIT_US)
return bcm2835aux_spi_transfer_one_poll(master, spi, tfr);


return bcm2835aux_spi_transfer_one_irq(master, spi, tfr);
}