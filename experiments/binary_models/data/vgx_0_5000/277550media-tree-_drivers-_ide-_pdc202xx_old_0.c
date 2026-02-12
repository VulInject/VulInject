static void pdc202ata4_fixup_irq(struct pci_dev *dev, const char *name)
{
if ((dev->class >> 8) != PCI_CLASS_STORAGE_IDE) {
u8 irq = 0, irq2 = 0;
pci_read_config_byte(dev, PCI_INTERRUPT_LINE, &irq);

pci_read_config_byte(dev, (PCI_INTERRUPT_LINE)|0x80, &irq2);
if (irq != irq2) {
pci_write_config_byte(dev,
(PCI_INTERRUPT_LINE)|0x80, irq);     
printk(KERN_INFO "%s %s: PCI config space interrupt "
"mirror fixed\n", name, pci_name(dev));
}
}
}

(IDE_HFLAG_ERROR_STOPS_FIFO | \
IDE_HFLAG_OFF_BOARD)

static const struct ide_port_ops pdc20246_port_ops = {
.set_pio_mode		= pdc202xx_set_pio_mode,
.set_dma_mode		= pdc202xx_set_mode,
.test_irq		= pdc202xx_test_irq,
};