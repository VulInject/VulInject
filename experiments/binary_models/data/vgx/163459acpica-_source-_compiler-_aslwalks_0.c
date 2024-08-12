FUN1 (
VAR1       *VAR2,
UINT32                  VAR3,
void                    *VAR4)
{
const VAR5  *VAR6;
UINT32                  VAR7;
UINT32                  VAR8;
UINT32                  VAR9;
UINT32                  VAR10;
UINT32                  VAR11;
UINT32                  VAR12;
VAR1       *VAR13;
UINT32                  VAR14;


switch (VAR2->VAR15.VAR16)
{
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:
case VAR25:



return (VAR26);

default:

break;
}

VAR6 = FUN2 (VAR2->VAR15.VAR16);
if (!VAR6)
{
return (VAR26);
}

VAR13 = VAR2->VAR15.VAR27;
VAR12 = VAR6->VAR28;
VAR7 = VAR6->VAR29;




if (((VAR12 == VAR30) && (VAR2->VAR15.VAR16 != VAR31)) ||
((VAR12 == VAR32) && (VAR6->VAR33 & VAR34)))
{
if (VAR2->VAR15.VAR35->VAR15.VAR16 == VAR36)
{
FUN3 (VAR37, VAR38, VAR2, NULL);
}
}


switch (VAR2->VAR15.VAR16)
{
case VAR39:
case VAR36:
case VAR40:

if (VAR13->VAR15.VAR41 == VAR42)
{


if (FUN4 (VAR13))
{
return (VAR26);
}



VAR9 = FUN5 (VAR43);
if (VAR2->VAR15.VAR16 == VAR40)
{
VAR9 = 0xFFFFFFFF;
}

VAR10 = FUN6 (VAR13);
if (VAR10 == VAR44)
{
return (VAR26);
}

FUN7 (VAR2, VAR6, VAR13,
VAR9, VAR10);
}
return (VAR26);

case VAR45:

return (VAR26);

default:

break;
}



if (VAR7 == VAR46)
{
return (VAR26);
}


switch (VAR2->VAR15.VAR16)
{


case VAR47:

VAR12 = VAR48;
VAR13 = VAR13->VAR15.VAR49;
VAR13 = VAR13->VAR15.VAR49;
break;



case VAR50:

VAR12 = VAR48;
VAR13 = VAR13->VAR15.VAR49;
VAR13 = VAR13->VAR15.VAR49;
break;



case VAR51:

VAR12 = VAR48;
VAR13 = VAR13->VAR15.VAR49;
break;



case VAR52:
case VAR53:
case VAR54:



if ((VAR13->VAR15.VAR41 == VAR55) ||
(VAR13->VAR15.VAR41 == VAR56))
{
return (VAR26);
}
break;



case VAR57:

if (VAR13->VAR15.VAR49->VAR15.VAR16 == VAR58)
{
return (VAR26);
}
break;

default:
break;
}

switch (VAR12)
{
case VAR48:
case VAR32:
case VAR59:
case VAR60:



VAR8 = 0;
while ((VAR14 = FUN8 (VAR7)))
{
VAR8 <<= VAR61;
VAR8 |= VAR14;
FUN9 (VAR7);
}



while ((VAR14 = FUN8 (VAR8)))
{


VAR9 = FUN5 (VAR14);

if (!VAR13)
{
FUN3 (VAR37, VAR62, VAR2,
"");
FUN10 ();
}



VAR10 = FUN6 (VAR13);
if (VAR10 == VAR44)
{
goto VAR63;
}



switch (VAR14)
{
case VAR64:

if (VAR13->VAR15.VAR41 == VAR65)
{


VAR10 = VAR9;
break;
}

VAR66;

case VAR67:

if (VAR13->VAR15.VAR41 == VAR55)
{

if ((VAR13->VAR15.VAR68->VAR69 == VAR70) ||
(VAR13->VAR15.VAR68->VAR69 == VAR71))
{
FUN3 (VAR37, VAR72,
VAR13, NULL);
}
else
{
FUN3 (VAR37, VAR73,
VAR13, NULL);
}
}
break;



case VAR74:            
case VAR75:
case VAR76:
case VAR77:

switch (VAR13->VAR15.VAR41)
{
case VAR78:
case VAR79:
case VAR80:
case VAR81:
case VAR82:
case VAR83:
case VAR84:
case VAR85:





break;

case VAR86:
case VAR87:
case VAR88:
case VAR89:
case VAR90:
case VAR91:
case VAR92:





break;

case VAR93:
case VAR94:
case VAR95:
default:

break;
}
break;
case VAR43:
default:

break;
}




VAR11 = VAR10 & VAR9;

if (VAR13->VAR15.VAR41 == VAR42)
{
if (FUN4 (VAR13))
{
return (VAR26);
}



FUN7 (VAR2, VAR6, VAR13,
VAR9, VAR10);
}


else if (!VAR11)
{


FUN11 (VAR96, VAR10);
FUN11 (VAR97, VAR9);

sprintf (VAR98, "",
VAR96, VAR6->VAR99, VAR97);

FUN3 (VAR37, VAR73,
VAR13, VAR98);
}

VAR63:
VAR13 = VAR13->VAR15.VAR49;
FUN9 (VAR8);
}
break;

default:

break;
}

return (VAR26);
}