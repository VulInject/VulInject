void
FUN1(
struct VAR1 *VAR2,
struct VAR3	*VAR4)
{
VAR2->VAR5 = VAR2->VAR6 = 0;
FUN2(&VAR2->VAR7);
VAR2->VAR8 = VAR2->VAR9.VAR10;
VAR2->VAR11 = VAR4->VAR12 + VAR13;
VAR2->VAR14 = VAR4->VAR12 - VAR15;
VAR2->VAR16 = VAR4->VAR17 - VAR15;
VAR2->VAR18 = FUN3(VAR4->VAR10 - 1) + 1;
VAR2->VAR19 = VAR4->VAR20 + VAR4->VAR21;
VAR2->VAR22 = VAR4->VAR23 - 1;
VAR2->VAR24 = VAR4->VAR23 >> VAR25;
VAR2->VAR26 = VAR2->VAR24 - 1;

VAR2->VAR27[0] = FUN4(VAR2, VAR4->VAR23, 1);
VAR2->VAR27[1] = FUN4(VAR2, VAR4->VAR23, 0);
VAR2->VAR28[0] = VAR2->VAR27[0] / 2;
VAR2->VAR28[1] = VAR2->VAR27[1] / 2;

VAR2->VAR29[0] = FUN5(VAR2, VAR4->VAR23, 1);
VAR2->VAR29[1] = FUN5(VAR2, VAR4->VAR23, 0);
VAR2->VAR30[0] = VAR2->VAR29[0] / 2;
VAR2->VAR30[1] = VAR2->VAR29[1] / 2;

VAR2->VAR31[0] = FUN6(VAR2, VAR4->VAR23, 1);
VAR2->VAR31[1] = FUN6(VAR2, VAR4->VAR23, 0);
VAR2->VAR32[0] = VAR2->VAR31[0] / 2;
VAR2->VAR32[1] = VAR2->VAR31[1] / 2;

VAR2->VAR33[0] = FUN7(VAR2, VAR4->VAR23, 1);
VAR2->VAR33[1] = FUN7(VAR2, VAR4->VAR23, 0);
VAR2->VAR34[0] = VAR2->VAR33[0] / 2;
VAR2->VAR34[1] = VAR2->VAR33[1] / 2;

VAR2->VAR35[0] = FUN8(VAR2, VAR4->VAR23,
true);
VAR2->VAR35[1] = FUN8(VAR2, VAR4->VAR23,
false);
VAR2->VAR36[0] = VAR2->VAR35[0] / 2;
VAR2->VAR36[1] = VAR2->VAR35[1] / 2;

VAR2->VAR37 = FUN9(VAR2, 1);
VAR2->VAR38 = (int)FUN10((VAR39)VAR40,
VAR4->VAR41);
VAR2->VAR42 = VAR2->VAR38 >> VAR4->VAR20;

if (VAR4->VAR43)
VAR2->VAR44 = VAR4->VAR43;
else
VAR2->VAR44 = VAR2->VAR42;
VAR2->VAR45 = FUN11(VAR2);
VAR2->VAR46 = FUN12(VAR2);
}