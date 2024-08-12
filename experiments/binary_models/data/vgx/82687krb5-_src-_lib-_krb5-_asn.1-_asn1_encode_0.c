static int
FUN1(const struct VAR1 *VAR2, const VAR3 *VAR4)
{
switch (VAR2->VAR5) {
case VAR6: {
const struct VAR7 *VAR8 = VAR2->VAR9;
assert(VAR8->VAR10 != NULL);
return VAR8->FUN2(VAR4);
}
case VAR11:
case VAR12:
case VAR13:
return (VAR4->VAR14 == VAR15 && VAR4->VAR16 == VAR17 &&
VAR4->VAR18 == VAR19);
case VAR20: {
const struct VAR21 *VAR22 = VAR2->VAR9;
return FUN1(VAR22->VAR23, VAR4);
}
case VAR24: {
const struct VAR25 *VAR26 = VAR2->VAR9;
return FUN1(VAR26->VAR23, VAR4);
}
case VAR27: {
const struct VAR28 *VAR29 = VAR2->VAR9;
return FUN1(VAR29->VAR23, VAR4);
}
case VAR30: {
const struct VAR31 *VAR32 = VAR2->VAR9;
switch (VAR32->VAR23->VAR5) {
case VAR33: {
const struct VAR34 *VAR35 = VAR32->VAR23->VAR9;
return (VAR4->VAR14 == VAR15 &&
VAR4->VAR16 == VAR36 &&
VAR4->VAR18 == VAR35->VAR37);
}
case VAR38:
return (VAR4->VAR14 == VAR15 &&
VAR4->VAR16 == VAR17 &&
VAR4->VAR18 == VAR19);
case VAR39:

return 1;
case VAR40:

return 1;
default:
FUN3();
}
}
case VAR41: {
const struct VAR42 *VAR43 = VAR2->VAR9;

if (!VAR43->VAR44 && VAR4->VAR16 != VAR43->VAR16)
return 0;
return (VAR4->VAR14 == VAR43->VAR45 && VAR4->VAR18 == VAR43->VAR37);
}
case VAR46:
return (VAR4->VAR14 == VAR15 && VAR4->VAR16 == VAR36 &&
VAR4->VAR18 == VAR47);
case VAR48:
case VAR49:
case VAR50:
return (VAR4->VAR14 == VAR15 && VAR4->VAR16 == VAR36 &&
VAR4->VAR18 == VAR51);
default:
FUN3();
}
}