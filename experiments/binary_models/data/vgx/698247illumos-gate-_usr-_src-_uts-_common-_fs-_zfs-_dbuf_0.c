static VAR1 *
FUN1(VAR2 *VAR3, uint8_t VAR4, uint64_t VAR5,
VAR1 *VAR6, VAR7 *VAR8)
{
VAR9 *VAR10 = VAR3->VAR11;
VAR1 *VAR12, *VAR13;

FUN2(FUN3(&VAR3->VAR14));
FUN2(VAR3->VAR15 != VAR16);

VAR12 = FUN4(VAR17, VAR18);

VAR12->VAR19 = VAR10;
VAR12->VAR12.VAR20 = VAR3->VAR21;
VAR12->VAR22 = VAR4;
VAR12->VAR23 = VAR5;
VAR12->VAR24 = NULL;
VAR12->VAR25 = 0;
VAR12->VAR26 = VAR3->VAR27;
VAR12->VAR28 = VAR6;
VAR12->VAR29 = VAR8;

VAR12->VAR30 = NULL;
VAR12->VAR31 = VAR32;
VAR12->VAR33 = VAR32;
VAR12->VAR34 = VAR32;

if (VAR5 == VAR35) {
FUN5(VAR6, ==, VAR3->VAR36);
VAR12->VAR12.VAR37 = FUN6(VAR3->VAR38) -
(VAR3->VAR39-1) * sizeof (VAR7);
FUN7(VAR12->VAR12.VAR37, >=, VAR3->VAR40);
VAR12->VAR12.VAR41 = VAR35;
VAR12->VAR42 = VAR43;
VAR12->VAR44 = VAR45;

FUN8(sizeof (VAR1), VAR46);
return (VAR12);
} else if (VAR5 == VAR47) {
VAR12->VAR12.VAR37 = (VAR8 != NULL) ?
FUN9(VAR8) : VAR48;
VAR12->VAR12.VAR41 = 0;
} else {
int VAR49 =
VAR12->VAR22 ? 1 << VAR3->VAR50 : VAR3->VAR51;
VAR12->VAR12.VAR37 = VAR49;
VAR12->VAR12.VAR41 = VAR12->VAR23 * VAR49;
}


FUN10(&VAR3->VAR52);
VAR12->VAR42 = VAR53;
if ((VAR13 = FUN11(VAR12)) != NULL) {

FUN12(VAR17, VAR12);
FUN13(&VAR3->VAR52);
return (VAR13);
}
FUN14(&VAR3->VAR54, VAR12);

VAR12->VAR42 = VAR43;
VAR12->VAR44 = VAR45;
FUN13(&VAR3->VAR52);
FUN8(sizeof (VAR1), VAR46);

if (VAR6 && VAR6 != VAR3->VAR36)
FUN15(VAR6, VAR12);

FUN2(VAR3->VAR21 == VAR55 ||
FUN16(&VAR3->VAR56) > 0);
(void) FUN17(&VAR3->VAR56, VAR12);
FUN18(&VAR3->VAR57);

FUN19(VAR12, "", VAR12);

return (VAR12);
}