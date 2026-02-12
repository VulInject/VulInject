static void mdp_vpu_ipi_handle_frame_ack(void *data, unsigned int len,
void *priv)
{
struct img_sw_addr *addr = (struct img_sw_addr *)data;
struct img_ipi_frameparam *param =
(struct img_ipi_frameparam *)(unsigned long)addr->va;
struct mdp_vpu_ctx *ctx =
(struct mdp_vpu_ctx *)(unsigned long)param->drv_data;

if (param->state) {
struct mdp_dev *mdp = vpu_to_mdp(ctx->vpu_dev);

dev_err(&mdp->pdev->dev, "VPU MDP failure:%d\n", param->state);
}
ctx->vpu_dev->status = param->state;
complete(&ctx->vpu_dev->ipi_acked);
}