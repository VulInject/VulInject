static VAR1
FUN1(VAR2 *VAR3, int VAR4)
{
Page		VAR5 = FUN2(VAR3);
int			VAR6 = VAR7;


if (!FUN3(VAR5))
{
HashPageOpaque VAR8;

if (FUN4(VAR5) != FUN5(sizeof(VAR9)))
FUN6(VAR10,
(FUN7(VAR11),
FUN8("", ""),
FUN9("",
(int) FUN5(sizeof(VAR9)),
(int) FUN4(VAR5))));

VAR8 = FUN10(VAR5);
if (VAR8->VAR12 != VAR13)
FUN6(VAR10,
(FUN7(VAR11),
FUN8("", ""),
FUN9("",
VAR13, VAR8->VAR12)));

VAR6 = VAR8->VAR14 & VAR15;
}


if (VAR6 != VAR16 && VAR6 != VAR17 &&
VAR6 != VAR18 && VAR6 != VAR19 &&
VAR6 != VAR7)
FUN6(VAR10,
(FUN7(VAR11),
FUN8("", VAR6)));


if (VAR4 != 0 && (VAR6 & VAR4) == 0)
{
switch (VAR4)
{
case VAR19:
FUN6(VAR10,
(FUN7(VAR11),
FUN8("")));
break;
case VAR17 | VAR16:
FUN6(VAR10,
(FUN7(VAR11),
FUN8("")));
break;
case VAR16:
FUN6(VAR10,
(FUN7(VAR11),
FUN8("")));
break;
default:
FUN11(VAR10,
"",
VAR6, VAR4);
break;
}
}


if (VAR6 == VAR19)
{
HashMetaPage VAR20 = FUN12(VAR5);

if (VAR20->VAR21 != VAR22)
FUN6(VAR10,
(FUN7(VAR23),
FUN8(""),
FUN9("",
VAR22, VAR20->VAR21)));

if (VAR20->VAR24 != VAR25)
FUN6(VAR10,
(FUN7(VAR23),
FUN8(""),
FUN9("",
VAR25, VAR20->VAR24)));
}

return VAR5;
}