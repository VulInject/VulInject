static int kd35t133_unprepare(struct drm_panel *panel)
{
struct kd35t133 *ctx = panel_to_kd35t133(panel);
struct mipi_dsi_device *dsi = to_mipi_dsi_device(ctx->dev);
int ret;

if (!ctx->prepared)
return 0;

ret = mipi_dsi_dcs_set_display_off(dsi);
if (ret < 0)
dev_err(ctx->dev, "failed to set display off: %d\n", ret);

ret = mipi_dsi_dcs_enter_sleep_mode(dsi);
if (ret < 0) {
dev_err(ctx->dev, "failed to enter sleep mode: %d\n", ret);
return ret;
}

regulator_disable(ctx->iovcc);
regulator_disable(ctx->vdd);

ctx->prepared = false;

return 0;
}