static int
FUN1(void *VAR1, uint_t VAR2, VAR3 *VAR4)
{
VAR5 *VAR6 = VAR1;
VAR7 *VAR8 = (VAR7 *)VAR6;
struct VAR9 *VAR10 = VAR8->VAR11;
struct VAR12 *VAR13 = &VAR10->VAR14;

FUN2(VAR6);
switch (VAR2) {
case VAR15:
*VAR4 = (VAR13->VAR16[VAR10->VAR17] & VAR18) / 2 *
1000000ull;
break;
case VAR19:
*VAR4 = VAR6->VAR20.VAR21 +
VAR6->VAR20.VAR22;
break;
case VAR23:
*VAR4 = VAR6->VAR20.VAR24;
break;
case VAR25:
*VAR4 = VAR8->VAR26.VAR27;
break;
case VAR28:
*VAR4 = VAR8->VAR26.VAR29;
break;
case VAR30:
*VAR4 = VAR8->VAR26.VAR31;
break;
case VAR32:
*VAR4 = VAR8->VAR26.VAR33;
break;
case VAR34:
case VAR35:
*VAR4 = VAR6->VAR20.VAR36 +
VAR6->VAR20.VAR37 +
VAR6->VAR20.VAR38;
break;
case VAR39:
*VAR4 = VAR6->VAR20.VAR37;
break;
case VAR40:
*VAR4 = VAR6->VAR20.VAR41;
break;
case VAR42:
*VAR4 = VAR6->VAR20.VAR43;
break;
case VAR44:
case VAR45:
case VAR46:
case VAR47:
case VAR48:
case VAR49:
case VAR50:
case VAR51:
FUN3(VAR6);
return (FUN4(VAR8, VAR2, VAR4));
default:
FUN3(VAR6);
return (VAR52);
}
FUN3(VAR6);

return (0);
}