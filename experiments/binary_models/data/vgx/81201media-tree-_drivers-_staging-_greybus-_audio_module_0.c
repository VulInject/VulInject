static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 =
FUN2(VAR4->VAR7);
struct VAR8 *VAR9 = VAR2->VAR10->VAR9;
struct VAR11 *VAR12;
struct VAR13 *VAR14;
struct VAR15 *VAR16;
int VAR17;

switch (VAR9->VAR18) {
case VAR19:
VAR12 = VAR2->VAR10->VAR20;
VAR17 = FUN3(VAR6, VAR12);
break;

case VAR21:
VAR14 = VAR2->VAR10->VAR20;
VAR17 = FUN4(VAR6, VAR14);
break;

case VAR22:
VAR16 = VAR2->VAR10->VAR20;
VAR17 = FUN5(VAR6, VAR16);
break;

default:
FUN6(&VAR4->VAR7->VAR23,
"");
return -VAR24;
}

return VAR17;
}