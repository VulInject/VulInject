static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
{
struct video_device *vdev = video_devdata(file);
struct au0828_dev *dev = video_drvdata(file);

dprintk(1, "%s called std_set %d dev_state %ld\n", __func__,
dev->std_set_in_tuner_core, dev->dev_state);

strlcpy(cap->driver, "au0828", sizeof(cap->driver));
strlcpy(cap->card, dev->board.name, sizeof(cap->card));
usb_make_path(dev->usbdev, cap->bus_info, sizeof(cap->bus_info));


cap->device_caps = V4L2_CAP_AUDIO |
V4L2_CAP_READWRITE |
V4L2_CAP_STREAMING |
V4L2_CAP_TUNER;
if (vdev->vfl_type == VFL_TYPE_GRABBER)
cap->device_caps |= V4L2_CAP_VIDEO_CAPTURE;
else
cap->device_caps |= V4L2_CAP_VBI_CAPTURE;
cap->capabilities = cap->device_caps | V4L2_CAP_DEVICE_CAPS |
V4L2_CAP_VBI_CAPTURE | V4L2_CAP_VIDEO_CAPTURE;
return 0;
}