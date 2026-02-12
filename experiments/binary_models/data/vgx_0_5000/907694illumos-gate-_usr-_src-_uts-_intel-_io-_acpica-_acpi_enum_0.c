static void
parse_resources_fixed_io(ACPI_RESOURCE *resource_ptr, struct regspec *io,
int *io_count)
{
ACPI_RESOURCE_FIXED_IO fixed_io = resource_ptr->Data.FixedIo;

if (fixed_io.AddressLength == 0)
return;

io[*io_count].regspec_bustype = 1; 
io[*io_count].regspec_addr = fixed_io.Address;
io[*io_count].regspec_size = fixed_io.AddressLength;
if (acpi_enum_debug & PARSE_RES_IO) {
cmn_err(CE_NOTE, "!parse_resources() "\
"Fixed IO 0x%X, length: 0x%X",
fixed_io.Address, fixed_io.AddressLength);
}
(*io_count)++;
}