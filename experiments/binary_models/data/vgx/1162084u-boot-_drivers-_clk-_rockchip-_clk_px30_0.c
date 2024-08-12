static VAR1 FUN1(struct VAR2 *VAR2, ulong VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2->VAR6);
ulong VAR7 = 0;

if (!VAR5->VAR8 && VAR2->VAR9 > VAR10) {
FUN3("", VAR11, VAR5->VAR8);
return -VAR12;
}

FUN4("", VAR11, VAR2->VAR9, VAR3);
switch (VAR2->VAR9) {
case VAR13:
VAR7 = FUN5(VAR5, VAR14, VAR3);
break;
case VAR15:
VAR7 = FUN5(VAR5, VAR16, VAR3);
break;
case VAR10:
VAR7 = FUN6(VAR5, VAR3);
break;
case VAR17:
case VAR18:
case VAR19:
case VAR20:
VAR7 = FUN7(VAR5, VAR2->VAR9, VAR3);
break;
case VAR21:
VAR7 = FUN8(VAR5, VAR2->VAR9, VAR3);
break;
case VAR22:
case VAR23:
case VAR24:
case VAR25:
VAR7 = FUN9(VAR5, VAR2->VAR9, VAR3);
break;
case VAR26:
VAR7 = FUN10(VAR5, VAR2->VAR9, VAR3);
break;
case VAR27:
VAR7 = FUN11(VAR5, VAR3);
break;
case VAR28:
case VAR29:
VAR7 = FUN12(VAR5, VAR2->VAR9, VAR3);
break;
case VAR30:
VAR7 = FUN13(VAR5, VAR3);
break;
case VAR31:
VAR7 = FUN14(VAR5, VAR3);
break;
case VAR32:
case VAR33:
VAR7 = FUN15(VAR5, VAR2->VAR9, VAR3);
break;
case VAR34:
case VAR35:
case VAR36:
case VAR37:
VAR7 = FUN16(VAR5, VAR2->VAR9, VAR3);
break;
case VAR38:
case VAR39:
case VAR40:
VAR7 = FUN17(VAR5, VAR2->VAR9, VAR3);
break;
case VAR41:
case VAR42:
VAR7 = FUN18(VAR5, VAR2->VAR9, VAR3);
break;
case VAR43:
case VAR44:
VAR7 = FUN19(VAR5, VAR2->VAR9, VAR3);
break;
case VAR45:
VAR7 = FUN20(VAR5, VAR2->VAR9, VAR3);
break;
case VAR46:
case VAR47:
VAR7 = FUN21(VAR5, VAR3);
break;
case VAR48:
VAR7 = FUN22(VAR5, VAR3);
break;
default:
return -VAR12;
}

return VAR7;
}