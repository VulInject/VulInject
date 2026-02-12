static int cobalt_querycap(struct file *file, void *priv_fh,
struct v4l2_capability *vcap)
{
struct cobalt_stream *s = video_drvdata(file);
struct cobalt *cobalt = s->cobalt;

strscpy(vcap->driver, "cobalt", sizeof(vcap->driver));
strscpy(vcap->card, "cobalt", sizeof(vcap->card));
snprintf(vcap->bus_info, sizeof(vcap->bus_info),
"PCIe:%s", pci_name(cobalt->pci_dev));
vcap->capabilities = V4L2_CAP_STREAMING | V4L2_CAP_READWRITE |
V4L2_CAP_VIDEO_CAPTURE | V4L2_CAP_DEVICE_CAPS;
if (cobalt->have_hsma_tx)
vcap->capabilities |= V4L2_CAP_VIDEO_OUTPUT;
return 0;
}