static void FUN1(acpi_handle VAR1, u32 VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
struct VAR6 *VAR7 = FUN2(&VAR5->VAR8);

switch (VAR2) {
case VAR9:
FUN3(VAR7->VAR10, VAR11, 0);
FUN4(VAR7->VAR10);
break;
case VAR12:
FUN3(VAR7->VAR10, VAR11, 1);
FUN4(VAR7->VAR10);
break;
default:
FUN5(&VAR5->VAR8, "", VAR2);
}
}