static int ich6_gpio_probe(struct udevice *dev)
{
struct ich6_bank_plat *plat = dev_get_plat(dev);
struct gpio_dev_priv *uc_priv = dev_get_uclass_priv(dev);
struct ich6_bank_priv *bank = dev_get_priv(dev);
const void *prop;

uc_priv->gpio_count = GPIO_PER_BANK;
uc_priv->bank_name = plat->bank_name;
bank->use_sel = plat->base_addr;
bank->io_sel = plat->base_addr + 4;
bank->lvl = plat->base_addr + 8;

prop = fdt_getprop(gd->fdt_blob, dev_of_offset(dev),
"use-lvl-write-cache", NULL);
if (prop)
bank->use_lvl_write_cache = true;
else
bank->use_lvl_write_cache = false;
bank->lvl_write_cache = 0;

return 0;
}