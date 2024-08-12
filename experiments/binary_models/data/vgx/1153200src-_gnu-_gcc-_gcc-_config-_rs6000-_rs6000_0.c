FUN1 (rtx VAR1)
{
enum attr_type VAR2;

if (!VAR3)
return 0;

if (!VAR1
|| VAR1 == VAR4
|| FUN2 (VAR1) == VAR5
|| FUN2 (FUN3 (VAR1)) == VAR6
|| FUN2 (FUN3 (VAR1)) == VAR7)
return 0;

VAR2 = FUN4 (VAR1);

switch (VAR2)
{
case VAR8:
case VAR9:
case VAR10:
case VAR11:
case VAR12:
case VAR13:
case VAR14:
return 1;
case VAR15:
case VAR16:
return 2;
case VAR17:
case VAR18:
case VAR19:
case VAR20:
return 4;
default:
if (VAR21 == VAR22
&& FUN5 (VAR1))
return 2;
return 0;
}
}