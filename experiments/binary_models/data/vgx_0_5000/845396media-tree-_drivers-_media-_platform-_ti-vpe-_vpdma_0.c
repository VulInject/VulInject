static int vpdma_load_firmware(struct vpdma_data *vpdma)
{
int r;
struct device *dev = &vpdma->pdev->dev;

r = request_firmware_nowait(THIS_MODULE, 1,
(const char *) VPDMA_FIRMWARE, dev, GFP_KERNEL, vpdma,
vpdma_firmware_cb);
if (r) {
dev_err(dev, "firmware not available %s\n", VPDMA_FIRMWARE);
return r;
} else {
dev_info(dev, "loading firmware %s\n", VPDMA_FIRMWARE);
}

return 0;
}