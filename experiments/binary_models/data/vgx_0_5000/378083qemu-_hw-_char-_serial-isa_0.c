static void serial_isa_build_aml(ISADevice *isadev, Aml *scope)
{
ISASerialState *isa = ISA_SERIAL(isadev);
Aml *dev;
Aml *crs;

crs = aml_resource_template();
aml_append(crs, aml_io(AML_DECODE16, isa->iobase, isa->iobase, 0x00, 0x08));
aml_append(crs, aml_irq_no_flags(isa->isairq));

dev = aml_device("COM%d", isa->index + 1);
aml_append(dev, aml_name_decl("_HID", aml_eisaid("PNP0501")));
aml_append(dev, aml_name_decl("_UID", aml_int(isa->index + 1)));
aml_append(dev, aml_name_decl("_STA", aml_int(0xf)));
aml_append(dev, aml_name_decl("_CRS", crs));

aml_append(scope, dev);
}