static int mpc8xxx_gpio_plat_to_priv(struct udevice *dev)
{
struct mpc8xxx_gpio_data *priv = dev_get_priv(dev);
struct mpc8xxx_gpio_plat *plat = dev_get_plat(dev);
unsigned long size = plat->size;
ulong driver_data = dev_get_driver_data(dev);

if (size == 0)
size = 0x100;

priv->addr = plat->addr;
priv->base = map_sysmem(plat->addr, size);

if (!priv->base)
return -ENOMEM;

priv->gpio_count = plat->ngpios;
priv->dat_shadow = 0;

priv->type = driver_data;

return 0;
}