AcpiDebugTrace (
const char              *Name,
UINT32                  DebugLevel,
UINT32                  DebugLayer,
UINT32                  Flags)
{
ACPI_STATUS             Status;


Status = AcpiUtAcquireMutex (ACPI_MTX_NAMESPACE);
if (ACPI_FAILURE (Status))
{
return (Status);
}

AcpiGbl_TraceMethodName = Name;
AcpiGbl_TraceFlags = Flags;
AcpiGbl_TraceDbgLevel = DebugLevel;
AcpiGbl_TraceDbgLayer = DebugLayer;
Status = AE_OK;

(void) AcpiUtReleaseMutex (ACPI_MTX_NAMESPACE);
return (Status);
}