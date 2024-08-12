FUN1 (
ACPI_HANDLE             VAR1,
char                    *VAR2,
VAR3        *VAR4,
VAR5             *VAR6)
{
ACPI_VENDOR_WALK_INFO   VAR7;
ACPI_STATUS             VAR8;




if (!VAR4 || !VAR6)
{
return (VAR9);
}

VAR7.VAR4 = VAR4;
VAR7.VAR10 = VAR6;
VAR7.VAR8 = VAR11;



VAR8 = FUN2 (
VAR1, VAR2, VAR12, &VAR7);
if (FUN3 (VAR8))
{
return (VAR8);
}

return (VAR7.VAR8);
}