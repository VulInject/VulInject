FUN1 (VAR1       *VAR2,
VAR3            *VAR4,
VAR5 **VAR6)
{
VAR7 *VAR8;

if (VAR4)
*VAR4 = 0;

if (VAR6)
*VAR6 = NULL;

for (VAR8 = VAR2->VAR9.VAR10; VAR8; VAR8 = VAR8->VAR11)
{
VAR12 *VAR13 = VAR8->VAR14;

switch ((int) VAR13->VAR15->VAR16)
{
case VAR17:
if (VAR6)
*VAR6 = (VAR5 *)VAR13;
break;

case VAR18:
if (VAR4)
*VAR4 = ((VAR19 *)VAR13)->VAR20;
break;

default:
break;
}
}
}