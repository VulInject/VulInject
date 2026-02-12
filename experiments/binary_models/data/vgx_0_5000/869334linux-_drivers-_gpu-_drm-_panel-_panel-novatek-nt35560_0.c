static int nt35560_get_modes(struct drm_panel *panel,
struct drm_connector *connector)
{
struct nt35560 *nt = panel_to_nt35560(panel);
const struct nt35560_config *conf = nt->conf;
struct drm_display_mode *mode;

if (nt->video_mode)
mode = drm_mode_duplicate(connector->dev,
conf->vid_mode);
else
mode = drm_mode_duplicate(connector->dev,
conf->cmd_mode);
if (!mode) {
dev_err(panel->dev, "bad mode or failed to add mode\n");
return -EINVAL;
}
drm_mode_set_name(mode);
mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;

connector->display_info.width_mm = mode->width_mm;
connector->display_info.height_mm = mode->height_mm;

drm_mode_probed_add(connector, mode);

return 1; 
}