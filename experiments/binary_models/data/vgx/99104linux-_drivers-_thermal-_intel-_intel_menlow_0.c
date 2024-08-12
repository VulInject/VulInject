static int FUN1(struct VAR1 *VAR2,
unsigned long *VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
acpi_handle VAR7 = VAR5->VAR7;
unsigned long long VAR8;
struct acpi_object_list VAR9;
union acpi_object VAR10;
acpi_status VAR11 = VAR12;

VAR9.VAR13 = 1;
VAR9.VAR14 = &VAR10;
VAR10.VAR15 = VAR16;
VAR10.VAR17.VAR8 = VAR18;
VAR11 = FUN2(VAR7, VAR19,
&VAR9, &VAR8);
if (FUN3(VAR11))
return -VAR20;

if (!VAR8)
return -VAR21;

*VAR3 = VAR8 - 1;
return 0;
}