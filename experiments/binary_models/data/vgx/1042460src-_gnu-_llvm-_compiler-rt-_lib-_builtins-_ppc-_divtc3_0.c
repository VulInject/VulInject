{                                                                            \
(VAR1).VAR2.VAR3 = FUN1(FUN2((VAR1).VAR2.VAR3) ? 1.0 : 0.0, (VAR1).VAR2.VAR3);        \
(VAR1).VAR2.VAR4 = 0.0;                                                            \
}

long double VAR5 FUN3(long double VAR6, long double VAR7, long double VAR8,
long double VAR9) {
DD VAR10 = {.VAR11 = VAR8};
DD VAR12 = {.VAR11 = VAR9};

int VAR13 = 0;
const double VAR14 =
FUN4(FUN5(FUN6(VAR10.VAR2.VAR3),
FUN6(VAR12.VAR2.VAR3)));

if (FUN7(VAR14)) {
VAR13 = (int)VAR14;

VAR10.VAR2.VAR3 = FUN8(VAR10.VAR2.VAR3, -VAR13);
VAR10.VAR2.VAR4 = FUN8(VAR10.VAR2.VAR4, -VAR13);
VAR12.VAR2.VAR3 = FUN8(VAR12.VAR2.VAR3, -VAR13);
VAR12.VAR2.VAR4 = FUN8(VAR12.VAR2.VAR4, -VAR13);
}

const long double VAR15 =
FUN9(FUN10(VAR10.VAR11, VAR10.VAR11), FUN10(VAR12.VAR11, VAR12.VAR11));
const long double VAR16 =
FUN9(FUN10(VAR6, VAR10.VAR11), FUN10(VAR7, VAR12.VAR11));
const long double VAR17 =
FUN11(FUN10(VAR7, VAR10.VAR11), FUN10(VAR6, VAR12.VAR11));

DD VAR18 = {.VAR11 = FUN12(VAR16, VAR15)};
DD VAR19 = {.VAR11 = FUN12(VAR17, VAR15)};

VAR18.VAR2.VAR3 = FUN8(VAR18.VAR2.VAR3, -VAR13);
VAR18.VAR2.VAR4 = FUN8(VAR18.VAR2.VAR4, -VAR13);
VAR19.VAR2.VAR3 = FUN8(VAR19.VAR2.VAR3, -VAR13);
VAR19.VAR2.VAR4 = FUN8(VAR19.VAR2.VAR4, -VAR13);

if (FUN13(VAR18.VAR2.VAR3) && FUN13(VAR19.VAR2.VAR3)) {
DD VAR20 = {.VAR11 = VAR6};
DD VAR21 = {.VAR11 = VAR7};
DD VAR22 = {.VAR11 = VAR15};

if ((VAR22.VAR2.VAR3 == 0.0) && (!FUN13(VAR20.VAR2.VAR3) || !FUN13(VAR21.VAR2.VAR3))) {
VAR18.VAR2.VAR3 = FUN1(VAR23, VAR10.VAR2.VAR3) * VAR20.VAR2.VAR3;
VAR18.VAR2.VAR4 = 0.0;
VAR19.VAR2.VAR3 = FUN1(VAR23, VAR10.VAR2.VAR3) * VAR21.VAR2.VAR3;
VAR19.VAR2.VAR4 = 0.0;
}

else if ((FUN2(VAR20.VAR2.VAR3) || FUN2(VAR21.VAR2.VAR3)) &&
FUN7(VAR10.VAR2.VAR3) && FUN7(VAR12.VAR2.VAR3)) {
FUN14(VAR20);
FUN14(VAR21);
VAR18.VAR2.VAR3 = VAR23 * (VAR20.VAR2.VAR3 * VAR10.VAR2.VAR3 + VAR21.VAR2.VAR3 * VAR12.VAR2.VAR3);
VAR18.VAR2.VAR4 = 0.0;
VAR19.VAR2.VAR3 = VAR23 * (VAR21.VAR2.VAR3 * VAR10.VAR2.VAR3 - VAR20.VAR2.VAR3 * VAR12.VAR2.VAR3);
VAR19.VAR2.VAR4 = 0.0;
}

else if ((FUN2(VAR10.VAR2.VAR3) || FUN2(VAR12.VAR2.VAR3)) &&
FUN7(VAR20.VAR2.VAR3) && FUN7(VAR21.VAR2.VAR3)) {
FUN14(VAR10);
FUN14(VAR12);
VAR18.VAR2.VAR3 =
FUN1(0.0, (VAR20.VAR2.VAR3 * VAR10.VAR2.VAR3 + VAR21.VAR2.VAR3 * VAR12.VAR2.VAR3));
VAR18.VAR2.VAR4 = 0.0;
VAR19.VAR2.VAR3 =
FUN1(0.0, (VAR21.VAR2.VAR3 * VAR10.VAR2.VAR3 - VAR20.VAR2.VAR3 * VAR12.VAR2.VAR3));
VAR19.VAR2.VAR4 = 0.0;
}
}

long double _Complex VAR24;
__real__ VAR24 = VAR18.VAR11;
__imag__ VAR24 = VAR19.VAR11;

return VAR24;
}