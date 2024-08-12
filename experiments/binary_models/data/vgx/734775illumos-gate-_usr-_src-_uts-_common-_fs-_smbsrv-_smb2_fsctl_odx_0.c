static int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
int VAR5, VAR6;
int VAR7 = VAR2->VAR8;
int VAR9 = VAR7 + VAR10;

if (VAR4->VAR11 > VAR12)
return (-1);


VAR5 = FUN2(
VAR2, "",
FUN3(VAR4->VAR13),
0, 
FUN4(VAR4->VAR11));
if (VAR5 != 0)
return (VAR5);

switch (VAR4->VAR13) {
case VAR14:

break;
case VAR15:
VAR5 = FUN5(VAR2,
&VAR4->VAR16.VAR17);
break;
default:
FUN6(0);
return (-1);
}


if (VAR2->VAR8 < VAR9) {
VAR6 = VAR9 - VAR2->VAR8;
(void) FUN2(VAR2, "", VAR6);
}
FUN6(VAR2->VAR8 == VAR9);

return (VAR5);
}