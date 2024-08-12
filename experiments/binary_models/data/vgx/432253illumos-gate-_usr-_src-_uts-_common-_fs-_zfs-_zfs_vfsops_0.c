int
FUN1(VAR1 *VAR2, zfs_userquota_prop_t VAR3,
VAR4 *VAR5, void *VAR6, VAR4 *VAR7)
{
int VAR8;
zap_cursor_t VAR9;
zap_attribute_t VAR10;
VAR11 *VAR12 = VAR6;
uint64_t VAR13;
int VAR14 = 0;

if (!FUN2(VAR2->VAR15))
return (FUN3(VAR16));

if ((VAR3 == VAR17 || VAR3 == VAR18 ||
VAR3 == VAR19 ||
VAR3 == VAR20) &&
!FUN4(VAR2->VAR15))
return (FUN3(VAR16));

if ((VAR3 == VAR21 || VAR3 == VAR22 ||
VAR3 == VAR23 || VAR3 == VAR24 ||
VAR3 == VAR20 ||
VAR3 == VAR19) &&
!FUN5(VAR2->VAR15))
return (FUN3(VAR16));

VAR13 = FUN6(VAR2, VAR3);
if (VAR13 == VAR25) {
*VAR7 = 0;
return (0);
}

if (VAR3 == VAR21 || VAR3 == VAR22 ||
VAR3 == VAR20)
VAR14 = VAR26;

for (FUN7(&VAR9, VAR2->VAR15, VAR13, *VAR5);
(VAR8 = FUN8(&VAR9, &VAR10)) == 0;
FUN9(&VAR9)) {
if ((VAR27)VAR12 - (VAR27)VAR6 + sizeof (VAR11) >
*VAR7)
break;


if ((VAR14 > 0) != (FUN10(VAR10.VAR28, VAR29,
VAR26) == 0))
continue;

FUN11(VAR2, VAR10.VAR28 + VAR14,
VAR12->VAR30, sizeof (VAR12->VAR30), &VAR12->VAR31);

VAR12->VAR32 = VAR10.VAR33;
VAR12++;
}
if (VAR8 == VAR34)
VAR8 = 0;

FUN12((VAR27)VAR12 - (VAR27)VAR6, <=, *VAR7);
*VAR7 = (VAR27)VAR12 - (VAR27)VAR6;
*VAR5 = FUN13(&VAR9);
FUN14(&VAR9);
return (VAR8);
}