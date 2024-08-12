int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR1 *VAR5;
bool VAR6, VAR7;
u32 VAR8 = 0;
int VAR9;

FUN2(VAR2);

if (!FUN3(VAR2))
return 0;

VAR9 = FUN4(VAR2, &VAR8, VAR10, VAR11, 1);
if (VAR9)
return VAR9;

VAR5 = FUN5(VAR2);
VAR4 = FUN6(FUN3(VAR2), VAR5);
VAR2->VAR12 = FUN7(VAR4);
FUN8(VAR2, "", VAR2->VAR12 ? "" : "");

VAR7 = VAR8 & VAR13;
VAR6 = !(VAR8 & VAR14);

FUN8(VAR2, "",
VAR6 ? "" : "", VAR7 ? "" : "");

VAR9 = FUN4(VAR2, &VAR8, VAR10, VAR15, 1);
if (VAR9)
return VAR9;

if (FUN9() && VAR2->VAR12 &&
FUN10(VAR5, VAR16)) {
VAR8 |= VAR17;
VAR7 = false;
}


if (FUN11() &&
FUN10(VAR5, VAR18)) {
VAR8 |= VAR19;

if (VAR7)
VAR8 |= VAR20;
}


VAR8 |= VAR21;

VAR8 |= VAR22;

VAR9 = FUN12(VAR2, &VAR8, VAR10, VAR15, 1);
if (VAR9)
return VAR9;

return FUN13(VAR2, VAR11, VAR23,
VAR23, 50);
}