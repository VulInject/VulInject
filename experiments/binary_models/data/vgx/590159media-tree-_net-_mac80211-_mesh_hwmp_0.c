void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR5.VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
u8 VAR11, VAR12 = 0;
const VAR13 *VAR14;
u32 VAR15;

FUN2(&VAR4->VAR16);
if (!VAR4->VAR17 ||
FUN3(VAR18, VAR4->VAR19 +
FUN4(VAR2))) {
FUN5(&VAR4->VAR16);
return;
}

VAR8 = FUN6(&VAR4->VAR20.VAR21,
struct VAR7, VAR21);
FUN7(&VAR8->VAR21);
--VAR4->VAR17;
FUN5(&VAR4->VAR16);

FUN8();
VAR10 = FUN9(VAR2, VAR8->VAR22);
if (!VAR10)
goto VAR23;

FUN2(&VAR10->VAR24);
if (VAR10->VAR25 & (VAR26 | VAR27)) {
FUN5(&VAR10->VAR24);
goto VAR23;
}
VAR10->VAR25 &= ~VAR28;
if (VAR8->VAR25 & VAR29) {
if (VAR10->VAR25 & VAR30) {
FUN5(&VAR10->VAR24);
goto VAR23;
} else {
VAR10->VAR25 &= ~VAR31;
VAR10->VAR25 |= VAR30;
VAR10->VAR32 = 0;
VAR10->VAR33 = FUN10(VAR2);
}
} else if (!(VAR10->VAR25 & VAR30) ||
VAR10->VAR25 & VAR31) {
VAR10->VAR25 &= ~VAR30;
FUN5(&VAR10->VAR24);
goto VAR23;
}

VAR4->VAR19 = VAR18;

if (FUN11(VAR18, VAR4->VAR34 +
FUN12(VAR2)) ||
FUN3(VAR18, VAR4->VAR34)) {
++VAR4->VAR35;
VAR2->VAR5.VAR6.VAR34 = VAR18;
}
VAR15 = FUN13(VAR2);
VAR11 = VAR2->VAR5.VAR6.VAR36.VAR37;
if (VAR11 == 0) {
VAR2->VAR5.VAR6.VAR38.VAR39++;
FUN5(&VAR10->VAR24);
goto VAR23;
}

if (VAR8->VAR25 & VAR40)
VAR12 |= VAR41;
else
VAR12 &= ~VAR41;

FUN5(&VAR10->VAR24);
VAR14 = (VAR10->VAR42) ? VAR10->VAR43 : VAR44;
FUN14(VAR45, 0, VAR2->VAR46.VAR47, VAR4->VAR35,
VAR12, VAR10->VAR22, VAR10->VAR35, VAR14, 0,
VAR11, VAR15, 0, VAR4->VAR48++, VAR2);
FUN15(&VAR10->VAR49, VAR18 + VAR10->VAR33);

VAR23:
FUN16();
FUN17(VAR8);
}