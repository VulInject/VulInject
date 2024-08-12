static VAR1
FUN1(VAR2 *VAR3, const VAR4 *VAR5,
VAR6 *VAR7, VAR6 *VAR8, VAR6 *VAR9)
{
kv_status_t		VAR10 = VAR11;
boolean_t		VAR12;
uint64_t		VAR13;
int			VAR14;


switch (VAR5->VAR15) {

case VAR16:
case VAR17:
VAR14 = FUN2(VAR3, &VAR12);
FUN3(VAR14 == 0);
break;

case VAR18:
case VAR19:
case VAR20:
VAR14 = FUN4(VAR3, &VAR13);
FUN3(VAR14 == 0);
break;
default:
break;
}


switch (VAR5->VAR15) {
case VAR16:

VAR10 = FUN5(VAR3, VAR12, VAR5, VAR21,
VAR7, VAR8, VAR9);
break;
case VAR19:

VAR10 = FUN6(VAR3, VAR13, VAR5,
VAR22,
VAR23,
VAR24,
VAR7, VAR8, VAR9);
break;
case VAR18:

VAR10 = FUN6(VAR3, VAR13, VAR5,
VAR25,
VAR26,
VAR27,
VAR7, VAR8, VAR9);
break;
case VAR17:

VAR10 = FUN5(VAR3, VAR12, VAR5, VAR28,
VAR7, VAR8, VAR9);
break;
case VAR20:

VAR10 = FUN6(VAR3, VAR13, VAR5,
VAR29,
VAR30,
VAR31,
VAR7, VAR8, VAR9);
break;
default:

VAR10 = VAR32;
break;
}

return (VAR10);
}