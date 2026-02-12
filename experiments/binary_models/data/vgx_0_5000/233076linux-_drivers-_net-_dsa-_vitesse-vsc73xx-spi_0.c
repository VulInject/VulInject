static int vsc73xx_spi_probe(struct spi_device *spi)
{
struct device *dev = &spi->dev;
struct vsc73xx_spi *vsc_spi;
int ret;

vsc_spi = devm_kzalloc(dev, sizeof(*vsc_spi), GFP_KERNEL);
if (!vsc_spi)
return -ENOMEM;

spi_set_drvdata(spi, vsc_spi);
vsc_spi->spi = spi_dev_get(spi);
vsc_spi->vsc.dev = dev;
vsc_spi->vsc.priv = vsc_spi;
vsc_spi->vsc.ops = &vsc73xx_spi_ops;
mutex_init(&vsc_spi->lock);

spi->mode = SPI_MODE_0;
spi->bits_per_word = 8;
ret = spi_setup(spi);
if (ret < 0) {
dev_err(dev, "spi setup failed.\n");
return ret;
}

return vsc73xx_probe(&vsc_spi->vsc);
}