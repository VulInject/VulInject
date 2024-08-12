FUN1 (
VAR1         *VAR2,
void                    *VAR3,
VAR4                   *VAR5)
{
VAR6            *VAR7;
UINT8                   VAR8;
UINT8                   VAR9;
ACPI_RS_LENGTH          VAR10;
ACPI_RS_LENGTH          VAR11;


FUN2 ();



VAR8 = FUN3 (VAR3);


if (VAR8 & VAR12)
{


if (VAR8 > VAR13)
{
goto VAR14;
}


VAR9 = (VAR4) (VAR8 - 0x70);
}
else
{

VAR9 = (VAR4)
((VAR8 & VAR15) >> 3);
}


if (!VAR16[VAR9])
{
goto VAR14;
}


VAR10 = FUN4 (VAR3);
VAR11 = VAR17[VAR9];



switch (VAR16[VAR9])
{
case VAR18:



if (VAR10 != VAR11)
{
goto VAR19;
}
break;

case VAR20:



if (VAR10 < VAR11)
{
goto VAR19;
}
break;

case VAR21:



if ((VAR10 > VAR11) ||
(VAR10 < (VAR11 - 1)))
{
goto VAR19;
}
break;

default:



goto VAR14;
}

VAR7 = FUN5 (VAR6, VAR3);
if (VAR8 == VAR22)
{


if ((VAR7->VAR23.VAR24 == 0) ||
(VAR7->VAR23.VAR24 > VAR25))
{
if (VAR2)
{
FUN6 ((VAR26,
"",
VAR7->VAR23.VAR24));
}
return (VAR27);
}
}



if (VAR5)
{
*VAR5 = VAR9;
}

return (VAR28);


VAR14:

if (VAR2)
{
FUN6 ((VAR26,
"",
VAR8));
}
return (VAR27);

VAR19:

if (VAR2)
{
FUN6 ((VAR26,
""
"",
VAR8, VAR10, VAR11));
}
return (VAR29);
}