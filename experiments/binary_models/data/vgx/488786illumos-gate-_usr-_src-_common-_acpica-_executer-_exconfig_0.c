FUN1 (
VAR1     *VAR2,
VAR1     *VAR3,
VAR4         *VAR5)
{
VAR1     *VAR6;
VAR7       *VAR8;
VAR7       *VAR9;
UINT32                  VAR10;
ACPI_STATUS             VAR11;
UINT32                  VAR12;


FUN2 (VAR13);




switch (VAR2->VAR14.VAR15)
{
case VAR16:

FUN3 ((VAR17,
"", VAR2));



if (VAR2->VAR18.VAR19 != VAR20)
{
FUN4 (VAR21);
}


if (!(VAR2->VAR14.VAR22 & VAR23))
{
VAR11 = FUN5 (VAR2);
if (FUN6 (VAR11))
{
FUN4 (VAR11);
}
}



VAR8 = FUN7 (sizeof (VAR7));
if (!VAR8)
{
FUN4 (VAR24);
}

VAR11 = FUN8 (VAR2, sizeof (VAR7),
FUN9 (VAR25, VAR8));
VAR12 = VAR8->VAR12;
FUN10 (VAR8);

if (FUN6 (VAR11))
{
FUN4 (VAR11);
}



if (VAR12 < sizeof (VAR7))
{
FUN4 (VAR26);
}





VAR9 = FUN7 (VAR12);
if (!VAR9)
{
FUN4 (VAR24);
}



VAR11 = FUN8 (VAR2, VAR12,
FUN9 (VAR25, VAR9));
if (FUN6 (VAR11))
{
FUN10 (VAR9);
FUN4 (VAR11);
}
break;

case VAR27: 

FUN3 ((VAR17,
"", VAR2));



if (VAR2->VAR28.VAR12 < sizeof (VAR7))
{
FUN4 (VAR26);
}



VAR8 = FUN9 (
VAR7, VAR2->VAR28.VAR29);
VAR12 = VAR8->VAR12;



if (VAR12 > VAR2->VAR28.VAR12)
{
FUN4 (VAR30);
}
if (VAR12 < sizeof (VAR7))
{
FUN4 (VAR26);
}


VAR9 = FUN7 (VAR12);
if (!VAR9)
{
FUN4 (VAR24);
}

memcpy (VAR9, VAR8, VAR12);
break;

default:

FUN4 (VAR21);
}



FUN11 ((""));
FUN12 ();
VAR11 = FUN13 (FUN14 (VAR9),
VAR31, VAR32, &VAR10);
FUN15 ();
if (FUN6 (VAR11))
{


FUN10 (VAR9);
FUN4 (VAR11);
}


VAR11 = FUN16 (VAR10, &VAR6);
if (FUN6 (VAR11))
{


FUN4 (VAR11);
}



VAR11 = FUN17 (VAR33, VAR34,
VAR35, 0, VAR36, NULL, NULL, NULL);



VAR11 = FUN18 (VAR6, VAR3, VAR5);
if (FUN6 (VAR11))
{
(void) FUN19 (VAR6);



FUN20 (VAR6);
FUN4 (VAR11);
}



FUN20 (VAR6);
FUN4 (VAR11);
}