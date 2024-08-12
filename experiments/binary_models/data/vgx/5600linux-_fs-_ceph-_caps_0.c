static void FUN1(struct VAR1 *VAR2, int VAR3,
enum put_cap_refs_mode VAR4)
{
struct VAR5 *VAR5 = &VAR2->VAR6.VAR5;
int VAR7 = 0, VAR8 = 0, VAR9 = 0, VAR10 = 0;
bool VAR11 = false;

FUN2(&VAR2->VAR12);
if (VAR3 & VAR13)
--VAR2->VAR14;
if (VAR3 & VAR15)
if (--VAR2->VAR16 == 0)
VAR7++;
if (VAR3 & VAR17)
if (--VAR2->VAR18 == 0)
VAR7++;
if (VAR3 & VAR19)
if (--VAR2->VAR20 == 0)
VAR7++;
if (VAR3 & VAR21) {
if (--VAR2->VAR22 == 0) {
VAR7++;

VAR8++;
VAR11 = true;
}
FUN3("",
VAR5, VAR2->VAR22+1, VAR2->VAR22);
}
if (VAR3 & VAR23) {
if (--VAR2->VAR24 == 0) {
VAR7++;
VAR11 = true;
if (VAR2->VAR25 == 0 &&
VAR2->VAR26 == 0 &&
VAR2->VAR27 == 0) {
FUN4(!VAR2->VAR28);
FUN5(VAR2->VAR28);
VAR2->VAR28 = NULL;
}

if (!FUN6(VAR2) && VAR2->VAR29)
FUN7(VAR5, NULL);
}
}
if (VAR11 && FUN8(VAR2)) {
struct VAR30 *VAR31 =
FUN9(&VAR2->VAR32,
struct VAR30,
VAR33);

VAR31->VAR34 = 0;
if (FUN10(VAR2, VAR31))

VAR8++;
else if (FUN11(VAR2, VAR31))
VAR9 = 1;
VAR10 = 1;
}
FUN12(&VAR2->VAR12);

FUN3("", VAR5, FUN13(VAR3),
VAR7 ? "" : "", VAR8 ? "" : "");

switch (VAR4) {
case VAR35:
if (VAR7)
FUN14(VAR2, 0);
else if (VAR9)
FUN15(VAR2, NULL);
break;
case VAR36:
if (VAR7)
FUN16(VAR5);
else if (VAR9)
FUN17(VAR5);
break;
default:
break;
}
if (VAR10)
FUN18(&VAR2->VAR37);
while (VAR8-- > 0)
FUN19(VAR5);
}