static int netwinder_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
{
switch (slot) {
case 0:  
return 0;

case 9:  
return IRQ_NETWINDER_VGA;

case 10: 
return IRQ_NETWINDER_ETHER100;

case 12: 
return IRQ_ISA_HARDDISK1;

case 13: 
return IRQ_NETWINDER_ETHER10;

default:
printk(KERN_ERR "PCI: unknown device in slot %s\n",
pci_name(dev));
return 0;
}
}

static struct hw_pci netwinder_pci __initdata = {
.map_irq		= netwinder_map_irq,
.nr_controllers		= 1,
.ops			= &dc21285_ops,
.setup			= dc21285_setup,
.preinit		= dc21285_preinit,
.postinit		= dc21285_postinit,
};