static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR6);
unsigned int VAR9 = FUN3(VAR4);
unsigned int VAR10, VAR11, VAR12;
unsigned int VAR13, VAR14, VAR15, VAR16;
uint32_t VAR17;


FUN4(VAR8->VAR18, VAR19, &VAR17);

if (VAR17 & (VAR20 | VAR21))
return 0;


switch (FUN5(VAR4)) {
case VAR22:
VAR10 = 16;
break;
case VAR23:
VAR10 = 24;
break;
case VAR24:
VAR10 = 32;
break;
default:
return -VAR25;
}


if (VAR8->VAR12)
VAR12 = VAR8->VAR12;
else

VAR12 = 2 * VAR10;


switch (VAR8->VAR26 & VAR27) {
case VAR28:
case VAR29:
FUN6(VAR8->VAR30, VAR9 * VAR12);
break;
default:
break;
}


VAR16 = VAR31;

if (VAR10 >= 24)
VAR16 |= VAR32;

VAR16 |= FUN7((VAR10-8)&0xf);

switch (VAR8->VAR26 & VAR33) {
case VAR34:
VAR11 = 1;
break;
default:

FUN8(VAR8->VAR8, "", VAR35);
return -VAR25;
}

VAR13 = VAR11;
VAR14 = VAR12 / 2 + VAR11;

switch (FUN9(VAR4)) {
case 2:
VAR16 = FUN10(VAR16) | FUN11(VAR16);
VAR16 |= FUN10(FUN12(VAR13));
VAR16 |= FUN11(FUN12(VAR14));
break;
default:
return -VAR25;
}


FUN13(VAR8->VAR18, VAR36, VAR16);
FUN13(VAR8->VAR18, VAR37, VAR16);


VAR15 = 0;

if (VAR10 <= 16) {

VAR15 |= VAR38 | VAR39;
}

VAR15 |= FUN14(VAR12 - 1);
VAR15 |= FUN15(VAR12 / 2);


switch (VAR8->VAR26 & VAR27) {
case VAR28:

break;
case VAR40:

VAR15 |= VAR41;
break;
case VAR29:

VAR15 |= VAR42;
break;
case VAR43:

VAR15 |= VAR41;
VAR15 |= VAR42;
break;
default:
FUN8(VAR8->VAR8, "", VAR35);
return -VAR25;
}


switch (VAR8->VAR26 & VAR44) {
case VAR45:

VAR15 |= VAR46;
VAR15 |= VAR47;
break;
case VAR48:

break;
case VAR49:

VAR15 |= VAR46;
break;
case VAR50:

VAR15 |= VAR47;
break;
default:
return -VAR25;
}

FUN13(VAR8->VAR18, VAR51, VAR15);


FUN16(VAR8->VAR18, VAR19,
FUN17(1)
| FUN18(1)
| VAR52, 0xffffffff);

FUN16(VAR8->VAR18, VAR53,
FUN19(0x10)
| FUN20(0x30)
| FUN21(0x30)
| FUN22(0x20), 0xffffffff);


FUN23(VAR8, true, true);

return 0;
}