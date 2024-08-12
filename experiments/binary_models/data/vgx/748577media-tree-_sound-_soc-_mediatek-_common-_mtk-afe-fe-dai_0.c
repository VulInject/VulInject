int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6  = VAR2->VAR7;
struct VAR8 *VAR9 = FUN2(VAR6->VAR10);
struct VAR11 *VAR12 = &VAR9->VAR12[VAR6->VAR13->VAR14];
int VAR15 = 0;


switch (VAR2->VAR16->VAR17) {
case VAR18:
VAR15 = 0;
break;
case VAR19:
VAR15 = 1;
break;
case VAR20:
VAR15 = 1;
break;
default:
FUN3(VAR9->VAR21, "",
VAR22, VAR2->VAR16->VAR17);
break;
}

FUN4(VAR9->VAR23, VAR12->VAR24->VAR25,
1 << VAR12->VAR24->VAR26,
VAR15 << VAR12->VAR24->VAR26);

return 0;
}