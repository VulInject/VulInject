static int vpfe_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
{
struct vpfe_video_device *video = video_drvdata(file);
struct vpfe_device *vpfe_dev = video->vpfe_dev;

v4l2_dbg(1, debug, &vpfe_dev->v4l2_dev, "vpfe_querycap\n");

if (video->type == V4L2_BUF_TYPE_VIDEO_CAPTURE)
cap->device_caps = V4L2_CAP_VIDEO_CAPTURE | V4L2_CAP_STREAMING;
else
cap->device_caps = V4L2_CAP_VIDEO_OUTPUT | V4L2_CAP_STREAMING;
cap->capabilities = V4L2_CAP_VIDEO_CAPTURE | V4L2_CAP_VIDEO_OUTPUT |
V4L2_CAP_STREAMING | V4L2_CAP_DEVICE_CAPS;
strlcpy(cap->driver, CAPTURE_DRV_NAME, sizeof(cap->driver));
strlcpy(cap->bus_info, "VPFE", sizeof(cap->bus_info));
strlcpy(cap->card, vpfe_dev->cfg->card_name, sizeof(cap->card));

return 0;
}