FUN1 (special_function_kind VAR1, tree VAR2, bool VAR3)
{
tree VAR4;
tree VAR5 = VAR6;
tree VAR7;
tree VAR8;
tree VAR9 = VAR10;
tree VAR11 = VAR12;
tree VAR13;
tree VAR14;
HOST_WIDE_INT VAR15;


FUN2 (!FUN3 (VAR2));
VAR15 = VAR16;
VAR16 = 0;

VAR2 = FUN4 (VAR2);

if (VAR17.VAR18.FUN5 () && !FUN6 (VAR2))
{
if (VAR1 == VAR19)

VAR7 = FUN7 (VAR20);
else
VAR7 = FUN7 (VAR2);
}
else
VAR7 = VAR20;

switch (VAR1)
{
case VAR19:

VAR14 = FUN8 (VAR2);
VAR9 = FUN9 (VAR2, &VAR21, 0);
break;

case VAR22:

VAR14 = FUN8 (VAR2);
VAR9 = FUN9 (VAR2, &VAR23, 0);
break;

case VAR24:
case VAR25:
{
struct copy_data VAR26;

VAR26.VAR14 = NULL;
VAR26.VAR27 = 0;
if (VAR1 == VAR25)
{
VAR7 = FUN10 (VAR2);
VAR14 = FUN11 (VAR28);
VAR26.VAR14 = VAR14;
}
else
VAR14 = FUN8 (VAR2);

if (VAR3)
{
VAR26.VAR27 = VAR29;
VAR11 = FUN12 (VAR2, VAR29);
}
else
VAR11 = VAR2;
VAR11 = FUN10 (VAR11);
VAR5 = FUN13 (VAR12, VAR11, VAR5);
VAR9 = FUN9 (VAR2, &VAR30, &VAR26);
break;
}
default:
FUN14 ();
}


VAR8 = FUN15 (VAR2, VAR7, VAR5);
if (VAR9)
VAR8 = FUN16 (VAR8, VAR9);
VAR4 = FUN17 (VAR31, VAR14, VAR8);
FUN18 (VAR4) = FUN18 (FUN19 (VAR2));
if (VAR1 == VAR22 || VAR1 == VAR24)
FUN20 (VAR4) = 1;
else if (VAR1 == VAR19)
FUN21 (VAR4) = 1;
else
{
FUN22 (VAR4) = 1;
FUN23 (VAR4, VAR28);
}

if (VAR11)
{

FUN24 (VAR4) = FUN25 (VAR12, VAR11);
FUN26 (FUN24 (VAR4)) = 1;
}

VAR13 = FUN27 (VAR8, VAR32);
FUN28 (VAR13) = FUN24 (VAR4);
FUN24 (VAR4) = VAR13;

FUN29 (VAR2, VAR4, VAR1 == VAR19 ? VAR33 : VAR34);
FUN30 (VAR2, VAR4);
FUN31 (VAR4, FUN32 (), VAR35);
FUN33 (VAR4) = 1;
FUN34 (VAR4) = 1;
FUN35 (VAR4) = 1;
FUN36 (VAR4) = 1;
FUN37 (VAR4) = 1;
FUN2 (!FUN38 (VAR4));


VAR16 = VAR15;

return VAR4;
}