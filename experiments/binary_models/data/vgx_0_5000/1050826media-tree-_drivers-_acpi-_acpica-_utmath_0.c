acpi_status
acpi_ut_short_divide(u64 in_dividend,
u32 divisor, u64 *out_quotient, u32 *out_remainder)
{

ACPI_FUNCTION_TRACE(ut_short_divide);



if (divisor == 0) {
ACPI_ERROR((AE_INFO, "Divide by zero"));
return_ACPI_STATUS(AE_AML_DIVIDE_BY_ZERO);
}



if (out_quotient) {
*out_quotient = in_dividend / divisor;
}
if (out_remainder) {
*out_remainder = (u32) (in_dividend % divisor);
}

return_ACPI_STATUS(AE_OK);
}