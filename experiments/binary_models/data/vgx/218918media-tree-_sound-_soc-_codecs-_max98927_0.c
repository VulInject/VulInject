static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;
struct VAR6 *VAR7 = FUN2(VAR5);
unsigned int VAR8 = 0;
unsigned int VAR9 = 0;
unsigned int VAR10 = 0;

FUN3(VAR5->VAR11, "", VAR12, VAR3);

switch (VAR3 & VAR13) {
case VAR14:
VAR8 = VAR15;
break;
case VAR16:
VAR7->VAR17 = true;
VAR8 = VAR18;
break;
default:
FUN4(VAR5->VAR11, "");
return -VAR19;
}

FUN5(VAR7->VAR20,
VAR21,
VAR22,
VAR8);

switch (VAR3 & VAR23) {
case VAR24:
break;
case VAR25:
VAR10 = VAR26;
break;
default:
FUN4(VAR5->VAR11, "");
return -VAR19;
}

FUN5(VAR7->VAR20,
VAR27,
VAR26,
VAR10);


switch (VAR3 & VAR28) {
case VAR29:
VAR7->VAR30 |= VAR29;
VAR9 = VAR31;
break;
case VAR32:
VAR7->VAR30 |= VAR32;
VAR9 = VAR33;
break;
case VAR34:
VAR7->VAR30 |= VAR34;
break;
default:
return -VAR19;
}


if (VAR7->VAR30 & (VAR29 | VAR32)) {
FUN5(VAR7->VAR20,
VAR35,
VAR36 | VAR37,
VAR36 | VAR37);

FUN5(VAR7->VAR20,
VAR27,
VAR38,
VAR9 << VAR39);

FUN5(VAR7->VAR20,
VAR40,
VAR41, 0);

} else
FUN5(VAR7->VAR20,
VAR35,
VAR36 | VAR37, 0);


if (VAR7->VAR30 & VAR34) {
FUN5(VAR7->VAR20,
VAR42,
VAR43, 1);

FUN5(VAR7->VAR20,
VAR40,
VAR41, 3);
} else
FUN5(VAR7->VAR20,
VAR42,
VAR43, 0);
return 0;
}