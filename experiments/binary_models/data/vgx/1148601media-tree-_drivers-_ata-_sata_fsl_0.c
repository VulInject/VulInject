static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->VAR6;
void VAR7 *VAR8 = VAR4->VAR8;
u32 VAR9, VAR10=0, VAR11 = 0, VAR12 = 0;
unsigned int VAR13 = 0, VAR14 = 0;
int VAR15 = 0, VAR16=0;
struct VAR17 *VAR18 = NULL;
struct VAR19 *VAR20 = NULL;
struct VAR21 *VAR22;

VAR9 = FUN2(VAR8 + VAR23);
VAR11 = FUN2(VAR8 + VAR24);


VAR18 = &VAR2->VAR18;
VAR22 = &VAR18->VAR25;
FUN3(VAR22);



FUN4(&VAR2->VAR18, VAR26, &VAR12);
if (FUN5(VAR12 & 0xFFFF0000))
FUN6(&VAR2->VAR18, VAR26, VAR12);

FUN7("",
VAR9, VAR11, FUN2(VAR8 + VAR27), VAR12);


if (VAR9 & VAR28) {
VAR22->VAR13 |= VAR29;
VAR22->VAR14 |= VAR30;

VAR15 = 1;
}


if (VAR9 & VAR31)
FUN8(VAR2);


if (VAR9 & VAR32) {
FUN7("");


FUN9(VAR22);
FUN10(VAR22, "", "");
VAR15 = 1;
}


if (VAR11) {

VAR16 = 1;

FUN7("",
FUN2(VAR8 + VAR24), FUN2(VAR8 + VAR27));


if (VAR2->VAR33) {
unsigned int VAR34;

VAR10 = FUN2(VAR8 + VAR27);
FUN11(VAR10, VAR8 + VAR27);
FUN11(VAR11, VAR8 + VAR24);

VAR34 = FUN12(VAR10) - 1;
if (VAR34 < VAR2->VAR33 && VAR10 != 0) {
VAR18 = &VAR2->VAR35[VAR34];
VAR22 = &VAR18->VAR25;
VAR20 = FUN13(VAR2, VAR18->VAR36);


VAR13 |= VAR37;

} else {
VAR13 |= VAR38;
VAR14 |= VAR39;
VAR15 = 1;
}
} else {
VAR10 = FUN2(VAR8 + VAR27);
FUN11(VAR10, VAR8 + VAR27);
FUN11(VAR11, VAR8 + VAR24);

VAR20 = FUN13(VAR2, VAR18->VAR36);

VAR13 |= VAR37;
}
}


if (VAR20)
VAR20->VAR13 |= VAR13;
else
VAR22->VAR13 |= VAR13;

VAR22->VAR14 |= VAR14;


if (VAR15)
FUN14(VAR2);
else if (VAR16) {
if (VAR20)
FUN15(VAR20->VAR40->VAR18);
else
FUN16(VAR2);
}
}