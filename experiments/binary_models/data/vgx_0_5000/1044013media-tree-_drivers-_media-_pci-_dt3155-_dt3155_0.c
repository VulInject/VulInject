static int dt3155_querycap(struct file *filp, void *p,
struct v4l2_capability *cap)
{
struct dt3155_priv *pd = video_drvdata(filp);

strcpy(cap->driver, DT3155_NAME);
strcpy(cap->card, DT3155_NAME " frame grabber");
sprintf(cap->bus_info, "PCI:%s", pci_name(pd->pdev));
cap->device_caps = V4L2_CAP_VIDEO_CAPTURE |
V4L2_CAP_STREAMING | V4L2_CAP_READWRITE;
cap->capabilities = cap->device_caps | V4L2_CAP_DEVICE_CAPS;
return 0;
}