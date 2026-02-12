ISADevice *isa_ide_init(ISABus *bus, int iobase, int iobase2, int isairq,
DriveInfo *hd0, DriveInfo *hd1)
{
DeviceState *dev;
ISADevice *isadev;
ISAIDEState *s;

isadev = isa_new(TYPE_ISA_IDE);
dev = DEVICE(isadev);
qdev_prop_set_uint32(dev, "iobase",  iobase);
qdev_prop_set_uint32(dev, "iobase2", iobase2);
qdev_prop_set_uint32(dev, "irq",     isairq);
isa_realize_and_unref(isadev, bus, &error_fatal);

s = ISA_IDE(dev);
if (hd0) {
ide_create_drive(&s->bus, 0, hd0);
}
if (hd1) {
ide_create_drive(&s->bus, 1, hd1);
}
return isadev;
}