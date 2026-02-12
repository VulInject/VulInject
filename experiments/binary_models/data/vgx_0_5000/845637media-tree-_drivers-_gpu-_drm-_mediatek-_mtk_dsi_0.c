static int mtk_dsi_create_conn_enc(struct drm_device *drm, struct mtk_dsi *dsi)
{
int ret;

ret = drm_encoder_init(drm, &dsi->encoder, &mtk_dsi_encoder_funcs,
DRM_MODE_ENCODER_DSI, NULL);
if (ret) {
DRM_ERROR("Failed to encoder init to drm\n");
return ret;
}
drm_encoder_helper_add(&dsi->encoder, &mtk_dsi_encoder_helper_funcs);


dsi->encoder.possible_crtcs = 1;


ret = drm_bridge_attach(&dsi->encoder, dsi->bridge, NULL);
if (ret) {
DRM_ERROR("Failed to attach bridge to drm\n");


ret = mtk_dsi_create_connector(drm, dsi);
if (ret)
goto err_encoder_cleanup;
}

return 0;

err_encoder_cleanup:
drm_encoder_cleanup(&dsi->encoder);
return ret;
}