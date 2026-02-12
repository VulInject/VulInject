static int fan53555_probe(struct udevice *dev)
{
struct fan53555_priv *priv = dev_get_priv(dev);
int ID1, ID2;

debug("%s\n", __func__);


ID1 = pmic_reg_read(dev->parent, FAN53555_ID1);
if (ID1 < 0)
return ID1;

ID2 = pmic_reg_read(dev->parent, FAN53555_ID2);
if (ID2 < 0)
return ID2;


priv->vendor = dev->driver_data;
priv->die_id = ID1 & GENMASK(3, 0);
priv->die_rev = ID2 & GENMASK(3, 0);

if (fan53555_voltages_setup(dev) < 0)
return -ENODATA;

debug("%s: FAN53555 option %d rev %d detected\n",
__func__, priv->die_id, priv->die_rev);

return 0;
}