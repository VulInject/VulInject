static int mux_get_by_indexed_prop(struct udevice *dev, const char *prop_name,
int index, struct mux_control **mux)
{
int ret;
struct ofnode_phandle_args args;
struct udevice *dev_mux;
const struct mux_control_ops *ops;
struct mux_chip *mux_chip;

log_debug("%s(dev=%p, index=%d, mux=%p)\n", __func__, dev, index, mux);

ret = dev_read_phandle_with_args(dev, prop_name, "#mux-control-cells",
0, index, &args);
if (ret) {
debug("%s: fdtdec_parse_phandle_with_args failed: err=%d\n",
__func__, ret);
return ret;
}

ret = uclass_get_device_by_ofnode(UCLASS_MUX, args.node, &dev_mux);
if (ret) {
debug("%s: uclass_get_device_by_ofnode failed: err=%d\n",
__func__, ret);
return ret;
}

mux_chip = dev_get_uclass_priv(dev_mux);

ops = mux_dev_ops(dev_mux);
if (ops->of_xlate)
ret = ops->of_xlate(mux_chip, &args, mux);
else
ret = mux_of_xlate_default(mux_chip, &args, mux);
if (ret) {
debug("of_xlate() failed: %d\n", ret);
return ret;
}
(*mux)->dev = dev_mux;

return 0;
}