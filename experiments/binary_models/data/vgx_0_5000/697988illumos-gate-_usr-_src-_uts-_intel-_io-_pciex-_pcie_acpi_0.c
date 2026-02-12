static ACPI_STATUS
pcie_walk_obj_namespace(ACPI_HANDLE hdl, uint32_t nl, void *context,
void **ret)
{
int status;
ACPI_BUFFER retbuf;
char buf[32];


retbuf.Pointer = NULL;
retbuf.Length = ACPI_ALLOCATE_BUFFER;
status = AcpiGetName(hdl, ACPI_FULL_PATHNAME, &retbuf);
if (status != AE_OK)
return (status);
buf[0] = 0;
while (nl--)
(void) strcat(buf, "  ");
PCIE_DBG("%sDEVICE: %s\n", buf, (char *)retbuf.Pointer);
AcpiOsFree(retbuf.Pointer);


PCIE_DBG("%s  METHODS: \n", buf);
status = AcpiWalkNamespace(ACPI_TYPE_METHOD, hdl, 1,
pcie_print_acpi_name, NULL, (void *)buf, NULL);
return (status);
}