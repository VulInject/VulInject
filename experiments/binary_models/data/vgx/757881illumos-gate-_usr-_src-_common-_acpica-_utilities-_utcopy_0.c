FUN1 (
UINT8                   VAR1,
VAR2     *VAR3,
VAR4      *VAR5,
void                    *VAR6)
{
ACPI_STATUS             VAR7 = VAR8;
UINT32                  VAR9;
VAR2     **VAR10;
VAR2     *VAR11;


FUN2 ();


VAR9 = VAR5->VAR12.VAR13;
VAR10 = (VAR2 **)
&VAR5->VAR12.VAR14->VAR15.VAR16[VAR9];

switch (VAR1)
{
case VAR17:



if (VAR3)
{

VAR11 = FUN3 (
VAR3->VAR18.VAR19);
if (!VAR11)
{
return (VAR20);
}

VAR7 = FUN4 (VAR3, VAR11);
if (FUN5 (VAR7))
{
goto VAR21;
}

*VAR10 = VAR11;
}
else
{


*VAR10 = NULL;
}
break;

case VAR22:

VAR11 = FUN6 (
VAR3->VAR15.VAR23);
if (!VAR11)
{
return (VAR20);
}

VAR11->VAR18.VAR24 = VAR3->VAR18.VAR24;



VAR5->VAR12.VAR25 = VAR11;



*VAR10 = VAR11;
break;

default:

return (VAR26);
}

return (VAR7);

VAR21:
FUN7 (VAR11);
return (VAR7);
}