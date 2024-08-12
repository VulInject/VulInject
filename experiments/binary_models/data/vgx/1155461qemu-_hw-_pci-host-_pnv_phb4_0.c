static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3,
unsigned VAR4)
{
VAR5 *VAR6 = FUN2(VAR1);
bool VAR7;


if ((VAR2 & 0xfffc) == VAR8) {
FUN3(VAR6, VAR2 & 0x3, VAR4, VAR3);
return;
}


if ((VAR2 & 0xf800) == VAR9) {
FUN4(VAR6, VAR2 & 0x7ff, VAR4, VAR3);
return;
}


if (VAR4 != 8 || VAR2 & 0x7) {
FUN5(VAR6, ""VAR10"",
VAR2, VAR4);
return;
}


switch (VAR2) {
case VAR11:
VAR3 &= VAR12;
break;
case VAR13:
VAR3 &= 0xff00000000000000ull;
break;

case VAR14:

VAR3 &= ~(VAR15 | VAR16 | VAR17);
break;
case VAR18:

if (VAR3 & VAR19) {
VAR3 = 0;
} else {
VAR3 &= VAR20;
}
break;

case VAR21:
VAR6->VAR22[VAR23 >> 3] &= VAR3;
return;
case VAR24:
VAR6->VAR22[VAR23 >> 3] |= VAR3;
return;
case VAR25:
VAR6->VAR22[VAR26 >> 3] &= VAR3;
return;
case VAR27:
VAR6->VAR22[VAR26 >> 3] |= VAR3;
return;
case VAR28:
VAR3 = 0;
break;



case VAR29:
case VAR30:
case VAR31:
case VAR32:
case VAR33:
case VAR34:
return;
}


VAR7 = VAR6->VAR22[VAR2 >> 3] != VAR3;


VAR6->VAR22[VAR2 >> 3] = VAR3;


switch (VAR2) {
case VAR35:
if (VAR7) {
FUN6(VAR6);
}
break;
case VAR36:
case VAR13:
if (VAR7) {
FUN7(VAR6);
}
break;


case VAR37:
FUN8(VAR6, VAR3);
break;


case VAR38:
FUN9(VAR6, VAR3);
break;


case VAR39:
case VAR11:
FUN10(VAR6);
break;


case VAR40:
case VAR41:
case VAR42:
case VAR14:
case VAR43:
case VAR44:
case VAR45:
case VAR46:
case VAR23:
case VAR26:
case VAR47:
case VAR48:
case VAR49:
case VAR50:
case VAR51:
case VAR52:
break;


default:
FUN11(VAR53, ""VAR10""VAR10"",
VAR2, VAR3);
}
}