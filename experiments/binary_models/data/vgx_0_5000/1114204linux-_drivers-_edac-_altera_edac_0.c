static int __maybe_unused
altr_check_ecc_deps(struct altr_edac_device_dev *device)
{
void __iomem  *base = device->base;
const struct edac_device_prv_data *prv = device->data;

if (readl(base + prv->ecc_en_ofst) & prv->ecc_enable_mask)
return 0;

edac_printk(KERN_ERR, EDAC_DEVICE,
"%s: No ECC present or ECC disabled.\n",
device->edac_dev_name);
return -ENODEV;
}