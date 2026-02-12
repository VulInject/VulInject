static void hv_test_dev_realizefn(DeviceState *d, Error **errp)
{
ISADevice *isa = ISA_DEVICE(d);
HypervTestDev *dev = HYPERV_TEST_DEV(d);
MemoryRegion *io = isa_address_space_io(isa);

QLIST_INIT(&dev->sint_routes);
QLIST_INIT(&dev->msg_conns);
QLIST_INIT(&dev->evt_conns);
memory_region_init_io(&dev->sint_control, OBJECT(dev),
&synic_test_sint_ops, dev,
"hyperv-testdev-ctl", 4);
memory_region_add_subregion(io, 0x3000, &dev->sint_control);
}