static int FUN1(struct VAR1 *VAR2, int VAR3,
struct VAR4 *VAR5)
{
int VAR6 = 0;
struct VAR7 *VAR8 = FUN2(VAR5);

if (VAR2->VAR9 != VAR10)
return -VAR11;

switch (VAR3) {
case VAR12:
case VAR13:
case VAR14:

FUN3(VAR8->VAR15, VAR16,
VAR17,
VAR17);

FUN3(VAR8->VAR15, VAR18,
VAR19,
VAR19);
break;
case VAR20:
case VAR21:
case VAR22:

FUN3(VAR8->VAR15, VAR16,
VAR17, 0);

FUN3(VAR8->VAR15, VAR18,
VAR19, 0);
break;
default:
VAR6 = -VAR11;
break;
}
return VAR6;
}