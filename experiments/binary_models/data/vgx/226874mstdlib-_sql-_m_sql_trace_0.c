char *FUN1(const VAR1 *VAR2)
{
VAR3    *VAR4   = FUN2();
const char *VAR5 = NULL;
char       *VAR6   = NULL;
size_t      VAR7;
size_t      VAR8;
size_t      VAR9   = 0;
size_t      VAR10   = 0;

if (VAR2 == NULL || VAR2->VAR11 == NULL)
goto VAR12;

VAR5 = FUN3(VAR2->VAR11);
VAR8   = FUN4(VAR5);

for (VAR7=0; VAR7<VAR8; VAR7++) {
VAR13 *VAR14 = NULL;

if (VAR5[VAR7] != '') {
FUN5(VAR4, (VAR15)VAR5[VAR7]);
continue;
}

if (VAR10 < VAR2->VAR11->VAR16) {
VAR14 = &VAR2->VAR11->VAR17[VAR10].VAR18[VAR9++];
}


if (VAR10 < VAR2->VAR11->VAR16 && VAR9 >= VAR2->VAR11->VAR17[VAR10].VAR19) {
VAR10++;
VAR9=0;
}

if (VAR14 == NULL) {
FUN6(VAR4, "");
continue;
}

if (VAR14->VAR20) {
FUN6(VAR4, "");
continue;
}

switch (VAR14->VAR21) {
case VAR22:
FUN6(VAR4, VAR14->VAR23.VAR24?"":"");
break;
case VAR25:
FUN7(VAR4, VAR14->VAR23.VAR26);
break;
case VAR27:
FUN7(VAR4, VAR14->VAR23.VAR28);
break;
case VAR29:
FUN7(VAR4, VAR14->VAR23.VAR30);
break;
case VAR31:
FUN5(VAR4, ''');
FUN6(VAR4, VAR14->VAR23.VAR32.VAR2);
FUN5(VAR4, ''');
break;
case VAR33:
FUN8(VAR4, "", VAR14->VAR23.VAR34.VAR8);
break;
default:
FUN6(VAR4, "");
break;
}
}

VAR6 = FUN9(VAR4, NULL);
VAR4 = NULL;

VAR12:
FUN10(VAR4);
return VAR6;
}