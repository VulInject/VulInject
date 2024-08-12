static int FUN1(VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6)
{
int VAR7 = 0;

VAR7 = FUN2(VAR2, VAR4);
if (VAR7 < 0)
return VAR7;

VAR4->VAR8       = VAR2->VAR8;
VAR4->VAR9      = VAR2->VAR9;

switch (VAR2->VAR10) {
case VAR11:
VAR4->VAR12[0] = FUN3(VAR2->VAR8, 128);
break;
case VAR13:
case VAR14:
case VAR15:
VAR4->VAR12[0] = 2 * FUN3(VAR2->VAR8, 128);
break;
case VAR16:
case VAR17:
case VAR18:
case VAR19:
VAR4->VAR12[0] = 4 * FUN3(VAR2->VAR8, 128);
break;
case VAR20:
VAR4->VAR12[0] = 8 * FUN3(VAR2->VAR8, 128);
break;
default:
FUN4(VAR2, VAR21, "");
return FUN5(VAR22);
}

VAR4->VAR23[0]      = FUN6(VAR6);
if (!VAR4->VAR23[0])
return FUN5(VAR24);

VAR4->VAR25[0] = VAR4->VAR23[0]->VAR25;
if (VAR2->VAR10 == VAR11 ||
VAR2->VAR10 == VAR13 ||
VAR2->VAR10 == VAR14) {
VAR4->VAR12[1] = VAR4->VAR12[0];
VAR4->VAR25[1] = VAR4->VAR25[0] +
VAR4->VAR12[0] * FUN3(VAR2->VAR9, 64);
}

VAR7 = FUN7(VAR4);
if (VAR7 < 0)
return VAR7;

return 0;
}