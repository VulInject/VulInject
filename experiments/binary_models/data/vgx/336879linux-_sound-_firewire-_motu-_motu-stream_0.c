static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
struct VAR8 *VAR9;
unsigned int VAR10 = 0;
int VAR11;

if (VAR5 == &VAR2->VAR12) {
VAR7 = &VAR2->VAR13;
VAR9 = &VAR2->VAR14;

if ((VAR2->VAR15->VAR16 & VAR17) ||
(VAR2->VAR15->VAR16 & VAR18))
VAR10 = 1;
} else {
VAR7 = &VAR2->VAR19;
VAR9 = &VAR2->VAR20;

if ((VAR2->VAR15->VAR16 & VAR21) ||
(VAR2->VAR15->VAR16 & VAR22))
VAR10 = 1;
}

VAR11 = FUN2(VAR5, VAR3, VAR10,
VAR9);
if (VAR11 < 0)
return VAR11;

return FUN3(VAR7,
FUN4(VAR5),
FUN5(VAR2->VAR23)->VAR24);
}