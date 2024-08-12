static int
FUN1(uintptr_t VAR1)
{
idm_refcnt_t		VAR2;
VAR3	*VAR4;
int			VAR5;


if (FUN2(&VAR2, sizeof (VAR6), VAR1) !=
sizeof (VAR6)) {
FUN3("");
return (VAR7);
}

VAR4 = &VAR2.VAR8;

VAR5 = VAR4->VAR9 + 1;
VAR4->VAR10--;
VAR4->VAR10 &= VAR4->VAR9;

while (VAR5) {
VAR11	*VAR12;

VAR12 = VAR4->VAR13 + VAR4->VAR10;

if (VAR12->VAR14) {
char VAR15[VAR16];
GElf_Sym VAR17;
int VAR18;

FUN4("", VAR12->VAR19);

for (VAR18 = 0; VAR18 < VAR12->VAR14; VAR18++) {
if (FUN5(VAR12->VAR20[VAR18],
VAR21, VAR15, sizeof (VAR15),
&VAR17) == -1) {
continue;
}
FUN4("", VAR15,
VAR12->VAR20[VAR18] -
(VAR22)VAR17.VAR23);
++VAR18;
break;
}

while (VAR18 < VAR12->VAR14) {
if (FUN5(VAR12->VAR20[VAR18],
VAR21, VAR15, sizeof (VAR15),
&VAR17) == -1) {
++VAR18;
continue;
}
FUN4("", VAR15,
VAR12->VAR20[VAR18] -
(VAR22)VAR17.VAR23);
++VAR18;
}
FUN4("");
}
VAR4->VAR10--;
VAR4->VAR10 &= VAR4->VAR9;
VAR5--;
}

return (VAR24);
}