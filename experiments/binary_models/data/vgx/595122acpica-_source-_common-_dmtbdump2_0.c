FUN1 (
VAR1       *VAR2)
{
ACPI_STATUS                 VAR3;
VAR4            *VAR5;
VAR6              *VAR7;
VAR8         *VAR9;
VAR10           *VAR11;
VAR10           *VAR12;
UINT32                      VAR13 = VAR2->VAR13;
UINT32                      VAR14 = sizeof (VAR15);
UINT16                      VAR16;
UINT16                      VAR17;
UINT16                      VAR18;
UINT16                      VAR19;
VAR20  *VAR21 = NULL;
UINT32                      VAR22 = 0;




VAR3 = FUN2 (VAR13, 0, VAR2, 0, VAR23);
if (FUN3 (VAR3))
{
return;
}



VAR5 = FUN4 (VAR4, VAR2, VAR14);
while (VAR14 < VAR2->VAR13)
{


FUN5 ("");
VAR3 = FUN2 (VAR2->VAR13, VAR14, VAR5,
VAR5->VAR13, VAR24);
if (FUN3 (VAR3))
{
return;
}

switch (VAR5->VAR25)
{
case VAR26:

VAR11 = VAR27;
break;

case VAR28:

VAR11 = VAR29;
break;

default:
goto VAR30;
}

FUN5 ("");
VAR3 = FUN2 (VAR2->VAR13, 0, VAR5,
VAR5->VAR13, VAR11);
if (FUN3 (VAR3))
{
return;
}

switch (VAR5->VAR25)
{
case VAR26:

VAR22 = sizeof (VAR8);
if (VAR5->VAR31 & VAR32)
{
VAR21 = FUN6 (VAR20,
FUN4 (VAR33, VAR5, sizeof (VAR8)));

VAR3 = FUN2 (VAR2->VAR13, VAR22,
FUN4(VAR33, VAR5, sizeof (VAR8)),
sizeof (VAR20), VAR34);
if (FUN3 (VAR3))
{
return;
}
VAR22 += sizeof (VAR20);

VAR3 = FUN2 (VAR2->VAR13, VAR22,
FUN4(VAR33, VAR5, VAR21->VAR35),
sizeof (VAR4), VAR36);
if (FUN3 (VAR3))
{
return;
}
VAR22 += sizeof (VAR4);

switch (VAR5->VAR25)
{
case VAR37:

VAR12 = VAR38;
break;

case VAR39:

VAR12 = VAR40;
break;

default:
goto VAR30;
}

VAR3 = FUN2 (VAR2->VAR13, VAR22,
FUN4(VAR33, VAR5, VAR21->VAR35),
VAR21->VAR41, VAR12);
VAR22 += VAR21->VAR41;
}



VAR9 = FUN6 (VAR8, VAR5);
VAR16 = VAR9->VAR42;
VAR17 = VAR9->VAR43;

if (VAR17)
{
VAR3 = FUN2 (VAR2->VAR13, VAR22,
FUN4 (VAR33, VAR9, VAR16),
VAR17, VAR44);
if (FUN3 (VAR3))
{
return;
}
VAR22 += VAR17;
}



VAR19 =
VAR9->VAR19;
VAR18 =
VAR9->VAR42 + VAR9->VAR43;

if (VAR19)
{
VAR3 = FUN2 (VAR2->VAR13, 0,
FUN4 (VAR33, VAR9, VAR18),
VAR19, VAR45);
if (FUN3 (VAR3))
{
return;
}
}
break;

case VAR28:



VAR7 = FUN6 (VAR6, VAR5);
VAR16 = VAR7->VAR16;
VAR17 = VAR7->VAR17;

while (VAR17)
{
VAR3 = FUN2 (VAR2->VAR13,
VAR16 + VAR14,
FUN4 (VAR33, VAR7, VAR16),
sizeof (VAR46), VAR47);
if (FUN3 (VAR3))
{
return;
}

VAR16 += sizeof (VAR46);
VAR17 -= sizeof (VAR46);
}



VAR19 = VAR7->VAR19;
VAR18 = VAR7->VAR16 + VAR7->VAR17;

if (VAR19)
{
VAR3 = FUN2 (VAR2->VAR13, 0,
FUN4 (VAR33, VAR7, VAR18),
VAR19, VAR45);
if (FUN3 (VAR3))
{
return;
}
}
break;

default:
goto VAR30;
}

VAR30:


VAR14 += VAR5->VAR13;
VAR5 = FUN4 (VAR4, VAR5,
VAR5->VAR13);
}
}