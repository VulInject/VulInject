static int
FUN1(uintptr_t VAR1, uint_t VAR2, int argc,
const VAR3 *argv)
{
i40e_t VAR4;
int VAR5;

if (!(VAR2 & VAR6)) {
FUN2("");
return (VAR7);
}

if (FUN3(&VAR4, sizeof (VAR8), VAR1) != sizeof (VAR8)) {
FUN2("", VAR1);
return (VAR9);
}

FUN4("", "", "",
"", "", "");

for (VAR5 = 0; VAR5 < VAR4.VAR10; VAR5++) {
i40e_switch_rsrc_t VAR11;
uintptr_t VAR12 = (VAR13)VAR4.VAR14 +
VAR5 * sizeof (VAR15);
const char *VAR16;

if (FUN3(&VAR11, sizeof (VAR15), VAR12) !=
sizeof (VAR15)) {
FUN2("",
VAR5, VAR12);
return (VAR9);
}

if (VAR11.VAR17 <= VAR18) {
VAR16 = VAR19[VAR11.VAR17];
} else {
char *VAR20;
size_t VAR21 = FUN5(NULL, 0, "",
VAR11.VAR17);
VAR20 = FUN6(VAR21 + 1, VAR22 | VAR23);
(void) FUN5(VAR20, VAR21 + 1, "",
VAR11.VAR17);
VAR16 = VAR20;
}

FUN4("", VAR16,
FUN7(VAR11.VAR24), FUN7(VAR11.VAR25), FUN7(VAR11.VAR26),
FUN7(VAR11.VAR27));
}

return (VAR28);
}