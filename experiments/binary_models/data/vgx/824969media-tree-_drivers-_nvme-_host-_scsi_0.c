static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
u8 VAR5[16];
int VAR6;
unsigned int VAR7;

if (VAR4->VAR8 == NULL)
return -VAR9;
if (VAR4->VAR10 > sizeof(VAR5))
return -VAR11;
if (FUN2(VAR5, VAR4->VAR8, VAR4->VAR10))
return -VAR12;


VAR6 = FUN3(VAR4, VAR13);
if (VAR6)
return VAR6;

VAR7 = VAR5[0];

switch (VAR7) {
case VAR14:
case VAR15:
case VAR16:
case VAR17:
VAR6 = FUN4(VAR2, VAR4, 0, VAR5);
break;
case VAR18:
case VAR19:
case VAR20:
case VAR21:
VAR6 = FUN4(VAR2, VAR4, 1, VAR5);
break;
case VAR22:
VAR6 = FUN5(VAR2, VAR4, VAR5);
break;
case VAR23:
VAR6 = FUN6(VAR2, VAR4, VAR5);
break;
case VAR24:
case VAR25:
VAR6 = FUN7(VAR2, VAR4, VAR5);
break;
case VAR26:
case VAR27:
VAR6 = FUN8(VAR2, VAR4, VAR5);
break;
case VAR28:
VAR6 = FUN9(VAR2, VAR4, VAR5, 0);
break;
case VAR29:
switch (VAR5[1]) {
case VAR30:
VAR6 = FUN9(VAR2, VAR4, VAR5, 1);
break;
default:
goto VAR31;
}
break;
case VAR32:
VAR6 = FUN10(VAR2, VAR4, VAR5);
break;
case VAR33:
VAR6 = FUN11(VAR2, VAR4, VAR5);
break;
case VAR34:
VAR6 = FUN12(VAR2, VAR4);
break;
case VAR35:
VAR6 = FUN13(VAR2, VAR4, VAR5);
break;
case VAR36:
VAR6 = FUN14(VAR2, VAR4, VAR5);
break;
case VAR37:
VAR6 = FUN15(VAR2, VAR4, VAR5);
break;
case VAR38:
VAR6 = FUN16(VAR2, VAR4, VAR5);
break;
default:
VAR31:
VAR6 = FUN17(VAR4, VAR39,
VAR40, VAR41,
VAR42);
break;
}
return VAR6;
}