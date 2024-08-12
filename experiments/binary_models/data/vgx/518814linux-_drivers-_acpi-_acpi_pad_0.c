static void FUN1(acpi_handle VAR1, u32 VAR2,
void *VAR3)
{
struct VAR4 *VAR5 = VAR3;

switch (VAR2) {
case VAR6:
FUN2(VAR1);
FUN3(VAR5->VAR7.VAR8,
FUN4(&VAR5->VAR9), VAR2, 0);
break;
default:
FUN5("", VAR2);
break;
}
}