static int exynos_dpi_get_modes(struct drm_connector *connector)
{
struct exynos_dpi *ctx = connector_to_dpi(connector);


if (ctx->vm) {
struct drm_display_mode *mode;

mode = drm_mode_create(connector->dev);
if (!mode) {
DRM_DEV_ERROR(ctx->dev,
"failed to create a new display mode\n");
return 0;
}
drm_display_mode_from_videomode(ctx->vm, mode);
mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;
drm_mode_probed_add(connector, mode);
return 1;
}

if (ctx->panel)
return drm_panel_get_modes(ctx->panel, connector);

return 0;
}