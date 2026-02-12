static int solo_enc_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
{
struct solo_enc_dev *solo_enc = video_drvdata(file);
struct solo_dev *solo_dev = solo_enc->solo_dev;

strcpy(cap->driver, SOLO6X10_NAME);
snprintf(cap->card, sizeof(cap->card), "Softlogic 6x10 Enc %d",
solo_enc->ch);
snprintf(cap->bus_info, sizeof(cap->bus_info), "PCI:%s",
pci_name(solo_dev->pdev));
cap->device_caps = V4L2_CAP_VIDEO_CAPTURE |
V4L2_CAP_READWRITE | V4L2_CAP_STREAMING;
cap->capabilities = cap->device_caps | V4L2_CAP_DEVICE_CAPS;
return 0;
}