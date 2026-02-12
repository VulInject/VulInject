static void final_fixup(struct pci_dev *dev)
{
unsigned char bist;


if (pci_read_config_byte(dev, PCI_BIST, &bist) == PCIBIOS_SUCCESSFUL &&
(bist & PCI_BIST_CAPABLE)) {
unsigned long timeout;
pci_set_power_state(dev, PCI_D0);
pr_info("PCI: %s BIST...", pci_name(dev));
pci_write_config_byte(dev, PCI_BIST, PCI_BIST_START);
timeout = jiffies + HZ * 2;	
do {
pci_read_config_byte(dev, PCI_BIST, &bist);
if (time_after(jiffies, timeout))
break;
} while (bist & PCI_BIST_START);
if (bist & (PCI_BIST_CODE_MASK | PCI_BIST_START))
pr_cont("failed. (0x%x)\n", bist);
else
pr_cont("OK.\n");
}
}