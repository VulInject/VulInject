VAR1 *
FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR6 *VAR8,
VAR6 *VAR9, int VAR10)
{
Oid			VAR11,
VAR12;
Operator	VAR13;
Form_pg_operator VAR14;
Oid			VAR15[2];
Oid			VAR16[2];
int			VAR17;
VAR4	   *VAR18;
Oid			VAR19;
VAR20	   *VAR21;


if (VAR8 == NULL)
FUN2(VAR22,
(FUN3(VAR23),
FUN4("")));


if (VAR7 == NULL)
{

VAR12 = FUN5(VAR8);
VAR11 = VAR24;
VAR13 = FUN6(VAR3, VAR5, VAR12, false, VAR10);
}
else
{

VAR11 = FUN5(VAR7);
VAR12 = FUN5(VAR8);
VAR13 = FUN7(VAR3, VAR5, VAR11, VAR12, false, VAR10);
}

VAR14 = (VAR25) FUN8(VAR13);


if (!FUN9(VAR14->VAR26))
FUN2(VAR22,
(FUN3(VAR27),
FUN4("",
FUN10(VAR5,
VAR14->VAR28,
VAR14->VAR29,
VAR14->VAR30)),
FUN11(VAR3, VAR10)));


if (VAR7 == NULL)
{

VAR18 = FUN12(VAR8);
VAR15[0] = VAR12;
VAR16[0] = VAR14->VAR30;
VAR17 = 1;
}
else
{

VAR18 = FUN13(VAR7, VAR8);
VAR15[0] = VAR11;
VAR15[1] = VAR12;
VAR16[0] = VAR14->VAR29;
VAR16[1] = VAR14->VAR30;
VAR17 = 2;
}


VAR19 = FUN14(VAR15,
VAR16,
VAR17,
VAR14->VAR31,
false);


FUN15(VAR3, VAR18, VAR15, VAR16);


VAR21 = FUN16(VAR20);
VAR21->VAR32 = FUN17(VAR13);
VAR21->VAR33 = VAR14->VAR26;
VAR21->VAR34 = VAR19;
VAR21->VAR35 = FUN18(VAR14->VAR26);

VAR21->VAR18 = VAR18;
VAR21->VAR10 = VAR10;


if (VAR21->VAR35)
{
FUN19(VAR3, VAR9, VAR10);

VAR3->VAR36 = (VAR6 *) VAR21;
}

FUN20(VAR13);

return (VAR1 *) VAR21;
}