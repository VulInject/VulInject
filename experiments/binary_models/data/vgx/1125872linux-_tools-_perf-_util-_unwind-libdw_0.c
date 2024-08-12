static int FUN1(struct VAR1 *VAR2, Dwarf_Addr VAR3,
VAR4 *VAR5)
{
struct addr_location VAR6;
ssize_t VAR7;

if (!FUN2(VAR2->VAR8, VAR9, VAR3, &VAR6)) {
FUN3("", (unsigned long)VAR3);
return -1;
}

if (!VAR6.VAR10->VAR11)
return -1;

VAR7 = FUN4(VAR6.VAR10->VAR11, VAR6.VAR10, VAR2->VAR12,
VAR3, (VAR13 *) VAR5, sizeof(*VAR5));

return !(VAR7 == sizeof(*VAR5));
}