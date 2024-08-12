static bool FUN1(struct VAR1 *VAR2, unsigned long VAR3,
int VAR4, struct VAR1 *VAR5)
{
struct VAR6 *VAR6 = FUN2(VAR5);
enum ttu_flags VAR7 = VAR8 | VAR9;
struct VAR10 *VAR11;
FUN3(VAR12);
bool VAR13;
int VAR14;
bool VAR15 = FUN4(VAR5);


if (FUN5(VAR2) || FUN6(VAR2) || FUN7(VAR2))
return true;
if (!(FUN8(VAR5) || FUN9(VAR2)))
return true;


if (!FUN10(VAR5))
return true;

if (FUN11(VAR2)) {
FUN12("", VAR3);
return false;
}

if (FUN13(VAR2)) {
FUN12("", VAR3);
VAR7 |= VAR16;
}


VAR11 = FUN14(VAR5);
if (!(VAR4 & VAR17) && !FUN15(VAR5) && VAR11 &&
FUN16(VAR11)) {
if (FUN17(VAR5)) {
FUN18(VAR5);
} else {
VAR7 |= VAR16;
FUN19("",
VAR3);
}
}


FUN20(VAR5, &VAR12, VAR4 & VAR18);

if (FUN9(VAR5) && !FUN21(VAR5)) {

VAR11 = FUN22(VAR5);
if (VAR11) {
FUN23(VAR6, VAR7|VAR19);
FUN24(VAR11);
} else
FUN19("", VAR3);
} else {
FUN23(VAR6, VAR7);
}

VAR13 = !FUN10(VAR5);
if (!VAR13)
FUN12("",
VAR3, FUN25(VAR5));


if (VAR15)
FUN26(VAR5);


VAR14 = FUN15(VAR5) || (VAR4 & VAR17) ||
!VAR13;
FUN27(&VAR12, VAR14, !VAR13, VAR3, VAR4);

return VAR13;
}