static void FUN1(struct net2280_regs VAR1 *VAR2,
struct VAR3 *VAR4)
{
u32 VAR5, VAR6;

VAR4->VAR7 = NULL;
FUN2(&VAR4->VAR8);

FUN3(&VAR4->VAR4, ~0);
VAR4->VAR4.VAR9 = &VAR10;


if (VAR4->VAR11) {
FUN4(0, &VAR4->VAR11->VAR12);
FUN4(FUN5(VAR13) |
FUN5(VAR14) |
FUN5(VAR15) |
FUN5(VAR16),

&VAR4->VAR11->VAR6);

VAR6 = FUN6(&VAR4->VAR11->VAR6);
if (VAR6 == 0x5002) {
FUN7(VAR4->VAR17, "",
VAR6);
FUN4(0x5a, &VAR4->VAR11->VAR6);
}

VAR5 = FUN6(&VAR2->VAR18);
VAR5 &= ~FUN5(VAR19[VAR4->VAR20]);
FUN4(VAR5, &VAR2->VAR18);
} else {
if (VAR4->VAR20 < 5) {
VAR5 = FUN6(&VAR2->VAR21);
VAR5 &= ~FUN5((8 + VAR4->VAR20));	
FUN4(VAR5, &VAR2->VAR21);
}
}
FUN4(0, &VAR4->VAR2->VAR22);

FUN4(FUN5(VAR23) |
FUN5(VAR24) |
FUN5(VAR25) |
FUN5(VAR26) |
FUN5(VAR27) |
FUN5(VAR28) |
FUN5(VAR29), &VAR4->VAR2->VAR30);

VAR5 = FUN6(&VAR4->VAR31->VAR32);
if (VAR4->VAR33)
VAR5 &= ~VAR34;
else
VAR5 &= ~VAR35;
FUN4(VAR5, &VAR4->VAR31->VAR32);
}