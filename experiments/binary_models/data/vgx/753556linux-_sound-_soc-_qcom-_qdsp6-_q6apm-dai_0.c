static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5)
{
struct VAR6 *VAR7 = VAR4->VAR7;
struct VAR8 *VAR9 = VAR7->VAR10;
int VAR11 = 0;

switch (VAR5) {
case VAR12:
case VAR13:
case VAR14:

if (VAR4->VAR15 == VAR16)
VAR11 = FUN2(VAR9->VAR17, VAR9->VAR18, 0, 0, 0);
break;
case VAR19:

VAR9->VAR20 = VAR21;
break;
case VAR22:
case VAR23:
break;
default:
VAR11 = -VAR24;
break;
}

return VAR11;
}