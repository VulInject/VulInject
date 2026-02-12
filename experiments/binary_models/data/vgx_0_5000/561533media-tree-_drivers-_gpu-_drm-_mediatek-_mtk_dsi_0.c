static int mtk_dsi_create_connector(struct drm_device *drm, struct mtk_dsi *dsi)
{
int ret;

ret = drm_connector_init(drm, &dsi->conn, &mtk_dsi_connector_funcs,
DRM_MODE_CONNECTOR_DSI);
if (ret) {
DRM_ERROR("Failed to connector init to drm\n");
return ret;
}

drm_connector_helper_add(&dsi->conn, &mtk_dsi_connector_helper_funcs);

dsi->conn.dpms = DRM_MODE_DPMS_OFF;
drm_mode_connector_attach_encoder(&dsi->conn, &dsi->encoder);

if (dsi->panel) {
ret = drm_panel_attach(dsi->panel, &dsi->conn);
if (ret) {
DRM_ERROR("Failed to attach panel to drm\n");
goto err_connector_cleanup;
}
}

return 0;

err_connector_cleanup:
drm_connector_cleanup(&dsi->conn);
return ret;
}