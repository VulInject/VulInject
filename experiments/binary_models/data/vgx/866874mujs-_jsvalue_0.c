double FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
switch (VAR4->VAR5.VAR6) {
default:
case VAR7: return FUN2(VAR2, VAR4->VAR8.VAR9);
case VAR10: return VAR11;
case VAR12: return 0;
case VAR13: return VAR4->VAR8.VAR14;
case VAR15: return VAR4->VAR8.VAR16;
case VAR17: return FUN2(VAR2, VAR4->VAR8.VAR18);
case VAR19: return FUN2(VAR2, VAR4->VAR8.VAR20->VAR21);
case VAR22:
FUN3(VAR2, VAR4, VAR23);
return FUN1(VAR2, VAR4);
}
}