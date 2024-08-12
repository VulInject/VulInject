FUN1 (VAR1 *VAR2)
{
unsigned int VAR3;
switch (VAR2->VAR4->VAR5)
{
case VAR6:
return FUN2 (VAR2);

case VAR7:
case VAR8:
case VAR9:
case VAR10:
return FUN3 (VAR2);

case VAR11:
return FUN4 (VAR2);

case VAR12:
case VAR13:
VAR3 = FUN5 (VAR14, VAR2->VAR3, 0);
return (VAR3 == FUN5 (VAR15, VAR2->VAR3, 0)
&& VAR3 == FUN5 (VAR16, VAR2->VAR3, 0));

case VAR17:
return (FUN5 (VAR18, VAR2->VAR3, 0)
== FUN5 (VAR19, VAR2->VAR3, 0));

case VAR20:

VAR3 = FUN6 (VAR2->VAR3, 0, 2, VAR21, VAR22);
return VAR3 > 0 && VAR3 <= 16 && VAR3 == (VAR3 & -VAR3);

case VAR23:
return (FUN5 (VAR24, VAR2->VAR3, 0)
== FUN5 (VAR19, VAR2->VAR3, 0));

case VAR25:

VAR3 = FUN6 (VAR2->VAR3, 0, 2, VAR21, VAR22);
return VAR3 > 0 && VAR3 != (VAR3 & -VAR3);

case VAR26:
return (FUN5 (VAR27, VAR2->VAR3, 0)
== FUN5 (VAR15, VAR2->VAR3, 0));

case VAR28:
case VAR29:
return (FUN5 (VAR14, VAR2->VAR3, 0)
== FUN5 (VAR15, VAR2->VAR3, 0));

case VAR30:
case VAR31:
return (FUN5 (VAR15, VAR2->VAR3, 0)
== FUN5 (VAR16, VAR2->VAR3, 0));

default:
return 0;
}
}