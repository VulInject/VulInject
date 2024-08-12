VAR1
FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
acpi_status VAR6,
union VAR7 **VAR8)
{
const struct VAR9 *VAR10;
acpi_status VAR11;

FUN2(VAR12);



VAR10 = FUN3(VAR5);
if (!VAR10) {
FUN4(VAR6);
}

VAR11 = VAR10->FUN5(VAR3, VAR8);
FUN4(VAR11);
}