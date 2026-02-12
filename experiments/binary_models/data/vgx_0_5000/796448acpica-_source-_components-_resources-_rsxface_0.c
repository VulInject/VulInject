AcpiGetVendorResource (
ACPI_HANDLE             DeviceHandle,
char                    *Name,
ACPI_VENDOR_UUID        *Uuid,
ACPI_BUFFER             *RetBuffer)
{
ACPI_VENDOR_WALK_INFO   Info;
ACPI_STATUS             Status;




if (!Uuid || !RetBuffer)
{
return (AE_BAD_PARAMETER);
}

Info.Uuid = Uuid;
Info.Buffer = RetBuffer;
Info.Status = AE_NOT_EXIST;



Status = AcpiWalkResources (
DeviceHandle, Name, AcpiRsMatchVendorResource, &Info);
if (ACPI_FAILURE (Status))
{
return (Status);
}

return (Info.Status);
}