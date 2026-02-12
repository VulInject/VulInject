static int spi_xmit(struct spi_device *spi_dev, void *addr, const int len,
enum spi_direction dir)
{
struct spi_message msg;
int r;
struct spi_transfer xfer = {
.len	= len,
};

if (dir == SPI_DIR_TX)
xfer.tx_buf = addr;
else
xfer.rx_buf = addr;

if (spi_dev == NULL) {
pr_err("SPI device is uninitialized\n");
return -ENODEV;
}

spi_message_init(&msg);
spi_message_add_tail(&xfer, &msg);

r = spi_sync(spi_dev, &msg);
if (r < 0)
dev_err(&spi_dev->dev, "%s spi_sync failed %d\n", __func__, r);

return r;
}