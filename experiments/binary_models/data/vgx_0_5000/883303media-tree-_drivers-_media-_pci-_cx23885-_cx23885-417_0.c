static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
{
struct cx23885_dev *dev = video_drvdata(file);
struct cx23885_tsport  *tsport = &dev->ts1;

strlcpy(cap->driver, dev->name, sizeof(cap->driver));
strlcpy(cap->card, cx23885_boards[tsport->dev->board].name,
sizeof(cap->card));
sprintf(cap->bus_info, "PCIe:%s", pci_name(dev->pci));
cap->device_caps = V4L2_CAP_VIDEO_CAPTURE | V4L2_CAP_READWRITE |
V4L2_CAP_STREAMING;
if (dev->tuner_type != TUNER_ABSENT)
cap->device_caps |= V4L2_CAP_TUNER;
cap->capabilities = cap->device_caps | V4L2_CAP_VBI_CAPTURE |
V4L2_CAP_AUDIO | V4L2_CAP_DEVICE_CAPS;

return 0;
}