int FUN1(const char *VAR1,
uint64_t VAR2) {

VAR3 *VAR4 = (VAR3 *)VAR1;
VAR5 *VAR6, *VAR7, *VAR8, *VAR9;
VAR6 =
(VAR5 *)(VAR1 + sizeof(VAR3) +
VAR4->VAR10);
VAR7 = VAR6 + VAR4->VAR11;

if (VAR2 < sizeof(VAR3))
return 1;


if (VAR4->VAR12 != FUN2() ||
VAR4->VAR13 != FUN3() ||
VAR4->VAR11 !=
FUN4(FUN5(),
FUN6()) ||
VAR4->VAR14 != (VAR15)(FUN7() -
FUN8()) ||
VAR4->VAR16 != (VAR15)(FUN9() -
FUN10()) ||
VAR4->VAR17 != VAR18)
return 1;

if (VAR2 < sizeof(VAR3) + VAR4->VAR10 +
VAR4->VAR11 * sizeof(VAR5) +
VAR4->VAR16 + VAR4->VAR14)
return 1;

for (VAR8 = VAR6,
VAR9 = (VAR5 *)FUN5();
VAR8 < VAR7; ++VAR8, ++VAR9) {
if (VAR8->VAR19 != VAR9->VAR19 ||
VAR8->VAR20 != VAR9->VAR20 ||
VAR8->VAR21 != VAR9->VAR21)
return 1;
}


return 0;
}