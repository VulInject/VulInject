int skl_sst_init_fw(struct device *dev, struct skl_dev *skl)
{
int ret;
struct sst_dsp *sst = skl->dsp;

ret = sst->fw_ops.load_fw(sst);
if (ret < 0) {
dev_err(dev, "Load base fw failed : %d\n", ret);
return ret;
}

skl_dsp_init_core_state(sst);

if (skl->lib_count > 1) {
ret = sst->fw_ops.load_library(sst, skl->lib_info,
skl->lib_count);
if (ret < 0) {
dev_err(dev, "Load Library failed : %x\n", ret);
return ret;
}
}
skl->is_first_boot = false;

return 0;
}