static void init_iops_cy82c693(ide_hwif_t *hwif)
{
static ide_hwif_t *primary;
struct pci_dev *dev = to_pci_dev(hwif->dev);

if (PCI_FUNC(dev->devfn) == 1)
primary = hwif;
else {
hwif->mate = primary;
hwif->channel = 1;
}
}

static const struct ide_port_ops cy82c693_port_ops = {
.set_pio_mode		= cy82c693_set_pio_mode,
.set_dma_mode		= cy82c693_set_dma_mode,
};