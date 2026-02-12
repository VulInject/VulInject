int skl_dsp_get_core(struct sst_dsp *ctx, unsigned int core_id)
{
struct skl_dev *skl = ctx->thread_context;
int ret = 0;

if (core_id >= skl->cores.count) {
dev_err(ctx->dev, "invalid core id: %d\n", core_id);
return -EINVAL;
}

skl->cores.usage_count[core_id]++;

if (skl->cores.state[core_id] == SKL_DSP_RESET) {
ret = ctx->fw_ops.set_state_D0(ctx, core_id);
if (ret < 0) {
dev_err(ctx->dev, "unable to get core%d\n", core_id);
goto out;
}
}

out:
dev_dbg(ctx->dev, "core id %d state %d usage_count %d\n",
core_id, skl->cores.state[core_id],
skl->cores.usage_count[core_id]);

return ret;
}