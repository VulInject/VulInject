int analogix_dp_bind(struct analogix_dp_device *dp, struct drm_device *drm_dev)
{
int ret;

dp->drm_dev = drm_dev;
dp->encoder = dp->plat_data->encoder;

dp->aux.name = "DP-AUX";
dp->aux.transfer = analogix_dpaux_transfer;
dp->aux.dev = dp->dev;
dp->aux.drm_dev = drm_dev;

ret = drm_dp_aux_register(&dp->aux);
if (ret)
return ret;

pm_runtime_use_autosuspend(dp->dev);
pm_runtime_set_autosuspend_delay(dp->dev, 100);
pm_runtime_enable(dp->dev);

ret = analogix_dp_create_bridge(drm_dev, dp);
if (ret) {
DRM_ERROR("failed to create bridge (%d)\n", ret);
goto err_disable_pm_runtime;
}

return 0;

err_disable_pm_runtime:
pm_runtime_dont_use_autosuspend(dp->dev);
pm_runtime_disable(dp->dev);
drm_dp_aux_unregister(&dp->aux);

return ret;
}