static void FUN1(struct VAR1 *VAR2, u16 VAR3)
{
unsigned long VAR4;
u32 VAR5;
u32 VAR6;
u32 VAR7;

FUN2(VAR2->VAR8, "", VAR9);

FUN3(&VAR2->VAR10, VAR4);

if (VAR3 == VAR2->VAR11 && FUN4(VAR2)) {
VAR7 = FUN5(VAR2->VAR12 + VAR13);
VAR7 |= VAR14;
FUN6(VAR7, VAR2->VAR12 + VAR13);
VAR2->VAR15 = VAR16;
}

VAR5 = FUN7(VAR2);
VAR5 |= VAR17;
FUN6(VAR5, VAR2->VAR12 + VAR18);

VAR2->VAR19 = true;


if (!VAR2->VAR20.VAR21) {

VAR6 = FUN5(VAR2->VAR12 + VAR22);
VAR6 |= VAR23;
FUN6(VAR6, VAR2->VAR12 + VAR22);
FUN8(10);
}


if (FUN4(VAR2)) {
VAR6 = FUN5(VAR2->VAR12 + VAR22);
VAR6 &= ~VAR23;
FUN6(VAR6, VAR2->VAR12 + VAR22);

FUN9(&VAR2->VAR10, VAR4);

FUN10(200);
} else {
FUN9(&VAR2->VAR10, VAR4);
}
}