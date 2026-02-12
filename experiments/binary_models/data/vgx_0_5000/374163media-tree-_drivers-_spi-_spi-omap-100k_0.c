static int omap1_spi100k_setup(struct spi_device *spi)
{
int                     ret;
struct omap1_spi100k    *spi100k;
struct omap1_spi100k_cs *cs = spi->controller_state;

spi100k = spi_master_get_devdata(spi->master);

if (!cs) {
cs = devm_kzalloc(&spi->dev, sizeof(*cs), GFP_KERNEL);
if (!cs)
return -ENOMEM;
cs->base = spi100k->base + spi->chip_select * 0x14;
spi->controller_state = cs;
}

spi100k_open(spi->master);

clk_prepare_enable(spi100k->ick);
clk_prepare_enable(spi100k->fck);

ret = omap1_spi100k_setup_transfer(spi, NULL);

clk_disable_unprepare(spi100k->ick);
clk_disable_unprepare(spi100k->fck);

return ret;
}