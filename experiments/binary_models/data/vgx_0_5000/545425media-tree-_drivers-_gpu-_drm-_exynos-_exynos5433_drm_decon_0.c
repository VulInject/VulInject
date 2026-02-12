static void decon_clear_channels(struct exynos_drm_crtc *crtc)
{
struct decon_context *ctx = crtc->ctx;
int win, i, ret;

DRM_DEBUG_KMS("%s\n", __FILE__);

for (i = 0; i < ARRAY_SIZE(decon_clks_name); i++) {
ret = clk_prepare_enable(ctx->clks[i]);
if (ret < 0)
goto err;
}

for (win = 0; win < WINDOWS_NR; win++) {
decon_shadow_protect_win(ctx, win, true);
decon_set_bits(ctx, DECON_WINCONx(win), WINCONx_ENWIN_F, 0);
decon_shadow_protect_win(ctx, win, false);
}

decon_set_bits(ctx, DECON_UPDATE, STANDALONE_UPDATE_F, ~0);


msleep(50);

err:
while (--i >= 0)
clk_disable_unprepare(ctx->clks[i]);
}

static const struct exynos_drm_crtc_ops decon_crtc_ops = {
.enable			= decon_enable,
.disable		= decon_disable,
.enable_vblank		= decon_enable_vblank,
.disable_vblank		= decon_disable_vblank,
.atomic_begin		= decon_atomic_begin,
.update_plane		= decon_update_plane,
.disable_plane		= decon_disable_plane,
.atomic_flush		= decon_atomic_flush,
.te_handler		= decon_te_irq_handler,
};