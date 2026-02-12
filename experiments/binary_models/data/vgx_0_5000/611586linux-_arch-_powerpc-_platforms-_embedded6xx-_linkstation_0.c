}
machine_device_initcall(linkstation, declare_of_platform_devices);

static int __init linkstation_add_bridge(struct device_node *dev)
{
int len;
struct pci_controller *hose;
const int *bus_range;

printk("Adding PCI host bridge %pOF\n", dev);

bus_range = of_get_property(dev, "bus-range", &len);
if (bus_range == NULL || len < 2 * sizeof(int))
printk(KERN_WARNING "Can't get bus-range for %pOF, assume"
" bus 0\n", dev);

hose = pcibios_alloc_controller(dev);
if (hose == NULL)
return -ENOMEM;
hose->first_busno = bus_range ? bus_range[0] : 0;
hose->last_busno = bus_range ? bus_range[1] : 0xff;
setup_indirect_pci(hose, 0xfec00000, 0xfee00000, 0);



pci_process_bridge_OF_ranges(hose, dev, 1);
return 0;
}