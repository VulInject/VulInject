FUN1 (VAR1            *VAR2,
VAR3 *VAR4)
{
VAR5   *VAR6;
VAR7   *VAR8;
GimpIconType  VAR9;
gint          VAR10;
VAR11        *VAR12;
VAR13       *VAR14;

if (! FUN2 (VAR2, VAR15))
return VAR15;

if (! FUN2 (VAR2, VAR16) ||
FUN3 (VAR2->VAR17.VAR18) != VAR19)
return VAR16;

VAR6 = FUN4 (VAR20);

switch (FUN5 (VAR2))
{
case VAR21:
FUN6 (VAR2);

VAR8 = FUN7 (FUN8 (VAR6),
VAR2->VAR17.VAR22);
if (!VAR8)
VAR8 = FUN9 (FUN8 (VAR6),
VAR2->VAR17.VAR22);

if (!VAR8)
{
FUN10 (VAR2,
FUN11(""),
VAR2->VAR17.VAR22);
return VAR23;
}
break;

case VAR24:
FUN6 (VAR2);

VAR8 = FUN12 (VAR6,
(VAR25) VAR2->VAR17.VAR26);

if (!VAR8)
{
FUN10 (VAR2,
FUN11(""),
(VAR27) VAR2->VAR17.VAR26);
return VAR23;
}
break;

default:
return VAR21;
}

VAR9 = VAR8->VAR17;

if (! FUN13 (VAR2, &VAR10))
return VAR24;

switch (VAR9)
{
case VAR28:
case VAR29:
VAR10 = -1;

if (! FUN14 (VAR2, &VAR12))
return VAR30;

VAR14 = (VAR13 *) VAR12;
break;

case VAR31:
if (VAR10 < 0)
return VAR30;

if (! FUN15 (VAR2, VAR10, &VAR14))
return VAR30;
break;
}

FUN16 (VAR4, VAR9,
VAR14, VAR10,
NULL);

if (! FUN2 (VAR2, VAR32))
return VAR32;

return VAR15;
}