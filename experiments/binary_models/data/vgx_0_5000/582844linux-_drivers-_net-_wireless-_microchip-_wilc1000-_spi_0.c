static int wilc_spi_read_reg(struct wilc *wilc, u32 addr, u32 *data)
{
struct spi_device *spi = to_spi_device(wilc->dev);
int result;
u8 cmd = CMD_SINGLE_READ;
u8 clockless = 0;

if (addr < WILC_SPI_CLOCKLESS_ADDR_LIMIT) {

cmd = CMD_INTERNAL_READ;
clockless = 1;
}

result = wilc_spi_single_read(wilc, cmd, addr, data, clockless);
if (result) {
dev_err(&spi->dev, "Failed cmd, read reg (%08x)...\n", addr);
return result;
}

le32_to_cpus(data);

return 0;
}