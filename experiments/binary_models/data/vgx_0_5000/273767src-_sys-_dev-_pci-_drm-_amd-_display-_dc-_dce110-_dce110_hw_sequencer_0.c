static void dce110_power_down_fe(struct dc *dc, struct pipe_ctx *pipe_ctx)
{
struct dce_hwseq *hws = dc->hwseq;
int fe_idx = pipe_ctx->plane_res.mi ?
pipe_ctx->plane_res.mi->inst : pipe_ctx->pipe_idx;


if (dc->current_state->res_ctx.pipe_ctx[fe_idx].stream)
return;

hws->funcs.enable_display_power_gating(
dc, fe_idx, dc->ctx->dc_bios, PIPE_GATING_CONTROL_ENABLE);

dc->res_pool->transforms[fe_idx]->funcs->transform_reset(
dc->res_pool->transforms[fe_idx]);
}