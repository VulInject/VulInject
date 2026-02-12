static void cdn_dp_unbind(struct device *dev, struct device *master, void *data)
{
struct cdn_dp_device *dp = dev_get_drvdata(dev);
struct drm_encoder *encoder = &dp->encoder.encoder;
struct drm_connector *connector = &dp->connector;

cancel_work_sync(&dp->event_work);
cdn_dp_encoder_disable(encoder);
encoder->funcs->destroy(encoder);
connector->funcs->destroy(connector);

pm_runtime_disable(dev);
if (dp->fw_loaded)
release_firmware(dp->fw);
kfree(dp->edid);
dp->edid = NULL;
}