FUN1 (
VAR1       *VAR2,
UINT32                  VAR3,
void                    *VAR4)
{



switch (VAR2->VAR5.VAR6)
{
case VAR7:
case VAR8:
case VAR9:
case VAR10:

FUN2 (VAR2, VAR3);
break;

case VAR11:

FUN3 (VAR2, VAR3, 2);
break;

case VAR12:
case VAR13:

FUN3 (VAR2, VAR3, 4);
break;

case VAR14:
case VAR15:

FUN3 (VAR2, VAR3, 8);
break;

case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20:

FUN3 (VAR2, VAR3, 16);
break;

case VAR21:

FUN4 (VAR22,
"", VAR2->VAR5.VAR23.VAR24);
return (VAR25);

case VAR26:

FUN4 (VAR22,
"", VAR2->VAR5.VAR27);
return (VAR25);

default:

FUN5 (VAR2, VAR3);
break;
}



FUN4 (VAR22, VAR28,
VAR2->VAR5.VAR6, VAR2->VAR5.VAR29,
VAR2->VAR5.VAR30, VAR2->VAR5.VAR31,
VAR2->VAR5.VAR32, VAR2->VAR5.VAR33);

FUN6 (VAR2->VAR5.VAR29, VAR22);
FUN4 (VAR22, "");
return (VAR25);
}