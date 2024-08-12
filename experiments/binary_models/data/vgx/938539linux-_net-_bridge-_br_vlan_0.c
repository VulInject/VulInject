static bool FUN1(const struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6, VAR7 *VAR8,
VAR9 *VAR10,
struct VAR11 **VAR12)
{
struct VAR13 *VAR14;
struct VAR11 *VAR15;
bool VAR16;

FUN2(VAR6)->VAR17 = true;

if (FUN3(!FUN4(VAR6) &&
VAR6->VAR18 == VAR2->VAR19)) {
VAR6 = FUN5(VAR6);
if (FUN3(!VAR6))
return false;
}

if (!FUN6(VAR6, VAR8)) {

if (VAR6->VAR19 != VAR2->VAR19) {

FUN7(VAR6, VAR20);
VAR6 = FUN8(VAR6, VAR6->VAR19,
FUN9(VAR6));
if (FUN3(!VAR6))
return false;

FUN10(VAR6, VAR20);
FUN11(VAR6);
*VAR8 = 0;
VAR16 = false;
} else {
VAR16 = true;
}
} else {

VAR16 = false;
}

if (!*VAR8) {
u16 VAR21 = FUN12(VAR4);


if (!VAR21)
goto VAR22;


*VAR8 = VAR21;
if (FUN13(!VAR16))

FUN14(VAR6, VAR2->VAR19, VAR21);
else

VAR6->VAR23 |= VAR21;


if (!FUN15(VAR2, VAR24) &&
!FUN15(VAR2, VAR25)) {
if (*VAR10 == VAR26) {
*VAR10 = FUN16(VAR4);
if (!FUN17(*VAR10, true))
goto VAR22;
}
return true;
}
}
VAR15 = FUN18(VAR4, *VAR8);
if (!VAR15 || !FUN19(VAR15))
goto VAR22;

if (*VAR10 == VAR26) {
*VAR10 = FUN20(VAR15);
if (!FUN17(*VAR10, true))
goto VAR22;
}

if (FUN15(VAR2, VAR25)) {
VAR14 = FUN21(VAR15->VAR14);
FUN22(&VAR14->VAR27);
FUN23(&VAR14->VAR28, VAR6->VAR29);
FUN24(&VAR14->VAR30);
FUN25(&VAR14->VAR27);
}

*VAR12 = VAR15;

return true;

VAR22:
FUN26(VAR6);
return false;
}