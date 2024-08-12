int
FUN1(dev_t VAR1, int VAR2, intptr_t VAR3, int VAR4, VAR5 *VAR6,
int *VAR7)
{
VAR8	*VAR9;
minor_t		VAR10;
int		VAR11;

if (FUN2(VAR6) != 0) {
return (VAR12);
}

VAR10 = FUN3(VAR1);
if (VAR10 == -1) {
return (VAR13);
}

VAR9 = FUN4(VAR14, VAR10);
if (VAR9 == NULL) {
return (VAR13);
}

VAR11 = 0;

switch (VAR2) {
case VAR15:
VAR11 = FUN5(VAR9, VAR1, VAR3, VAR4);
break;

case VAR16:
VAR11 = FUN6(VAR9, VAR1, VAR3, VAR4);
break;

case VAR17:
VAR11 = FUN7(VAR9, VAR1, VAR3, VAR4);
break;

case VAR18:
VAR11 = FUN8(VAR9, VAR1, VAR3, VAR4);
break;

case VAR19:
VAR11 = FUN9(VAR9, VAR1);
break;

case VAR20:
VAR11 = FUN10(VAR9, VAR1, VAR3, VAR4);
break;

case VAR21:
VAR11 = FUN11(VAR9, VAR3, VAR4);
break;

case VAR22:
VAR11 = FUN12(VAR9, VAR3, VAR4);
break;

case VAR23:
VAR11 = FUN13(VAR9, VAR3, VAR4);
break;

case VAR24:
VAR11 = FUN14(VAR9, VAR3, VAR4);
break;

case VAR25:
VAR11 = FUN15(VAR9, VAR3, VAR4);
break;

default:
VAR11 = VAR26;
break;
}
*VAR7 = VAR11;

return (VAR11);
}