void dcn10_plane_atomic_disable(struct dc *dc, struct pipe_ctx *pipe_ctx)
{
struct dce_hwseq *hws = dc->hwseq;
struct hubp *hubp = pipe_ctx->plane_res.hubp;
struct dpp *dpp = pipe_ctx->plane_res.dpp;
int opp_id = hubp->opp_id;

dc->hwss.wait_for_mpcc_disconnect(dc, dc->res_pool, pipe_ctx);

hubp->funcs->hubp_clk_cntl(hubp, false);

dpp->funcs->dpp_dppclk_control(dpp, false, false);

if (opp_id != 0xf && pipe_ctx->stream_res.opp->mpc_tree_params.opp_list == NULL)
pipe_ctx->stream_res.opp->funcs->opp_pipe_clock_control(
pipe_ctx->stream_res.opp,
false);

hubp->power_gated = true;
dc->optimized_required = false; 

hws->funcs.plane_atomic_power_down(dc,
pipe_ctx->plane_res.dpp,
pipe_ctx->plane_res.hubp);

pipe_ctx->stream = NULL;
memset(&pipe_ctx->stream_res, 0, sizeof(pipe_ctx->stream_res));
memset(&pipe_ctx->plane_res, 0, sizeof(pipe_ctx->plane_res));
pipe_ctx->top_pipe = NULL;
pipe_ctx->bottom_pipe = NULL;
pipe_ctx->plane_state = NULL;
}