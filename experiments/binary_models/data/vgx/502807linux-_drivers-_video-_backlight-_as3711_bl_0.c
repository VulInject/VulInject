static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR4);
struct VAR7 *VAR7 = VAR6->VAR7;
int VAR8;
int VAR9 = 0;

VAR8 = FUN4(VAR2);

if (VAR4->VAR10 == VAR11) {
VAR9 = FUN5(VAR7, VAR8,
VAR12);
} else {
const struct VAR13 *VAR14 = VAR6->VAR14;

switch (VAR14->VAR15) {
case VAR16:
VAR9 = FUN5(VAR7, VAR8,
VAR17);
break;
case VAR18:
VAR9 = FUN6(VAR4, VAR8 / 4);
if (VAR9 < 0)
return VAR9;
if (VAR8) {
VAR9 = FUN7(VAR6);
if (VAR9 < 0)
return VAR9;
FUN8(500);
VAR9 = FUN6(VAR4, VAR8);
} else {
VAR9 = FUN9(VAR7->VAR19,
VAR17, 1, 0);
}
break;

case VAR20:
VAR9 = FUN10(VAR7->VAR19, VAR21,
VAR8);
break;
case VAR22:
VAR9 = FUN10(VAR7->VAR19, VAR23,
VAR8);
break;
case VAR24:
VAR9 = FUN10(VAR7->VAR19, VAR25,
VAR8);
break;
default:
VAR9 = -VAR26;
}
}
if (!VAR9)
VAR4->VAR8 = VAR8;

return VAR9;
}