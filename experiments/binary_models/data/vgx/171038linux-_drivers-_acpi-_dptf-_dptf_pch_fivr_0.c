static int FUN1(acpi_handle VAR1, char *VAR2, struct VAR3 *VAR4)
{
struct acpi_buffer VAR5 = { sizeof(struct VAR3), VAR4};
struct acpi_buffer VAR6 = { VAR7, NULL };
struct acpi_buffer VAR8 = { sizeof(""), "" };
union VAR9 *VAR10;
acpi_status VAR11;
int VAR12 = -VAR13;

VAR11 = FUN2(VAR1, VAR2, NULL, &VAR6);
if (FUN3(VAR11))
return VAR12;

VAR10 = VAR6.VAR14;
if (!VAR10 || VAR10->VAR15 != VAR16)
goto VAR17;

VAR11 = FUN4(VAR10, &VAR8, &VAR5);
if (FUN3(VAR11))
goto VAR17;

if (VAR4->VAR11)
goto VAR17;

VAR12 = 0;

VAR17:
FUN5(VAR6.VAR14);
return VAR12;
}