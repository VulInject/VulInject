static int simple_bridge_get_modes(struct drm_connector *connector)
{
struct simple_bridge *sbridge = drm_connector_to_simple_bridge(connector);
struct edid *edid;
int ret;

if (sbridge->next_bridge->ops & DRM_BRIDGE_OP_EDID) {
edid = drm_bridge_get_edid(sbridge->next_bridge, connector);
if (!edid)
DRM_INFO("EDID read failed. Fallback to standard modes\n");
} else {
edid = NULL;
}

if (!edid) {

ret = drm_add_modes_noedid(connector, 1920, 1200);
drm_set_preferred_mode(connector, 1024, 768);
return ret;
}

drm_connector_update_edid_property(connector, edid);
ret = drm_add_edid_modes(connector, edid);
kfree(edid);

return ret;
}