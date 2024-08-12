static VAR1 FUN1(acpi_handle VAR2,
unsigned long long *VAR3)
{
union acpi_object VAR4;
struct acpi_object_list VAR5;
unsigned long long VAR6;
acpi_status VAR7;

VAR4.VAR8 = VAR9;
VAR4.VAR10.VAR3 = 0x01;
VAR5.VAR11 = 1;
VAR5.VAR12 = &VAR4;
VAR7 = FUN2(VAR2, "", &VAR5, &VAR6);
if (FUN3(VAR7))
*VAR3 = VAR6;
return VAR7;
}