static int pingpong_tearcheck_enable(struct drm_encoder *encoder)
{
struct mdp5_kms *mdp5_kms = get_kms(encoder);
struct mdp5_hw_mixer *mixer = mdp5_crtc_get_mixer(encoder->crtc);
int pp_id = mixer->pp;
int ret;

ret = clk_set_rate(mdp5_kms->vsync_clk,
clk_round_rate(mdp5_kms->vsync_clk, VSYNC_CLK_RATE));
if (ret) {
dev_err(encoder->dev->dev,
"vsync_clk clk_set_rate failed, %d\n", ret);
return ret;
}
ret = clk_prepare_enable(mdp5_kms->vsync_clk);
if (ret) {
dev_err(encoder->dev->dev,
"vsync_clk clk_prepare_enable failed, %d\n", ret);
return ret;
}

mdp5_write(mdp5_kms, REG_MDP5_PP_TEAR_CHECK_EN(pp_id), 1);

return 0;
}