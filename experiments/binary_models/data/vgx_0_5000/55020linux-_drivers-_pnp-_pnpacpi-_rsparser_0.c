static void pnpacpi_encode_io(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
{
struct acpi_resource_io *io = &resource->data.io;

if (pnp_resource_enabled(p)) {

io->io_decode = (p->flags & IORESOURCE_IO_16BIT_ADDR) ?
ACPI_DECODE_16 : ACPI_DECODE_10;
io->minimum = p->start;
io->maximum = p->end;
io->alignment = 0;	
io->address_length = resource_size(p);
} else {
io->minimum = 0;
io->address_length = 0;
}

pnp_dbg(&dev->dev, "  encode io %#x-%#x decode %#x\n", io->minimum,
io->minimum + io->address_length - 1, io->io_decode);
}