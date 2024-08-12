static int FUN1(
struct VAR1 *VAR2,
struct VAR3 *VAR4,
fdisk_sector_t VAR5,
VAR6 *VAR7)
{
struct VAR3 *VAR8 = NULL, *VAR9 = NULL;
struct fdisk_iter VAR10;

FUN2(&VAR10, VAR11);

*VAR7 = 0;
FUN3(VAR12, FUN4(VAR2, "", (VAR13) VAR5));


while (FUN5(VAR2, &VAR10, &VAR8) == 0) {

FUN3(VAR12, FUN4(VAR2, "",
VAR8,
FUN6(VAR8),
(VAR13) FUN7(VAR8),
(VAR13) FUN8(VAR8),
(VAR13) FUN9(VAR8),
FUN10(VAR8) ? "" : "",
FUN11(VAR8)    ? ""    : "",
FUN12(VAR8) ? "" : ""));

if (!FUN13(VAR8) ||
!FUN14(VAR8) ||
(FUN12(VAR8) && VAR8 != VAR4)) {
FUN3(VAR12, FUN4(VAR2, ""));
continue;
}

if (FUN11(VAR8)
&& FUN12(VAR4)
&& VAR8->VAR14 == VAR4->VAR15) {
FUN3(VAR12, FUN4(VAR2, ""));
continue;
}


if (FUN11(VAR4)
&& VAR8->VAR14 != VAR4->VAR14) {
FUN3(VAR12, FUN4(VAR2, ""));
continue;
}

if (!VAR9) {
if (VAR5 >= VAR8->VAR5 &&  VAR5 < VAR8->VAR5 + VAR8->VAR16) {
if (FUN10(VAR8) || VAR8 == VAR4) {
FUN3(VAR12, FUN4(VAR2, ""));
VAR9 = VAR8;
} else {
FUN3(VAR12, FUN4(VAR2, ""));
break;
}


*VAR7 = VAR8->VAR16 - (VAR5 - VAR8->VAR5);
FUN3(VAR12, FUN4(VAR2, "", (VAR13) *VAR7));
}
} else if (!FUN10(VAR8) && VAR8 != VAR4) {
FUN3(VAR12, FUN4(VAR2, ""));
break;
} else {
VAR9 = VAR8;
*VAR7 = VAR8->VAR16 - (VAR5 - VAR8->VAR5);
FUN3(VAR12, FUN4(VAR2, "", (VAR13) *VAR7));
}
}

if (VAR9)
FUN3(VAR17, FUN4(VAR4, "", (VAR13) *VAR7));
else
FUN3(VAR17, FUN4(VAR4, "", (VAR13) VAR5));

return VAR9 ? 0 : -1;
}