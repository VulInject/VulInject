static VAR1 FUN1(struct VAR2 *VAR3,
u32 VAR4, int *VAR5)
{
acpi_status VAR6;
union VAR7 *VAR8;
struct acpi_buffer VAR9;
struct acpi_buffer VAR10;

VAR9.VAR11 = (VAR12) sizeof(*VAR3);
VAR9.VAR13 = VAR3;
if (VAR5) {
VAR10.VAR11 = VAR14;
VAR10.VAR13 = NULL;
VAR6 = FUN2(VAR15, 0,
VAR4, &VAR9, &VAR10);
if (FUN3(VAR6)) {
VAR8 = (union VAR7 *)VAR10.VAR13;
if (VAR8 && VAR8->VAR16 == VAR17)
*VAR5 = (VAR18)VAR8->VAR19.VAR20;
}
FUN4(VAR10.VAR13);
} else {
VAR6 = FUN2(VAR15, 0,
VAR4, &VAR9, NULL);
}
return VAR6;
}