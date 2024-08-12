static int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
int VAR5;
VAR6 *VAR7;
VAR5 = FUN2(VAR2, &VAR7);
if (VAR5 != 0)
return (VAR5);
if (VAR2->VAR8) {
*VAR4 = VAR9;
} else {
switch (VAR7->VAR10->VAR11) {
case VAR12:
*VAR4 = VAR13;
break;
case VAR14:
*VAR4 = VAR15;
break;
default:
return (VAR16);
}
}
return (0);
}