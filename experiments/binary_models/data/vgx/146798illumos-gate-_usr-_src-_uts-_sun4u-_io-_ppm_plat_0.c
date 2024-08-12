static int
FUN1(VAR1 *VAR2, int VAR3)
{
char *VAR4 = "";
VAR5 *VAR6;
int VAR7 = VAR3 - 1;
int VAR8 = 0;

VAR6 = FUN2(VAR2, VAR9);
for (; VAR6 && (VAR6->VAR10 == VAR9); VAR6 = VAR6->VAR11) {
switch (VAR6->VAR12) {
case VAR13:
VAR8 = FUN3(VAR6->VAR14, VAR6->VAR15.VAR16.VAR17,
(VAR18)VAR7, VAR19 | VAR20, VAR21, NULL);
if (VAR8)
return (VAR8);
break;

default:
FUN4(VAR22, ("",
VAR4, VAR6->VAR12))
return (-1);
}
}
return (VAR8);
}