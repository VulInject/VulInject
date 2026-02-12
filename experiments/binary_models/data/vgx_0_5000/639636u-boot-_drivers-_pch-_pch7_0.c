static int pch7_get_gpio_base(struct udevice *dev, u32 *gbasep)
{
u32 base;


dm_pci_read_config32(dev, GPIO_BASE, &base);
if (base == 0x00000000 || base == 0xffffffff) {
debug("%s: unexpected BASE value\n", __func__);
return -ENODEV;
}


*gbasep = base & 1 ? base & ~3 : base & ~15;

return 0;
}

static const struct pch_ops pch7_ops = {
.get_spi_base	= pch7_get_spi_base,
.set_spi_protect = pch7_set_spi_protect,
.get_gpio_base	= pch7_get_gpio_base,
};