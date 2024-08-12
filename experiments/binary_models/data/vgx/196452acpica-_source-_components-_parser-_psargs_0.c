FUN1 (
VAR1        *VAR2)
{
VAR3                   *VAR4;
VAR5       *VAR6;
VAR5       *VAR7 = NULL;
UINT16                  VAR8;
UINT32                  VAR9;
UINT8                   VAR10;
UINT8                   VAR11;
UINT8                   VAR12;
UINT32                  VAR13;
VAR3                   *VAR14;
UINT32                  VAR15;


FUN2 (VAR16);


FUN3 (VAR2);
VAR4 = VAR2->VAR4;



switch (FUN4 (VAR2->VAR4))
{
case VAR17:

VAR8 = VAR18;
VAR2->VAR4++;
break;

case VAR19:

VAR8 = VAR20;
VAR2->VAR4++;
break;

case VAR21:

VAR8 = VAR22;
VAR2->VAR4++;
break;

case VAR23:

VAR8 = VAR24;
VAR2->VAR4++;
break;

default:

VAR8 = VAR25;
break;
}



VAR6 = FUN5 (VAR8, VAR4);
if (!VAR6)
{
FUN6 (NULL);
}



FUN3 (VAR2);
switch (VAR8)
{
case VAR25:



FUN7 (&VAR9, VAR2->VAR4);
FUN8 (VAR6, VAR9);
VAR2->VAR4 += VAR26;


FUN3 (VAR2);


if (VAR6->VAR27.VAR28)
{
VAR6->VAR27.VAR29 = VAR6->VAR27.VAR28;
}
VAR6->VAR27.VAR28  = VAR30;
VAR30 = NULL;



VAR6->VAR27.VAR31.VAR32 = FUN9 (VAR2);
break;


case VAR18:



VAR6->VAR27.VAR31.VAR32 = FUN9 (VAR2);
break;


case VAR20:
case VAR24:





VAR10 = FUN4 (VAR2->VAR4);
VAR2->VAR4++;
VAR11 = FUN4 (VAR2->VAR4);
VAR2->VAR4++;

VAR6->VAR27.VAR31.VAR33 = (VAR3) VAR10;
VAR6->VAR27.VAR31.VAR33 |= (VAR34) (VAR11 << 8);



if (VAR8 == VAR24)
{
VAR12 = FUN4 (VAR2->VAR4);
VAR2->VAR4++;

VAR6->VAR27.VAR31.VAR33 |= (VAR35) (VAR12 << 16);
}
break;


case VAR22:


VAR4 = VAR2->VAR4;
if (FUN4 (VAR2->VAR4) == VAR36)
{
VAR2->VAR4++;

FUN3 (VAR2);
VAR14 = VAR2->VAR4;
VAR13 = FUN9 (VAR2);
VAR14 += VAR13;

FUN3 (VAR2);
if (VAR2->VAR4 < VAR14)
{


VAR7 = FUN5 (VAR37, VAR4);
if (!VAR7)
{
FUN10 (VAR6);
FUN6 (NULL);
}



VAR8 = FUN4 (VAR2->VAR4);
VAR2->VAR4++;

FUN3 (VAR2);
switch (VAR8)
{
case VAR38:       

VAR15 = FUN4 (VAR2->VAR4);
VAR2->VAR4 += 1;
break;

case VAR39:       

VAR15 = FUN11 (VAR2->VAR4);
VAR2->VAR4 += 2;
break;

case VAR40:      

VAR15 = FUN12 (VAR2->VAR4);
VAR2->VAR4 += 4;
break;

default:

VAR15 = 0;
break;
}



FUN3 (VAR2);
VAR7->VAR41.VAR31.VAR32 = VAR15;
VAR7->VAR41.VAR42 = VAR2->VAR4;
}



VAR2->VAR4 = VAR14;
}
else
{
VAR7 = FUN5 (VAR43, VAR4);
if (!VAR7)
{
FUN10 (VAR6);
FUN6 (NULL);
}



VAR7->VAR27.VAR31.VAR9 = FUN13 (VAR2);
}



FUN14 (VAR6, VAR7);
break;


default:


break;
}

FUN6 (VAR6);
}