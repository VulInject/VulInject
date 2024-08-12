void FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR4 = &VAR2->VAR5;
int VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0;

FUN2(&VAR2->VAR10);
if (VAR3 & VAR11)
--VAR2->VAR12;
if (VAR3 & VAR13)
if (--VAR2->VAR14 == 0)
VAR6++;
if (VAR3 & VAR15)
if (--VAR2->VAR16 == 0)
VAR6++;
if (VAR3 & VAR17) {
if (--VAR2->VAR18 == 0) {
VAR6++;
VAR7++;
}
FUN3("",
VAR4, VAR2->VAR18+1, VAR2->VAR18);
}
if (VAR3 & VAR19)
if (--VAR2->VAR20 == 0) {
VAR6++;
if (FUN4(VAR2)) {
struct VAR21 *VAR22 =
FUN5(&VAR2->VAR23,
struct VAR21,
VAR24);
VAR22->VAR25 = 0;
if (FUN6(VAR2, VAR22))
VAR7++;
else if (FUN7(VAR2, VAR22))
VAR8 = 1;
VAR9 = 1;
}
if (VAR2->VAR26 == 0 &&
VAR2->VAR27 == 0 &&
VAR2->VAR28 == 0) {
FUN8(!VAR2->VAR29);
FUN9(VAR2->VAR29);
VAR2->VAR29 = NULL;
}

if (!FUN10(VAR2) && VAR2->VAR30)
FUN11(VAR2);
}
FUN12(&VAR2->VAR10);

FUN3("", VAR4, FUN13(VAR3),
VAR6 ? "" : "", VAR7 ? "" : "");

if (VAR6 && !VAR8)
FUN14(VAR2, 0, NULL);
else if (VAR8)
FUN15(VAR2, NULL);
if (VAR9)
FUN16(&VAR2->VAR31);
while (VAR7-- > 0)
FUN17(VAR4);
}