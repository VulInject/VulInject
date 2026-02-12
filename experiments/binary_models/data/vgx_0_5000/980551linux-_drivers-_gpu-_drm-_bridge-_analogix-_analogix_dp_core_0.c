static int analogix_dp_get_modes(struct drm_connector *connector)
{
struct analogix_dp_device *dp = to_dp(connector);
struct edid *edid;
int ret, num_modes = 0;

if (dp->plat_data->panel) {
num_modes += drm_panel_get_modes(dp->plat_data->panel, connector);
} else {
ret = analogix_dp_prepare_panel(dp, true, false);
if (ret) {
DRM_ERROR("Failed to prepare panel (%d)\n", ret);
return 0;
}

edid = drm_get_edid(connector, &dp->aux.ddc);
if (edid) {
drm_connector_update_edid_property(&dp->connector,
edid);
num_modes += drm_add_edid_modes(&dp->connector, edid);
kfree(edid);
}

ret = analogix_dp_prepare_panel(dp, false, false);
if (ret)
DRM_ERROR("Failed to unprepare panel (%d)\n", ret);
}

if (dp->plat_data->get_modes)
num_modes += dp->plat_data->get_modes(dp->plat_data, connector);

return num_modes;
}