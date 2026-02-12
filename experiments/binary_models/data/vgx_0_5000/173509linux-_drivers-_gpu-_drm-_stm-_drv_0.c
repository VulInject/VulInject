static int drv_load(struct drm_device *ddev)
{
struct platform_device *pdev = to_platform_device(ddev->dev);
struct ltdc_device *ldev;
int ret;

DRM_DEBUG("%s\n", __func__);

ldev = devm_kzalloc(ddev->dev, sizeof(*ldev), GFP_KERNEL);
if (!ldev)
return -ENOMEM;

ddev->dev_private = (void *)ldev;

ret = drmm_mode_config_init(ddev);
if (ret)
return ret;


ddev->mode_config.min_width = 0;
ddev->mode_config.min_height = 0;
ddev->mode_config.max_width = STM_MAX_FB_WIDTH;
ddev->mode_config.max_height = STM_MAX_FB_HEIGHT;
ddev->mode_config.funcs = &drv_mode_config_funcs;
ddev->mode_config.normalize_zpos = true;

ret = ltdc_load(ddev);
if (ret)
return ret;

drm_mode_config_reset(ddev);
drm_kms_helper_poll_init(ddev);

platform_set_drvdata(pdev, ddev);

return 0;
}