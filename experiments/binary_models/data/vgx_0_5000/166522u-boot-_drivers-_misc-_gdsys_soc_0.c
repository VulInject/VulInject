static int gdsys_soc_probe(struct udevice *dev)
{
struct gdsys_soc_priv *priv = dev_get_priv(dev);
struct udevice *fpga;
int res = uclass_get_device_by_phandle(UCLASS_MISC, dev, "fpga",
&fpga);
if (res == -ENOENT) {
debug("%s: Could not find 'fpga' phandle\n", dev->name);
return -EINVAL;
}

if (res == -ENODEV) {
debug("%s: Could not get FPGA device\n", dev->name);
return -EINVAL;
}

priv->fpga = fpga;

return 0;
}