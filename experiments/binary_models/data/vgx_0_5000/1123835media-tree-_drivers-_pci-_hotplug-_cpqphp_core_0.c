static int process_SI(struct hotplug_slot *hotplug_slot)
{
struct pci_func *slot_func;
struct slot *slot = hotplug_slot->private;
struct controller *ctrl = slot->ctrl;
u8 bus;
u8 devfn;
u8 device;
u8 function;

dbg("%s - physical_slot = %s\n", __func__, slot_name(slot));

if (cpqhp_get_bus_dev(ctrl, &bus, &devfn, slot->number) == -1)
return -ENODEV;

device = devfn >> 3;
function = devfn & 0x7;
dbg("bus, dev, fn = %d, %d, %d\n", bus, device, function);

slot_func = cpqhp_slot_find(bus, device, function);
if (!slot_func)
return -ENODEV;

slot_func->bus = bus;
slot_func->device = device;
slot_func->function = function;
slot_func->configured = 0;
dbg("board_added(%p, %p)\n", slot_func, ctrl);
return cpqhp_process_SI(ctrl, slot_func);
}