static int
FUN1(uintptr_t VAR1, const void *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
const VAR6 *VAR7 = VAR2;

if (VAR5->VAR8 & VAR9) {
mdb_arg_t	argv;

argv.VAR10 = VAR11;
argv.VAR12.VAR13 = "";

FUN2("", VAR1);
FUN3("", VAR1, 0, 1, &argv);
return (VAR14);
}


if (FUN4(VAR5->VAR15, sizeof (VAR5->VAR15),
(VAR16)VAR7->VAR17) <= 0)
strcpy(VAR5->VAR15, "");

if (FUN4(VAR5->VAR18, sizeof (VAR5->VAR18),
(VAR16)VAR7->VAR19) <= 0)
strcpy(VAR5->VAR18, "");

FUN2("", VAR1);	
FUN2("", VAR5->VAR15);
FUN2("", VAR5->VAR18);

return (VAR14);
}