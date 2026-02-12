static int sti_sysreset_probe(struct udevice *dev)
{
struct sti_sysreset_priv *priv = dev_get_priv(dev);
struct udevice *syscon;
struct regmap *regmap;
struct fdtdec_phandle_args syscfg_phandle;
int ret;


ret = fdtdec_parse_phandle_with_args(gd->fdt_blob, dev_of_offset(dev),
"st,syscfg", NULL, 0, 0,
&syscfg_phandle);
if (ret < 0) {
pr_err("Can't get syscfg phandle: %d\n", ret);
return ret;
}

ret = uclass_get_device_by_of_offset(UCLASS_SYSCON,
syscfg_phandle.node,
&syscon);
if (ret) {
pr_err("%s: uclass_get_device_by_of_offset failed: %d\n",
__func__, ret);
return ret;
}

regmap = syscon_get_regmap(syscon);
if (!regmap) {
pr_err("unable to get regmap for %s\n", syscon->name);
return -ENODEV;
}

priv->base = regmap->ranges[0].start;

return 0;
}

static struct sysreset_ops sti_sysreset = {
.request	= sti_sysreset_request,
};