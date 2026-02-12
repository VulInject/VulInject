static int bxt_set_dsp_D0i0(struct sst_dsp *ctx)
{
int ret;
struct skl_ipc_d0ix_msg msg;
struct skl_sst *skl = ctx->thread_context;

dev_dbg(ctx->dev, "In %s:\n", __func__);


cancel_delayed_work_sync(&skl->d0i3.work);


if (skl->cores.state[SKL_DSP_CORE0_ID] != SKL_DSP_RUNNING_D0I3)
return 0;

dev_dbg(ctx->dev, "Set DSP to D0i0\n");

msg.instance_id = 0;
msg.module_id = 0;
msg.streaming = 0;
msg.wake = 0;

if (skl->d0i3.state == SKL_DSP_D0I3_STREAMING)
msg.streaming = 1;


if (skl->update_d0i3c)
skl->update_d0i3c(skl->dev, false);

ret =  skl_ipc_set_d0ix(&skl->ipc, &msg);
if (ret < 0) {
dev_err(ctx->dev, "Failed to set DSP to D0i0\n");
return ret;
}

skl->cores.state[SKL_DSP_CORE0_ID] = SKL_DSP_RUNNING;
skl->d0i3.state = SKL_DSP_D0I3_NONE;

return 0;
}