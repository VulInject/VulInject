static bool
FUN1(struct VAR1 *VAR1, uint16_t VAR2, uint32_t VAR3)
{
struct VAR4	*VAR5 = VAR1->VAR6;
VAR7	*VAR8;

FUN2(VAR2 & 0xf, ==, 0);
FUN2(VAR2, <, VAR9);

switch (VAR2) {
case VAR10:
VAR5->VAR11 = VAR3;
FUN3(VAR1);
break;
case VAR12:
FUN4(VAR1, VAR3 & 0xff);
break;
case VAR13:
FUN5(VAR1);
break;
case VAR14:
VAR5->VAR15 = VAR3;
FUN6(VAR1);
break;
case VAR16:
VAR5->VAR17 = VAR3;
FUN7(VAR1);
break;
case VAR18:
VAR5->VAR19 = VAR3;
FUN8(VAR1);
break;
case VAR20:
VAR5->VAR21 = VAR3;
FUN9(VAR1);
break;
case VAR22:
VAR5->VAR23 = VAR3;
break;
case VAR24:
case VAR25 ... VAR26:
VAR8 = FUN10(VAR1, VAR2);
*VAR8 = VAR3;
FUN11(VAR1, VAR2);
break;
case VAR27:
VAR5->VAR28 = VAR3;
FUN12(VAR1);
break;

case VAR29:
VAR5->VAR30 = VAR3;
FUN13(VAR1);
break;

case VAR31:
FUN14(VAR1);
break;

case VAR32:
if (FUN15(VAR1))
FUN16(VAR1, VAR3);
break;

case VAR33:
case VAR34:
case VAR35:
case VAR36:
case VAR37 ... VAR38:
case VAR39 ... VAR40:
case VAR41 ... VAR42:
case VAR43:

return (false);

default:

return (false);
}

return (true);
}