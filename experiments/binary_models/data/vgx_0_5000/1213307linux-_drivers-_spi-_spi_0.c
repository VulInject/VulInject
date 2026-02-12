int spi_add_device(struct spi_device *spi)
{
struct spi_controller *ctlr = spi->controller;
struct device *dev = ctlr->dev.parent;
int status;


if (spi_get_chipselect(spi, 0) >= ctlr->num_chipselect) {
dev_err(dev, "cs%d >= max %d\n", spi_get_chipselect(spi, 0),
ctlr->num_chipselect);
return -EINVAL;
}


spi_dev_set_name(spi);

mutex_lock(&ctlr->add_lock);
status = __spi_add_device(spi);
mutex_unlock(&ctlr->add_lock);
return status;
}