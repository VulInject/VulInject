VAR1 *
FUN1(VAR2 *VAR3,
int VAR4,
Index VAR5,
bool VAR6)
{
VAR1		   *VAR7;
Oid			VAR8;
VAR9	   *VAR10;

switch (VAR3->VAR11)
{
case VAR12:

VAR8 = FUN2(VAR3->VAR13);
if (!FUN3(VAR8))
FUN4(VAR14,
(FUN5(VAR15),
FUN6(""%VAR16\"",
FUN7(VAR3->VAR13))));
VAR7 = FUN8(VAR4,
VAR17,
VAR8,
-1,
VAR18,
VAR5);
break;

case VAR19:


if (VAR3->VAR20 || FUN9(VAR3->VAR21) != 1)
{

VAR7 = FUN8(VAR4,
VAR17,
VAR22,
-1,
VAR18,
VAR5);
break;
}

VAR10 = ((VAR23 *) FUN10(VAR3->VAR21))->VAR24;
VAR8 = FUN11(VAR10);
if (FUN12(VAR8))
{

VAR7 = FUN8(VAR4,
VAR17,
VAR8,
-1,
VAR18,
VAR5);
}
else if (VAR6)
{

VAR7 = FUN8(VAR4,
1,
VAR8,
-1,
FUN13(VAR10),
VAR5);
}
else
{

VAR7 = FUN8(VAR4,
VAR17,
VAR22,
-1,
VAR18,
VAR5);
}
break;

default:


VAR7 = FUN8(VAR4,
VAR17,
VAR22,
-1,
VAR18,
VAR5);
break;
}

return VAR7;
}