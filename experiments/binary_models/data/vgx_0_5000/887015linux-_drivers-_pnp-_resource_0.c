static int pci_dev_uses_irq(struct pnp_dev *pnp, struct pci_dev *pci,
unsigned int irq)
{
u32 class;
u8 progif;

if (pci->irq == irq) {
pnp_dbg(&pnp->dev, "  device %s using irq %d\n",
pci_name(pci), irq);
return 1;
}


pci_read_config_dword(pci, PCI_CLASS_REVISION, &class);
class >>= 8;		
progif = class & 0xff;
class >>= 8;

if (class == PCI_CLASS_STORAGE_IDE) {

if ((progif & 0x5) != 0x5)
if (ATA_PRIMARY_IRQ(pci) == irq ||
ATA_SECONDARY_IRQ(pci) == irq) {
pnp_dbg(&pnp->dev, "  legacy IDE device %s "
"using irq %d\n", pci_name(pci), irq);
return 1;
}
}

return 0;
}