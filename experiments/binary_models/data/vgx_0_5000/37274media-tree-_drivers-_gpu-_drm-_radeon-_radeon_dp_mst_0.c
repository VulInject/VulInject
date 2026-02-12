static int radeon_dp_mst_get_ddc_modes(struct drm_connector *connector)
{
struct radeon_connector *radeon_connector = to_radeon_connector(connector);
struct radeon_connector *master = radeon_connector->mst_port;
struct edid *edid;
int ret = 0;

edid = drm_dp_mst_get_edid(connector, &master->mst_mgr, radeon_connector->port);
radeon_connector->edid = edid;
DRM_DEBUG_KMS("edid retrieved %p\n", edid);
if (radeon_connector->edid) {
drm_mode_connector_update_edid_property(&radeon_connector->base, radeon_connector->edid);
ret = drm_add_edid_modes(&radeon_connector->base, radeon_connector->edid);
drm_edid_to_eld(&radeon_connector->base, radeon_connector->edid);
return ret;
}
drm_mode_connector_update_edid_property(&radeon_connector->base, NULL);

return ret;
}