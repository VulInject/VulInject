int
FUN1(VAR1 *VAR2, int VAR3)
{
VAR4	*VAR5;

if (VAR2 == NULL || (VAR5 = VAR2->VAR6) == NULL)
return (VAR7);
switch (VAR3) {
case VAR8:
VAR3 = VAR9;
break;
case VAR10:
VAR3 = VAR11;
break;
case VAR12:
VAR3 = VAR13 | VAR11;
break;
default:
return (VAR7);
}
VAR5->VAR3 = VAR3;
return (0);
}