static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = &VAR4->VAR9[VAR10];

memset(VAR2, 0, sizeof(*VAR2));

if (!VAR4) {
VAR2->VAR11 = 0;
VAR2->VAR12 = VAR13;
return 0;
}

VAR2->VAR11 = VAR4->VAR11;

if (VAR4->VAR14.VAR15 == VAR16) {
VAR2->VAR12 = VAR13;
return 0;
}

switch (VAR4->VAR14.VAR15) {
case VAR17:
VAR2->VAR12 = VAR18;
break;
case VAR19:
VAR2->VAR12 = VAR20;
break;
case VAR10:
VAR2->VAR12 = VAR21;
break;
case VAR22:
VAR2->VAR12 = VAR23;
break;
case VAR24:
VAR2->VAR12 = VAR25;
break;
case VAR26:
VAR2->VAR12 = VAR27;
break;
case VAR28:
VAR2->VAR12 = VAR29;
break;
case VAR30:
VAR2->VAR12 = VAR31;
break;
default:
FUN2("",
VAR6->VAR32, VAR6->VAR33, VAR4->VAR14.VAR15);
return -1;
}

switch (VAR8->VAR15) {
case VAR16:
VAR2->VAR34 = VAR13;
break;
case VAR35:
VAR2->VAR34 = VAR36;
break;
case VAR10:
VAR2->VAR34 = VAR21;
break;
default:
FUN2("",
VAR6->VAR32, VAR6->VAR33, VAR8->VAR15);
return -1;
}

VAR2->VAR37 = VAR4->VAR14.VAR33;
VAR2->VAR38 = VAR8->VAR33;
VAR2->VAR39 = VAR4->VAR39;

return 0;
}