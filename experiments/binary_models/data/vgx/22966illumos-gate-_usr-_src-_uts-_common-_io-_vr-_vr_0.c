static void
FUN1(VAR1 *VAR2)
{
uint16_t		VAR3;

FUN2(FUN3(&VAR2->VAR4));

FUN4(VAR2, VAR5, &VAR2->VAR6.VAR7.VAR8);
FUN4(VAR2, VAR9, &VAR2->VAR6.VAR7.VAR10);
FUN4(VAR2, VAR11, &VAR2->VAR6.VAR7.VAR12);
FUN4(VAR2, VAR13, &VAR2->VAR6.VAR7.VAR14);
FUN4(VAR2, VAR15, &VAR2->VAR6.VAR7.VAR16);


if ((VAR2->VAR6.VAR7.VAR10 & VAR17) != 0) {
VAR3 = VAR2->VAR6.VAR7.VAR12 & VAR2->VAR6.VAR7.VAR14;
if ((VAR3 & VAR18) != 0) {
VAR2->VAR6.VAR19.VAR20 = VAR21;
VAR2->VAR6.VAR19.VAR22 = VAR23;
VAR2->VAR6.VAR19.VAR24 = VAR25;
} else if ((VAR3 & VAR26) != 0) {
VAR2->VAR6.VAR19.VAR20 = VAR21;
VAR2->VAR6.VAR19.VAR22 = VAR27;
VAR2->VAR6.VAR19.VAR24 = VAR28;
} else if ((VAR3 & VAR29) != 0) {
VAR2->VAR6.VAR19.VAR20 = VAR21;
VAR2->VAR6.VAR19.VAR22 = VAR27;
VAR2->VAR6.VAR19.VAR24 = VAR25;
} else if ((VAR3 & VAR30) != 0) {
VAR2->VAR6.VAR19.VAR20 = VAR31;
VAR2->VAR6.VAR19.VAR22 = VAR23;
VAR2->VAR6.VAR19.VAR24 = VAR32;
} else if ((VAR3 & VAR33) != 0) {
VAR2->VAR6.VAR19.VAR20 = VAR31;
VAR2->VAR6.VAR19.VAR22 = VAR27;
VAR2->VAR6.VAR19.VAR24 = VAR32;
} else {
VAR2->VAR6.VAR19.VAR20 = VAR34;
VAR2->VAR6.VAR19.VAR22 = VAR35;
VAR2->VAR6.VAR19.VAR24 = VAR36;
}


if ((VAR3 & VAR37) != 0 &&
VAR2->VAR6.VAR19.VAR22 == VAR23)
VAR2->VAR6.VAR19.VAR38 = VAR39;
else
VAR2->VAR6.VAR19.VAR38 = VAR40;


if ((VAR2->VAR6.VAR7.VAR8 & VAR41) != 0)
FUN5(VAR2, VAR42,
"");

if ((VAR2->VAR6.VAR7.VAR14 & VAR43) != 0)
FUN5(VAR2, VAR42, "");
} else {

if ((VAR2->VAR6.VAR7.VAR10 & VAR44) != 0) {
VAR2->VAR6.VAR19.VAR20 = VAR21;
VAR2->VAR6.VAR19.VAR24 = VAR25;
} else {
VAR2->VAR6.VAR19.VAR20 = VAR31;
VAR2->VAR6.VAR19.VAR24 = VAR32;
}

if ((VAR2->VAR6.VAR7.VAR10 & VAR45) != 0)
VAR2->VAR6.VAR19.VAR22 = VAR23;
else {
VAR2->VAR6.VAR19.VAR22 = VAR27;

VAR2->VAR6.VAR19.VAR38 = VAR40;
}
}


if (VAR2->VAR6.VAR19.VAR22 == VAR23) {
FUN6(VAR2->VAR46, VAR47, VAR48);

if ((VAR2->VAR6.VAR49.VAR50 & VAR51) == 0)
FUN7(VAR2->VAR46, VAR52, VAR53);
} else {
FUN7(VAR2->VAR46, VAR47, VAR48);

FUN6(VAR2->VAR46, VAR52, VAR53);
}


if (VAR2->VAR6.VAR19.VAR38 == VAR39) {

FUN6(VAR2->VAR46, VAR54, VAR55);


if ((VAR2->VAR6.VAR49.VAR56 & VAR57) != 0) {

FUN8(VAR2->VAR46, VAR58,
FUN9(VAR2->VAR59.VAR60, 0xFF) -
FUN10(VAR2->VAR46,
VAR58));


FUN11(VAR2->VAR46, VAR61,
VAR62, VAR63);


FUN11(VAR2->VAR46, VAR61,
VAR64, VAR65);


FUN12(VAR2->VAR46, VAR66, 0xFFFF);


FUN6(VAR2->VAR46, VAR54, VAR67);
FUN6(VAR2->VAR46, VAR61, VAR68 |
VAR69 | VAR70);
}
} else {

FUN7(VAR2->VAR46,
VAR54, VAR55 | VAR67);
if ((VAR2->VAR6.VAR49.VAR56 & VAR57) != 0) {
FUN7(VAR2->VAR46, VAR61,
VAR68 | VAR69 |
VAR70);
}
}


if ((VAR2->VAR6.VAR7.VAR8 & VAR71) != 0)
VAR2->VAR6.VAR19.VAR72 = VAR73;
else
VAR2->VAR6.VAR19.VAR72 = VAR74;
}