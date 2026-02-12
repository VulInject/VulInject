AcpiUtShortShiftLeft (
UINT64                  Operand,
UINT32                  Count,
UINT64                  *OutResult)
{
UINT64_OVERLAY          OperandOvl;


ACPI_FUNCTION_TRACE (UtShortShiftLeft);


OperandOvl.Full = Operand;

if ((Count & 63) >= 32)
{
OperandOvl.Part.Hi = OperandOvl.Part.Lo;
OperandOvl.Part.Lo = 0;
Count = (Count & 63) - 32;
}
ACPI_SHIFT_LEFT_64_BY_32 (OperandOvl.Part.Hi,
OperandOvl.Part.Lo, Count);



if (OutResult)
{
*OutResult = OperandOvl.Full;
}

return_ACPI_STATUS (AE_OK);
}