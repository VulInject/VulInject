static int
FUN1(char *VAR1, int VAR2, VAR3 *VAR4)
{
int	VAR5;

if (VAR2 <= 0)
return (1);
VAR5 = fwrite(VAR1, 1, VAR2, VAR4);
if (VAR5 == VAR2)
return (1);
FUN2(VAR6);
switch (FUN3(VAR7
? ""
: "")) {
case VAR8:
case VAR9:
(void) FUN1(VAR1 + VAR5, VAR2 - VAR5, VAR4);
return (1);
case VAR10:
case VAR11:
switch (FUN3("")) {
case VAR8:
case VAR9:
return (0);
case VAR10:
case VAR11:
default:
(void) FUN1(VAR1 + VAR5, VAR2 - VAR5,
VAR4);
return (1);
}
default:
return (0);
}
}