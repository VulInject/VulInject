static int FUN1(struct VAR1 *VAR2,
unsigned VAR3,
unsigned long *VAR4,
unsigned VAR5)
{
const struct VAR6 *VAR7;
struct VAR8 *VAR9 = FUN2(VAR2);
unsigned long VAR10;
unsigned VAR11;
unsigned VAR12;
unsigned VAR13;
unsigned VAR14;
int VAR15;
u32 VAR16;
int VAR17;

VAR7 = &VAR9->VAR18->VAR19[VAR3];

for (VAR17 = 0; VAR17 < VAR5; VAR17++) {
VAR11 = FUN3(VAR4[VAR17]);
VAR13 = FUN4(VAR4[VAR17]);

VAR15 = FUN5(VAR9, VAR7, VAR11, &VAR12, &VAR14);
if (VAR15 < 0)
return VAR15;


switch (VAR11) {
case VAR20:
VAR13 = VAR21;
break;
case VAR22:
VAR13 = VAR23;
break;
case VAR24:
if (VAR9->VAR18->VAR25)
return -VAR26;

VAR13 = VAR27;
break;
case VAR28:
if (VAR9->VAR18->VAR25)
VAR13 = VAR29;
else if (VAR7->VAR30 && VAR13 == VAR31)
VAR13 = FUN6(VAR7->VAR30) | VAR32;
else
VAR13 = VAR32;
break;
case VAR33:
VAR13 = 1;
break;
case VAR34:

if (VAR13 > 16 || VAR13 < 2 || (VAR13 % 2) != 0)
VAR13 = -1;
else
VAR13 = (VAR13 / 2) - 1;
break;
case VAR35:

FUN7(&VAR9->VAR36, VAR10);
VAR16 = FUN8(VAR9, VAR7);
if (VAR13)
VAR16 |= FUN6(VAR7->VAR37);
else
VAR16 &= ~FUN6(VAR7->VAR37);
FUN9(VAR16, VAR9, VAR7);
FUN10(&VAR9->VAR36, VAR10);


VAR13 = 1;
break;
case VAR38:

VAR13 = 0;
break;
default:
FUN11(VAR9->VAR39, "",
VAR11);
return -VAR40;
}


if (VAR13 & ~VAR12) {
FUN11(VAR9->VAR39, "", VAR11, VAR13);
return -VAR40;
}

FUN7(&VAR9->VAR36, VAR10);
VAR16 = FUN12(VAR9, VAR7);
VAR16 &= ~(VAR12 << VAR14);
VAR16 |= VAR13 << VAR14;
FUN13(VAR16, VAR9, VAR7);
FUN10(&VAR9->VAR36, VAR10);
}

return 0;
}