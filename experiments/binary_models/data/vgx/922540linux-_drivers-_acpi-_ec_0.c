static void FUN1(struct VAR1 *VAR2, bool VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
bool VAR7 = false;
u8 VAR8;

FUN2("", VAR3 ? "" : "", FUN3());


if (VAR2->VAR9 >= 0 && FUN4(VAR2))
FUN5(NULL, VAR2->VAR9);

VAR8 = FUN6(VAR2);


if (!VAR5 || !(VAR5->VAR10 & VAR11)) {
if (VAR12 == VAR13 &&
VAR2->VAR14 == VAR15)
FUN7(VAR2);

if (!VAR5)
goto VAR16;
}

if (VAR5->VAR10 & VAR11) {
if (VAR5->VAR17 > VAR5->VAR18) {
if (!(VAR8 & VAR19))
FUN8(VAR2, VAR5->VAR20[VAR5->VAR18++]);
else if (VAR3 && !(VAR8 & VAR21))
FUN9(VAR2, VAR5);
} else if (VAR5->VAR22 > VAR5->VAR23) {
if (VAR8 & VAR24) {
VAR5->VAR25[VAR5->VAR23++] = FUN10(VAR2);
if (VAR5->VAR22 == VAR5->VAR23) {
FUN11(VAR2, VAR26);
VAR7 = true;
if (VAR5->VAR27 == VAR28)
FUN12("",
FUN13(VAR28));
}
} else if (VAR3 && !(VAR8 & VAR21)) {
FUN9(VAR2, VAR5);
}
} else if (VAR5->VAR17 == VAR5->VAR18 && !(VAR8 & VAR19)) {
FUN11(VAR2, VAR26);
VAR7 = true;
}
} else if (!(VAR8 & VAR19)) {
FUN14(VAR2, VAR5->VAR27);
FUN11(VAR2, VAR11);
}

VAR16:
if (VAR8 & VAR21)
FUN15(VAR2);

if (VAR7 && VAR3)
FUN16(&VAR2->VAR29);
}