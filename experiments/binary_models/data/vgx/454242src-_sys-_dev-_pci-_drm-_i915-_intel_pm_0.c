void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR5.VAR4.VAR6;
struct VAR7 *VAR8;

FUN2(VAR2, VAR4);

VAR4->VAR9 = FUN3(&VAR2->VAR10, VAR11) & VAR12;

FUN4(&VAR2->VAR13, VAR8) {
struct VAR14 *VAR15 =
FUN5(VAR8->VAR16.VAR17);
struct VAR18 *VAR19 = &VAR8->VAR4.VAR19.VAR6;
struct VAR20 *VAR21;
enum pipe VAR22 = VAR8->VAR22;
enum plane_id VAR23;
int VAR24, VAR25;

VAR19->VAR9 = VAR4->VAR9;
VAR19->VAR26 = VAR4->VAR26;
VAR19->VAR27 = VAR4->VAR27;

VAR19->VAR28 = VAR4->VAR28;
VAR19->VAR29 = VAR4->VAR29;

FUN6(VAR8, VAR23) {
VAR19->VAR4.VAR30[VAR23] =
VAR4->VAR22[VAR22].VAR30[VAR23];
}

if (VAR4->VAR9 && VAR4->VAR26)
VAR25 = VAR31;
else if (VAR4->VAR9)
VAR25 = VAR32;
else
VAR25 = VAR33;

VAR24 = VAR33;
VAR21 = &VAR15->VAR4.VAR6.VAR21[VAR24];
FUN6(VAR8, VAR23)
VAR21->VAR30[VAR23] = VAR19->VAR4.VAR30[VAR23];

VAR24 = VAR32;
if (VAR24 > VAR25)
goto VAR34;

VAR21 = &VAR15->VAR4.VAR6.VAR21[VAR24];
VAR21->VAR30[VAR35] = VAR19->VAR28.VAR30;
VAR21->VAR30[VAR36] = VAR19->VAR28.VAR37;
VAR21->VAR30[VAR38] = 0;
VAR21->VAR39 = VAR19->VAR28.VAR39;

VAR24 = VAR31;
if (VAR24 > VAR25)
goto VAR34;

VAR21 = &VAR15->VAR4.VAR6.VAR21[VAR24];
VAR21->VAR30[VAR35] = VAR19->VAR29.VAR30;
VAR21->VAR30[VAR36] = VAR19->VAR29.VAR37;
VAR21->VAR30[VAR38] = 0;
VAR21->VAR39 = VAR19->VAR29.VAR39;

VAR24++;
VAR34:
FUN6(VAR8, VAR23)
FUN7(VAR15, VAR24,
VAR23, VAR40);
FUN8(VAR15, VAR24, VAR40);

VAR15->VAR4.VAR6.VAR41 = *VAR19;
VAR15->VAR4.VAR6.VAR42 = *VAR19;

FUN9(&VAR2->VAR13,
"",
FUN10(VAR22),
VAR4->VAR22[VAR22].VAR30[VAR35],
VAR4->VAR22[VAR22].VAR30[VAR36],
VAR4->VAR22[VAR22].VAR30[VAR38]);
}

FUN9(&VAR2->VAR13,
"",
VAR4->VAR28.VAR30, VAR4->VAR28.VAR37, VAR4->VAR28.VAR39);
FUN9(&VAR2->VAR13,
"",
VAR4->VAR29.VAR30, VAR4->VAR29.VAR37, VAR4->VAR29.VAR39);
FUN9(&VAR2->VAR13, "",
FUN11(VAR4->VAR9), FUN11(VAR4->VAR26),
FUN11(VAR4->VAR27));
}