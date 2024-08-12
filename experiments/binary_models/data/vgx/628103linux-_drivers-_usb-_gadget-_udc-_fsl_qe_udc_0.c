static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR7[0];


switch (VAR2->VAR8) {
case VAR9:
FUN2(VAR6, VAR4, 0);

if (FUN3(VAR2, VAR10))
FUN4(VAR2);
break;

case VAR11:
FUN2(VAR6, VAR4, 0);
VAR2->VAR8 = VAR12;
break;

case VAR13:
FUN2(VAR6, VAR4, 0);

if (FUN3(VAR2, VAR14))
FUN4(VAR2);
break;

case VAR15:
FUN2(VAR6, VAR4, 0);
VAR2->VAR8 = VAR12;
break;

case VAR12:
FUN5(VAR2->VAR16, "");
break;

default:
FUN4(VAR2);
break;
}
}