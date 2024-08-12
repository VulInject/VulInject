FUN1 (
ACPI_HANDLE             VAR1,
UINT32                  VAR2,
void                    *VAR3,
void                    **VAR4)
{
VAR5     *VAR6 = FUN2 (VAR5, VAR1);
VAR7      *VAR8 = FUN2 (VAR7, VAR3);
VAR9     *VAR10;
ACPI_STATUS             VAR11;
UINT32                  VAR12;
UINT8                   VAR13;
char                    VAR14[VAR15 + 1];
UINT8                   VAR16;


FUN3 (VAR17);




if ((VAR8->VAR18) &&
(VAR6->VAR19 != VAR8->VAR19))
{
FUN4 (VAR20);
}


FUN5 (VAR14, &VAR6->VAR14.VAR21);
VAR14[VAR15] = 0;



if (VAR14[0] != '')
{
FUN4 (VAR20); 
}


switch (VAR14[1])
{
case '':

VAR16 = VAR22;
break;

case '':

VAR16 = VAR23;
break;

default:



FUN6 ((VAR24,
""
"", VAR14));
FUN4 (VAR20);
}



VAR11 = FUN7 (&VAR14[2], &VAR13);
if (FUN8 (VAR11))
{


FUN6 ((VAR24,
""
"", VAR14));
FUN4 (VAR20);
}



VAR12 = (VAR25) VAR13;
VAR10 = FUN9 (VAR12, VAR8->VAR26);
if (!VAR10)
{

FUN4 (VAR20);
}

if ((FUN10 (VAR10->VAR27) ==
VAR28) ||
(FUN10 (VAR10->VAR27) ==
VAR29))
{


FUN4 (VAR20);
}

if (FUN10 (VAR10->VAR27) ==
VAR30)
{

if (VAR16 != (VAR10->VAR27 & VAR31))
{
FUN11 ((VAR32,
"",
VAR12, VAR12, VAR12));
}
FUN4 (VAR20);
}



(void) FUN12 (VAR10, VAR33);


VAR10->VAR27 &= ~(VAR34);
VAR10->VAR27 |= (VAR35) (VAR16 | VAR30);
VAR10->VAR36.VAR6 = VAR6;

FUN6 ((VAR24,
"",
VAR14, VAR12));
FUN4 (VAR20);
}