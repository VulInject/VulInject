int fwu_get_active_index(uint *active_idx)
{
int ret;
struct udevice *dev;
struct fwu_mdata mdata = { 0 };

ret = fwu_get_dev_mdata(&dev, &mdata);
if (ret)
return ret;


*active_idx = mdata.active_index;
if (*active_idx >= CONFIG_FWU_NUM_BANKS) {
log_debug("Active index value read is incorrect\n");
ret = -EINVAL;
}

return ret;
}