static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR4);
unsigned long VAR9;
unsigned int VAR10;
u8 VAR11, VAR12;
__le16 VAR13;
int VAR14;

VAR10 = VAR2->VAR15.VAR16;

FUN3(&VAR8->VAR17, VAR9);
VAR13 = VAR8->VAR18.VAR13;
VAR11 = VAR8->VAR18.VAR11;
VAR12 = VAR8->VAR18.VAR12;
FUN4(&VAR8->VAR17, VAR9);

VAR11 &= ~VAR19;
switch (VAR10 & VAR20) {
case VAR21:
VAR11 |= VAR22;
break;
case VAR23:
VAR11 |= VAR24;
break;
case VAR25:
VAR11 |= VAR26;
break;
default:
case VAR27:
VAR11 |= VAR28;
break;
}


VAR14 = FUN5(VAR2);
if (VAR14 == 0) {
VAR13 = 0;
} else {
int VAR29;
int VAR30;
VAR14 = FUN6(VAR14, VAR31);

VAR30 = (96000000 + 8 * VAR14) / (16 * VAR14);
VAR29 = 96000000 / (16 * VAR30);
VAR13 = FUN7(VAR30);
FUN8(VAR2, VAR29, VAR29);
}

VAR11 &= ~VAR32;
if ((VAR10 & VAR33) != 0)
VAR11 |= VAR34;
else
VAR11 |= VAR35;

VAR11 &= ~VAR36;
if ((VAR10 & VAR37) != 0) {
if ((VAR10 & VAR38) != 0)
VAR11 |= VAR39;
else
VAR11 |= VAR40;
} else {
VAR11 |= VAR41;
}

VAR12 &= ~VAR42;
if ((VAR10 & VAR43) != 0)
VAR12 |= (VAR44 | VAR45);




FUN3(&VAR8->VAR17, VAR9);
if (VAR13 != VAR8->VAR18.VAR13
|| VAR12 != VAR8->VAR18.VAR12
|| VAR11 != VAR8->VAR18.VAR11) {
VAR8->VAR18.VAR13 = VAR13;
VAR8->VAR18.VAR12 = VAR12;
VAR8->VAR18.VAR11 = VAR11;
}
FUN4(&VAR8->VAR17, VAR9);
}