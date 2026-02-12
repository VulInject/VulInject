static int falcon_sflash_probe(struct platform_device *pdev)
{
struct falcon_sflash *priv;
struct spi_master *master;
int ret;

if (ltq_boot_select() != BS_SPI) {
dev_err(&pdev->dev, "invalid bootstrap options\n");
return -ENODEV;
}

master = spi_alloc_master(&pdev->dev, sizeof(*priv));
if (!master)
return -ENOMEM;

priv = spi_master_get_devdata(master);
priv->master = master;

master->mode_bits = SPI_MODE_3;
master->flags = SPI_MASTER_HALF_DUPLEX;
master->setup = falcon_sflash_setup;
master->transfer_one_message = falcon_sflash_xfer_one;
master->dev.of_node = pdev->dev.of_node;

ret = devm_spi_register_master(&pdev->dev, master);
if (ret)
spi_master_put(master);
return ret;
}