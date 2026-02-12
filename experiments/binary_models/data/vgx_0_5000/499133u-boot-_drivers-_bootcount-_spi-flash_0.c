static int bootcount_spi_flash_get(struct udevice *dev, u32 *a)
{
struct bootcount_spi_flash_priv *priv = dev_get_priv(dev);
u16 val;

if (spi_flash_read_dm(priv->spi_flash, priv->offset, 2, &val) < 0) {
debug("%s: read failed\n", __func__);
return -EIO;
}

if (val >> 8 == bootcount_magic) {
*a = val & 0xff;
return 0;
}

debug("%s: bootcount magic does not match on %04x\n", __func__, val);
return -EIO;
}