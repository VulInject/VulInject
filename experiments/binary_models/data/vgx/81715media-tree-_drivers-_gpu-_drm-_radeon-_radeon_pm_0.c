static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR2->VAR4.VAR5 = VAR6;
VAR2->VAR4.VAR7 = VAR8;
VAR2->VAR4.VAR9 = VAR10;
VAR2->VAR4.VAR11 = true;
VAR2->VAR4.VAR12 = true;
VAR2->VAR4.VAR13 = VAR2->VAR14.VAR13;
VAR2->VAR4.VAR15 = VAR2->VAR14.VAR15;
VAR2->VAR4.VAR16 = VAR2->VAR14.VAR13;
VAR2->VAR4.VAR17 = VAR2->VAR14.VAR15;
VAR2->VAR4.VAR18 = VAR19;

if (VAR2->VAR20) {
if (VAR2->VAR21)
FUN2(VAR2);
else
FUN3(VAR2);
FUN4(VAR2);
FUN5(VAR2);

if ((VAR2->VAR22 >= VAR23) &&
(VAR2->VAR22 <= VAR24) &&
VAR2->VAR25) {
if (VAR2->VAR4.VAR26)
FUN6(VAR2, VAR2->VAR4.VAR26,
VAR27);
if (VAR2->VAR4.VAR28)
FUN6(VAR2, VAR2->VAR4.VAR28,
VAR29);
if (VAR2->VAR4.VAR13)
FUN7(VAR2, VAR2->VAR4.VAR13);
if (VAR2->VAR4.VAR15)
FUN8(VAR2, VAR2->VAR4.VAR15);
}
}


VAR3 = FUN9(VAR2);
if (VAR3)
return VAR3;

FUN10(&VAR2->VAR4.VAR30, VAR31);

if (VAR2->VAR4.VAR32 > 1) {
if (FUN11(VAR2)) {
FUN12("");
}

FUN13("");
}

return 0;
}