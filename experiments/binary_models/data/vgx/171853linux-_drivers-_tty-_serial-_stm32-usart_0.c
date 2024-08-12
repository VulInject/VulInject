static unsigned int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2);
const struct VAR4 *VAR5 = &VAR3->VAR6->VAR5;
unsigned long VAR7;
unsigned int VAR8 = 0;
u32 VAR9;
char VAR10;

while (FUN3(VAR2, &VAR9)) {
VAR9 |= VAR11;
VAR10 = VAR12;


if ((VAR9 & VAR13) && VAR5->VAR14 != VAR15)
FUN4(VAR9 & VAR13,
VAR2->VAR16 + VAR5->VAR14);

VAR7 = FUN5(VAR2);
VAR2->VAR17.VAR18++;
VAR8++;
if (VAR9 & VAR13) {
if (VAR9 & VAR19) {
VAR2->VAR17.VAR20++;
} else if (VAR9 & VAR21) {
VAR2->VAR17.VAR22++;
} else if (VAR9 & VAR23) {

if (!VAR7) {
VAR2->VAR17.VAR24++;
if (FUN6(VAR2))
continue;
} else {
VAR2->VAR17.VAR25++;
}
}

VAR9 &= VAR2->VAR26;

if (VAR9 & VAR21) {
VAR10 = VAR27;
} else if (VAR9 & VAR23) {
if (!VAR7)
VAR10 = VAR28;
else
VAR10 = VAR29;
}
}

if (FUN7(VAR2, VAR7))
continue;
FUN8(VAR2, VAR9, VAR19, VAR7, VAR10);
}

return VAR8;
}