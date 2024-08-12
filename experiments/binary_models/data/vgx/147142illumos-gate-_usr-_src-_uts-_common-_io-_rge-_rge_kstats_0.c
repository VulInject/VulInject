int
FUN1(void *VAR1, uint_t VAR2, VAR3 *VAR4)
{
VAR5 *VAR6 = VAR1;
VAR7 *VAR8;

FUN2(VAR6->VAR9);
FUN3(VAR6);
FUN4(VAR6->VAR9);
VAR8 = VAR6->VAR10;

switch (VAR2) {
case VAR11:
*VAR4 = VAR6->VAR12 * 1000000ull;
break;

case VAR13:
*VAR4 = FUN5(VAR8->VAR14);
break;

case VAR15:
*VAR4 = FUN6(VAR8->VAR16);
break;

case VAR17:
*VAR4 = FUN7(VAR8->VAR18);
break;

case VAR19:
*VAR4 = FUN5(VAR8->VAR20);
break;

case VAR21:
*VAR4 = FUN6(VAR8->VAR22);
break;

case VAR23:
*VAR4 = FUN5(VAR8->VAR24 + VAR8->VAR25);
break;

case VAR26:
*VAR4 = VAR6->VAR27.VAR28;
break;

case VAR29:
*VAR4 = FUN6(VAR8->VAR30);
break;

case VAR31:
*VAR4 = VAR6->VAR27.VAR32;
break;

case VAR33:
*VAR4 = FUN6(VAR8->VAR34);
break;

case VAR35:
*VAR4 = FUN7(VAR8->VAR36);
break;

case VAR37:
*VAR4 = FUN5(VAR8->VAR24);
break;

case VAR38:
*VAR4 = FUN5(VAR8->VAR25);
break;

case VAR39:
*VAR4 = VAR6->VAR27.VAR40;
break;

case VAR41:
*VAR4 = VAR6->VAR42;
break;

case VAR43:
FUN2(VAR6->VAR9);
*VAR4 = FUN8(VAR6, VAR44);
*VAR4 <<= 16;
*VAR4 |= FUN8(VAR6, VAR45);
FUN4(VAR6->VAR9);
break;

case VAR46:
*VAR4 = VAR47;
break;

case VAR48:
*VAR4 = 1;
break;

case VAR49:
*VAR4 = 0;
break;

case VAR50:
*VAR4 = 1;
break;

case VAR51:
*VAR4 = 1;
break;

case VAR52:
*VAR4 = 1;
break;

case VAR53:
*VAR4 = 1;
break;

case VAR54:
*VAR4 = 1;
break;

case VAR55:
*VAR4 = 1;
break;

case VAR56:
*VAR4 = 1;
break;

case VAR57:
*VAR4 = VAR6->VAR58;
break;

case VAR59:
*VAR4 = VAR6->VAR60;
break;

case VAR61:
*VAR4 = VAR6->VAR62;
break;

case VAR63:
*VAR4 = VAR6->VAR64;
break;

case VAR65:
*VAR4 = VAR6->VAR66;
break;

case VAR67:
*VAR4 = VAR6->VAR68;
break;

case VAR69:
*VAR4 = VAR6->VAR70;
break;

case VAR71:
*VAR4 = VAR6->VAR72;
break;

case VAR73:
*VAR4 = VAR6->VAR74;
break;

case VAR75:
*VAR4 = VAR6->VAR76;
break;

default:
return (VAR77);
}

return (0);
}