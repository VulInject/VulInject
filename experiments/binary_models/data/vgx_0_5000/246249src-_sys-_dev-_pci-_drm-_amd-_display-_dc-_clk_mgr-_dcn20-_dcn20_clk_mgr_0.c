void dcn20_update_clocks_update_dpp_dto(struct clk_mgr_internal *clk_mgr,
struct dc_state *context, bool safe_to_lower)
{
int i;

clk_mgr->dccg->ref_dppclk = clk_mgr->base.clks.dppclk_khz;
for (i = 0; i < clk_mgr->base.ctx->dc->res_pool->pipe_count; i++) {
int dpp_inst, dppclk_khz, prev_dppclk_khz;


dpp_inst = i;
dppclk_khz = context->res_ctx.pipe_ctx[i].plane_res.bw.dppclk_khz;

prev_dppclk_khz = clk_mgr->dccg->pipe_dppclk_khz[i];

if (safe_to_lower || prev_dppclk_khz < dppclk_khz)
clk_mgr->dccg->funcs->update_dpp_dto(
clk_mgr->dccg, dpp_inst, dppclk_khz);
}
}