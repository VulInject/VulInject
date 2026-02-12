static int truly_dcs_write(struct drm_panel *panel, u32 command)
{
struct truly_nt35597 *ctx = panel_to_ctx(panel);
int i, ret;

for (i = 0; i < ARRAY_SIZE(ctx->dsi); i++) {
ret = mipi_dsi_dcs_write(ctx->dsi[i], command, NULL, 0);
if (ret < 0) {
dev_err(ctx->dev, "cmd 0x%x failed for dsi = %d\n", command, i);
}
}

return ret;
}