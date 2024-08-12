int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6, char *VAR7)
{
struct VAR8 *VAR9 = VAR2->VAR10;
struct VAR11 *VAR12 = (struct VAR11 *)VAR7;
struct VAR13 *VAR14;
int VAR15;

if (!VAR9)
return -VAR16;

VAR14 = FUN2(VAR9->VAR17);

if (VAR9->VAR18 != VAR19)
return -VAR20;

if (VAR12->VAR21.VAR22 != VAR23)
return -VAR20;

FUN3(VAR9);
switch (VAR12->VAR24) {
case VAR25:
case VAR26:
VAR15 = FUN4(VAR14, VAR2, VAR12->VAR27, true);
break;
default:
VAR15 = -VAR16;
break;
}
FUN5(VAR9);

return VAR15;
}