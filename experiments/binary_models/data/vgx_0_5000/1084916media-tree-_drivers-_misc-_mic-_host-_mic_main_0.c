
MODULE_DEVICE_TABLE(pci, mic_pci_tbl);


static struct ida g_mic_ida;


static int mic_dp_init(struct mic_device *mdev)
{
mdev->dp = kzalloc(MIC_DP_SIZE, GFP_KERNEL);
if (!mdev->dp)
return -ENOMEM;

mdev->dp_dma_addr = mic_map_single(mdev,
mdev->dp, MIC_DP_SIZE);
if (mic_map_error(mdev->dp_dma_addr)) {
kfree(mdev->dp);
dev_err(&mdev->pdev->dev, "%s %d err %d\n",
__func__, __LINE__, -ENOMEM);
return -ENOMEM;
}
mdev->ops->write_spad(mdev, MIC_DPLO_SPAD, mdev->dp_dma_addr);
mdev->ops->write_spad(mdev, MIC_DPHI_SPAD, mdev->dp_dma_addr >> 32);
return 0;
}