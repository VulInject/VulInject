static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 =
FUN2(VAR2->VAR5, struct VAR3, VAR6);
struct VAR7 *VAR8 = VAR4->VAR8;
int VAR9 = -VAR10;

switch (VAR2->VAR11) {
case VAR12:
VAR8->VAR13 = VAR2->VAR14;
VAR9 = FUN3(VAR8);
break;
case VAR15:
VAR8->VAR16 = VAR2->VAR14;
VAR9 = FUN3(VAR8);
break;
case VAR17:
VAR9 = FUN4(VAR8, VAR18, VAR2->VAR14);
break;
case VAR19:
VAR9 = FUN4(VAR8, VAR20, VAR2->VAR14);
break;
case VAR21:
VAR9 = FUN4(VAR8, VAR22, VAR2->VAR14);
break;
case VAR23:
VAR9 = FUN4(VAR8, VAR24, VAR2->VAR14);
break;
case VAR25:
VAR9 = FUN4(VAR8, VAR26, VAR2->VAR14);
break;
case VAR27:
VAR9 = FUN4(VAR8, VAR28, VAR2->VAR14);
break;
}

return (VAR9 < 0) ? VAR9 : 0;
}