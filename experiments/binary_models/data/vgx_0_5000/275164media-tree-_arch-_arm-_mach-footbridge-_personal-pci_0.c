static int __init personal_server_map_irq(const struct pci_dev *dev, u8 slot,
u8 pin)
{
unsigned char line;

pci_read_config_byte(dev, PCI_INTERRUPT_LINE, &line);

if (line > 0x40 && line <= 0x5f) {

return irqmap_personal_server[(line & 0x1f) - 8];
} else if (line == 0) {

return 0;
} else
return irqmap_personal_server[(line - 1) & 3];
}

static struct hw_pci personal_server_pci __initdata = {
.map_irq		= personal_server_map_irq,
.nr_controllers		= 1,
.ops			= &dc21285_ops,
.setup			= dc21285_setup,
.preinit		= dc21285_preinit,
.postinit		= dc21285_postinit,
};