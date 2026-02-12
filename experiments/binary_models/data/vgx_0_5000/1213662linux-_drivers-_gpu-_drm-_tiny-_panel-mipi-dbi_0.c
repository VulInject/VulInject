static int panel_mipi_dbi_get_mode(struct mipi_dbi_dev *dbidev, struct drm_display_mode *mode)
{
struct device *dev = dbidev->drm.dev;
u16 hback_porch, vback_porch;
int ret;

ret = of_get_drm_panel_display_mode(dev->of_node, mode, NULL);
if (ret) {
dev_err(dev, "%pOF: failed to get panel-timing (error=%d)\n", dev->of_node, ret);
return ret;
}

mode->type = DRM_MODE_TYPE_DRIVER | DRM_MODE_TYPE_PREFERRED;

hback_porch = mode->htotal - mode->hsync_end;
vback_porch = mode->vtotal - mode->vsync_end;


if (!mode->hdisplay || !mode->vdisplay || mode->flags ||
mode->hsync_end > mode->hdisplay || (hback_porch + mode->hdisplay) > 0xffff ||
mode->vsync_end > mode->vdisplay || (vback_porch + mode->vdisplay) > 0xffff) {
dev_err(dev, "%pOF: panel-timing out of bounds\n", dev->of_node);
return -EINVAL;
}


if (!mode->clock)
mode->clock = mode->htotal * mode->vtotal * 60 / 1000;

dbidev->top_offset = vback_porch;
dbidev->left_offset = hback_porch;

return 0;
}