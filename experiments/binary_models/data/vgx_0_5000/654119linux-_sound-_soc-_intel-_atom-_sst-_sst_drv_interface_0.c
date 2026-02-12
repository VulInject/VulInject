static int sst_power_control(struct device *dev, bool state)
{
struct intel_sst_drv *ctx = dev_get_drvdata(dev);
int ret = 0;
int usage_count = 0;

if (state) {
ret = pm_runtime_resume_and_get(dev);
usage_count = GET_USAGE_COUNT(dev);
dev_dbg(ctx->dev, "Enable: pm usage count: %d\n", usage_count);
if (ret < 0) {
dev_err(ctx->dev, "Runtime get failed with err: %d\n", ret);
return ret;
}
if ((ctx->sst_state == SST_RESET) && (usage_count == 1)) {
ret = sst_load_fw(ctx);
if (ret) {
dev_err(dev, "FW download fail %d\n", ret);
sst_set_fw_state_locked(ctx, SST_RESET);
ret = sst_pm_runtime_put(ctx);
}
}
} else {
usage_count = GET_USAGE_COUNT(dev);
dev_dbg(ctx->dev, "Disable: pm usage count: %d\n", usage_count);
return sst_pm_runtime_put(ctx);
}
return ret;
}