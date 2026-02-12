static int script_read_bootflow(struct udevice *dev, struct bootflow *bflow)
{
const struct udevice *media = dev_get_parent(bflow->dev);
struct udevice *bootstd;
int ret;

ret = uclass_first_device_err(UCLASS_BOOTSTD, &bootstd);
if (ret)
return log_msg_ret("std", ret);

if (IS_ENABLED(CONFIG_CMD_DHCP) &&
device_get_uclass_id(media) == UCLASS_ETH) {

ret = script_read_bootflow_net(bflow);
if (ret)
return log_msg_ret("net", ret);
} else {
ret = script_read_bootflow_file(bootstd, bflow);
if (ret)
return log_msg_ret("blk", ret);
}

return 0;
}