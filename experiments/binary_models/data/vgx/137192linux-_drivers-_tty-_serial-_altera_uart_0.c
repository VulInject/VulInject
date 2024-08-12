static void FUN1(struct VAR1 *VAR2)
{
unsigned char VAR3, VAR4;
unsigned short VAR5;

while ((VAR5 = FUN2(VAR2, VAR6)) &
VAR7) {
VAR3 = FUN2(VAR2, VAR8);
VAR4 = VAR9;
VAR2->VAR10.VAR11++;

if (VAR5 & VAR12) {
FUN3(VAR2, VAR5,
VAR6);

if (VAR5 & VAR13) {
VAR2->VAR10.VAR14++;
if (FUN4(VAR2))
continue;
} else if (VAR5 & VAR15) {
VAR2->VAR10.VAR16++;
} else if (VAR5 & VAR17) {
VAR2->VAR10.VAR18++;
} else if (VAR5 & VAR19) {
VAR2->VAR10.VAR20++;
}

VAR5 &= VAR2->VAR21;

if (VAR5 & VAR13)
VAR4 = VAR22;
else if (VAR5 & VAR15)
VAR4 = VAR23;
else if (VAR5 & VAR19)
VAR4 = VAR24;
}

if (FUN5(VAR2, VAR3))
continue;
FUN6(VAR2, VAR5, VAR17, VAR3,
VAR4);
}

FUN7(&VAR2->VAR25->VAR2);
}