static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2->VAR8);
struct VAR9 *VAR10 = FUN3(VAR7);

switch (VAR5) {
case VAR11:

FUN4(VAR7, VAR12,
VAR13,
VAR10->VAR14.VAR15 <<
VAR16);
FUN5(VAR7->VAR17, "", VAR18);
break;
case VAR19:

FUN4(VAR7, VAR12,
VAR13, 0);
FUN5(VAR7->VAR17, "", VAR18);
break;
}
return 0;
}