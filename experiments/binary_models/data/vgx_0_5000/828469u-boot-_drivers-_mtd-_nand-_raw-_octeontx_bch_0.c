static int octeontx_pci_bchpf_probe(struct udevice *dev)
{
struct bch_device *bch;
int ret;

debug("%s(%s)\n", __func__, dev->name);
bch = dev_get_priv(dev);
if (!bch)
return -ENOMEM;

bch->reg_base = dm_pci_map_bar(dev, PCI_BASE_ADDRESS_0, 0, 0,
PCI_REGION_TYPE, PCI_REGION_MEM);
bch->dev = dev;

debug("%s: base address: %p\n", __func__, bch->reg_base);
ret = bch_device_init(bch);
if (ret) {
printf("%s(%s): init returned %d\n", __func__, dev->name, ret);
return ret;
}
INIT_LIST_HEAD(&bch->list);
list_add(&bch->list, &octeontx_bch_devices);
token = (void *)dev;

debug("%s: Configuring SRIOV\n", __func__);
bch_sriov_configure(dev, num_vfs);
debug("%s: Done.\n", __func__);
octeontx_bch_putp(bch);

return 0;
}

static const struct pci_device_id octeontx_bchpf_pci_id_table[] = {
{ PCI_VDEVICE(CAVIUM, PCI_DEVICE_ID_CAVIUM_BCH) },
{},
};