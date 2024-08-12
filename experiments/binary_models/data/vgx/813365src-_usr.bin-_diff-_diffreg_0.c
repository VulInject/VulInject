int
FUN1(char *VAR1, char *VAR2, int VAR3)
{
VAR4 *VAR5, *VAR6;
int VAR7, VAR8;

VAR5 = VAR6 = NULL;
VAR8 = VAR9;
VAR10 = 0;
VAR11 = 0;
VAR12 = 0;
VAR13 = VAR14 - 1;
if (VAR3 & VAR15)
VAR16 = VAR17;
else
VAR16 = VAR18;
if (FUN2(VAR19.VAR20) != FUN2(VAR21.VAR20))
return (FUN2(VAR19.VAR20) ? VAR22 : VAR23);
if (strcmp(VAR1, "") == 0 && strcmp(VAR2, "") == 0)
goto VAR24;

if (VAR3 & VAR25)
VAR5 = fopen(VAR26, "");
else {
if (!FUN3(VAR19.VAR20)) {
if ((VAR5 = FUN4(VAR1)) == NULL ||
FUN5(FUN6(VAR5), &VAR19) == -1) {
FUN7("", VAR1);
VAR27 |= 2;
goto VAR24;
}
} else if (strcmp(VAR1, "") == 0)
VAR5 = stdin;
else
VAR5 = fopen(VAR1, "");
}
if (VAR5 == NULL) {
FUN7("", VAR1);
VAR27 |= 2;
goto VAR24;
}

if (VAR3 & VAR28)
VAR6 = fopen(VAR26, "");
else {
if (!FUN3(VAR21.VAR20)) {
if ((VAR6 = FUN4(VAR2)) == NULL ||
FUN5(FUN6(VAR6), &VAR21) == -1) {
FUN7("", VAR2);
VAR27 |= 2;
goto VAR24;
}
} else if (strcmp(VAR2, "") == 0)
VAR6 = stdin;
else
VAR6 = fopen(VAR2, "");
}
if (VAR6 == NULL) {
FUN7("", VAR2);
VAR27 |= 2;
goto VAR24;
}

switch (FUN8(VAR5, VAR6, VAR3)) {
case 0:
goto VAR24;
case 1:
break;
default:

VAR27 |= 2;
goto VAR24;
}

if ((VAR3 & VAR29) == 0 &&
(!FUN9(VAR5) || !FUN9(VAR6))) {
VAR8 = VAR30;
VAR27 |= 1;
goto VAR24;
}
FUN10(0, VAR5, VAR19.VAR31, VAR3);
FUN10(1, VAR6, VAR21.VAR31, VAR3);

FUN11();
FUN12(VAR32[0], VAR33[0]);
FUN12(VAR32[1], VAR33[1]);

VAR34 = (int *)VAR35[1];
FUN13(VAR32[0], VAR33[0], VAR32[1], VAR33[1], VAR34);
VAR34 = FUN14(VAR34, VAR33[1] + 2, sizeof(*VAR34));

class = (int *)VAR35[0];
FUN15(VAR32[0], VAR33[0], class);
class = FUN14(class, VAR33[0] + 2, sizeof(*class));

VAR36 = xcalloc(VAR33[0] + 2, sizeof(*VAR36));
VAR37 = 0;
VAR38 = 100;
VAR39 = xcalloc(VAR38, sizeof(*VAR39));
VAR7 = FUN16(class, VAR33[0], VAR34, VAR36, VAR3);
free(VAR34);
free(class);

VAR40 = FUN14(VAR40, VAR41[0] + 2, sizeof(*VAR40));
FUN17(VAR36[VAR7]);
free(VAR39);
free(VAR36);

VAR42 = FUN14(VAR42, VAR41[0] + 2, sizeof(*VAR42));
VAR43 = FUN14(VAR43, VAR41[1] + 2, sizeof(*VAR43));
FUN18(VAR5, VAR6, VAR3);
FUN19(VAR1, VAR5, VAR2, VAR6, VAR3);
VAR24:
if (VAR10) {
VAR27 |= 1;
if (VAR8 == VAR9)
VAR8 = VAR44;
}
if (VAR5 != NULL)
fclose(VAR5);
if (VAR6 != NULL)
fclose(VAR6);

return (VAR8);
}