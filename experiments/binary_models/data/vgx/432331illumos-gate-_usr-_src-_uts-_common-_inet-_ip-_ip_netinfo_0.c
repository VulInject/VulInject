static int
FUN1(inject_t VAR1, VAR2 *VAR3, boolean_t VAR4,
VAR5 *VAR6)
{
VAR7 *VAR8 = NULL;
void (* VAR9)(void *);
VAR10 *VAR11;
VAR12 *VAR13;

FUN2(VAR3 != NULL);
FUN2(VAR3->VAR14 != NULL);
FUN2(VAR3->VAR14->VAR15->VAR16 == VAR17);

switch (VAR1) {
case VAR18:
VAR11 = FUN3(sizeof (*VAR11), VAR19);
if (VAR11 == NULL)
return (-1);
VAR11->VAR20 = *VAR3;
VAR11->VAR21 = VAR4;

VAR9 = VAR22;
VAR8 = VAR23;
break;

case VAR24:
VAR11 = FUN3(sizeof (*VAR11), VAR19);
if (VAR11 == NULL)
return (-1);
VAR11->VAR20 = *VAR3;
VAR11->VAR21 = VAR4;

VAR9 = VAR25;
VAR8 = VAR26;
break;

case VAR27: {
struct VAR28 *VAR29;

VAR13 = VAR3->VAR14;

VAR29 = (struct VAR28 *)&VAR3->VAR30;

switch (FUN4(VAR29, VAR13, VAR3->VAR31,
FUN5(
VAR6->VAR32->VAR33))) {
case 0 :
case VAR34:
return (0);
case VAR35 :
case VAR36 :
return (1);
default :
return (1);
}

}
default:
FUN6(VAR3->VAR14);
return (1);
}

FUN2(VAR8 != NULL);

VAR11->VAR37 = VAR6;
if (FUN7(VAR8, VAR9, (void *)VAR11,
VAR38) == VAR39) {
FUN8((""));
FUN6(VAR3->VAR14);
return (1);
}
return (0);
}