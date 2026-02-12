static int
efi_print_mem_type(const CHAR16 *varnamearg __unused, uint8_t *data,
UINTN datasz)
{
int i, n;
EFI_MEMORY_TYPE_INFORMATION *ti;

ti = (EFI_MEMORY_TYPE_INFORMATION *)data;
if (pager_output(" = \n"))
return (CMD_WARN);

n = datasz / sizeof (EFI_MEMORY_TYPE_INFORMATION);
for (i = 0; i < n && ti[i].NumberOfPages != 0; i++) {
printf("\t%23s pages: %u", efi_memory_type(ti[i].Type),
ti[i].NumberOfPages);
if (pager_output("\n"))
return (CMD_WARN);
}

return (CMD_OK);
}