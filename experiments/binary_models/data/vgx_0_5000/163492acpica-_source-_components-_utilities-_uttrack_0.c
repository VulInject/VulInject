AcpiUtFreeAndTrack (
void                    *Allocation,
UINT32                  Component,
const char              *Module,
UINT32                  Line)
{
ACPI_DEBUG_MEM_BLOCK    *DebugBlock;
ACPI_STATUS             Status;


ACPI_FUNCTION_TRACE_PTR (UtFree, Allocation);


if (NULL == Allocation)
{
ACPI_ERROR ((Module, Line,
"Attempt to delete a NULL address"));

return_VOID;
}

DebugBlock = ACPI_CAST_PTR (ACPI_DEBUG_MEM_BLOCK,
(((char *) Allocation) - sizeof (ACPI_DEBUG_MEM_HEADER)));

AcpiGbl_GlobalList->TotalFreed++;
AcpiGbl_GlobalList->CurrentTotalSize -= DebugBlock->Size;

Status = AcpiUtRemoveAllocation (DebugBlock, Component, Module, Line);
if (ACPI_FAILURE (Status))
{
ACPI_EXCEPTION ((AE_INFO, Status, "Could not free memory"));
}

AcpiOsFree (DebugBlock);
ACPI_DEBUG_PRINT ((ACPI_DB_ALLOCATIONS, "%p freed (block %p)\n",
Allocation, DebugBlock));
return_VOID;
}