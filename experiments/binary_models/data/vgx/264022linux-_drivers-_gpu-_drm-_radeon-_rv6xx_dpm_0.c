static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5,
union VAR6 *VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR4);
u32 VAR10, VAR11;
u16 VAR12;
struct VAR13 *VAR14;

switch (VAR5) {
case 0:
VAR14 = &VAR9->VAR15;
break;
case 1:
VAR14 = &VAR9->VAR16;
break;
case 2:
default:
VAR14 = &VAR9->VAR17;
break;
}

VAR10 = FUN3(VAR7->VAR18.VAR19);
VAR10 |= VAR7->VAR18.VAR20 << 16;
VAR11 = FUN3(VAR7->VAR18.VAR21);
VAR11 |= VAR7->VAR18.VAR22 << 16;

VAR14->VAR11 = VAR11;
VAR14->VAR10 = VAR10;
VAR14->VAR12 = FUN3(VAR7->VAR18.VAR23);
VAR14->VAR24 = FUN4(VAR7->VAR18.VAR25);


if (VAR14->VAR12 == 0xff01) {
if (FUN5(VAR2, 0, 0, &VAR12) == 0)
VAR14->VAR12 = VAR12;
}


if (VAR14->VAR24 & VAR26) {
if ((VAR2->VAR27 == VAR28) || (VAR2->VAR27 == VAR29)) {
if (VAR14->VAR12 < 1100)
VAR14->VAR24 &= ~VAR26;
}
}


if (VAR4->class & VAR30) {
u16 VAR12, VAR31, VAR32;
FUN6(VAR2, &VAR12, &VAR31, &VAR32);
VAR14->VAR11 = VAR2->VAR33.VAR34;
VAR14->VAR10 = VAR2->VAR33.VAR35;
VAR14->VAR12 = VAR12;
}
}