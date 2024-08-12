static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5)
{
struct VAR6 *VAR7 = VAR4->VAR7;
struct VAR8 *VAR9 = VAR7->VAR10;
int VAR11;

switch (VAR5) {
case VAR12:
case VAR13:
case VAR14:
VAR11 = FUN2(VAR4, VAR2);
if (VAR11)
return VAR11;
FUN3(VAR9->VAR15[VAR16]);
FUN3(VAR9->VAR15[VAR17]);
break;
case VAR18:
case VAR19:
case VAR20:
FUN4(VAR9->VAR15[VAR17]);
FUN4(VAR9->VAR15[VAR16]);
break;
default:
return -VAR21;
}

return 0;
}