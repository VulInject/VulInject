int
FUN1(uintptr_t VAR1, uint_t VAR2, int argc, const VAR3 *argv)
{
dtrace_difo_t VAR4, *VAR5 = &VAR4;
uintptr_t VAR6, VAR7;
VAR8 *VAR9;
size_t VAR10;
ulong_t VAR11;
char VAR12[64];
char *VAR13;

if (!(VAR2 & VAR14))
return (VAR15);

if (FUN2(VAR5, sizeof (VAR16), VAR1) == -1) {
FUN3("", VAR1);
return (VAR17);
}

FUN4("",
VAR1, VAR5->VAR18);
FUN4("", "", "", "");

FUN5((VAR19)(VAR20)VAR5->VAR21);
VAR7 = (VAR20)VAR5->VAR21 + VAR5->VAR22 * sizeof (VAR23);

while ((VAR6 = FUN6()) < VAR7)
FUN7(VAR6, VAR5);

if (VAR5->VAR24 != 0) {
FUN4("",
"", "", "", "", "", "");
}

VAR10 = sizeof (VAR8) * VAR5->VAR24;
VAR9 = FUN8(VAR10, VAR25 | VAR26);

if (FUN2(VAR9, VAR10, (VAR20)VAR5->VAR27) == -1) {
FUN3("");
return (VAR17);
}

VAR13 = FUN8(VAR5->VAR28, VAR25 | VAR26);

if (FUN2(VAR13, VAR5->VAR28, (VAR20)VAR5->VAR29) == -1) {
FUN3("");
return (VAR17);
}

for (VAR11 = 0; VAR11 < VAR5->VAR24; VAR11++) {
VAR8 *VAR30 = &VAR9[VAR11];
char VAR31[4], VAR32[4], VAR2[16] = { 0 };

switch (VAR30->VAR33) {
case VAR34:
(void) strcpy(VAR31, "");
break;
case VAR35:
(void) strcpy(VAR31, "");
break;
default:
(void) FUN9(VAR31, sizeof (VAR31),
"", VAR30->VAR33);
}

switch (VAR30->VAR36) {
case VAR37:
(void) strcpy(VAR32, "");
break;
case VAR38:
(void) strcpy(VAR32, "");
break;
case VAR39:
(void) strcpy(VAR32, "");
break;
default:
(void) FUN9(VAR32, sizeof (VAR32),
"", VAR30->VAR36);
}

if (VAR30->VAR40 & ~(VAR41 | VAR42)) {
(void) FUN9(VAR2, sizeof (VAR2), "",
VAR30->VAR40 & ~(VAR41 | VAR42));
}

if (VAR30->VAR40 & VAR41)
(void) strcat(VAR2, "");
if (VAR30->VAR40 & VAR42)
(void) strcat(VAR2, "");

FUN4("",
&VAR13[VAR30->VAR43],
VAR30->VAR44, VAR31, VAR32, VAR2 + 1,
FUN10(&VAR30->VAR45, VAR12, sizeof (VAR12)));
}

FUN4("",
FUN10(&VAR5->VAR46, VAR12, sizeof (VAR12)));

return (VAR47);
}