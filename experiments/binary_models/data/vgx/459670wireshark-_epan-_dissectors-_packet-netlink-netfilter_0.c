static int
FUN1(VAR1 *VAR2, void *VAR3, struct VAR4 *VAR5, VAR6 *VAR7, int VAR8, int VAR9, int VAR10)
{
enum ws_ipset_attr VAR11 = (enum VAR12) VAR8 & VAR13;
VAR14 *VAR15 = (VAR14 *) VAR3;

switch (VAR11) {
case VAR16:

return 0;

case VAR17:
FUN2(VAR7, VAR18, VAR2, VAR9, VAR10, VAR19);
return 1;

case VAR20:
FUN2(VAR7, VAR21, VAR2, VAR9, VAR10, VAR19);
return 1;

case VAR22:

return 0;

case VAR23:
FUN2(VAR7, VAR24, VAR2, VAR9, VAR10, VAR25);
return 1;

case VAR26:
if (VAR10 == 4) {
FUN2(VAR7, VAR27, VAR2, VAR9, VAR10, VAR25);

return 1;
}
return 0;

case VAR28:

if (VAR8 & VAR29) {
guint16 VAR30 = VAR5->VAR11 & 0xffff;

if (VAR30 == VAR31 ||
VAR30 == VAR32 ||
VAR30 == VAR33)
return FUN3(VAR2, VAR34, VAR35, VAR15, VAR5, VAR7, VAR9, VAR10, VAR36);
else
return FUN3(VAR2, VAR37, VAR38, VAR15, VAR5, VAR7, VAR9, VAR10, VAR39);
}
return 0;

case VAR40:

if (VAR8 & VAR29)
return FUN3(VAR2, VAR41, VAR42, VAR15, VAR5, VAR7, VAR9, VAR10, VAR43);
return 0;

case VAR44:
case VAR45:
case VAR46:

return 0;
}

return 0;
}