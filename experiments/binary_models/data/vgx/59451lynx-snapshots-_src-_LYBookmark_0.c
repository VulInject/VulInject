int FUN1(void)
{
int VAR1;


if (VAR2 == VAR3 || FUN2() == VAR4) {
if (VAR5[0])	
return (0);
else
return (-1);
}


if (VAR2 == VAR6 && (VAR7 == VAR8)) {
FUN3(VAR9);
VAR10:
VAR1 = FUN4();
if (VAR11) {
VAR11 = VAR4;
VAR1 = VAR12;
}
if (FUN5(VAR1, VAR13) || FUN6(VAR1)) {

return (-2);
}
if (FUN5(VAR1, VAR14)) {

FUN7();
FUN8();
goto VAR10;
}
if (FUN5(VAR1, VAR15)) {

return (VAR5[0] ? 0 : -1);
}
switch (VAR1) {
case '':

return (FUN9());

default:

if ((VAR1 = FUN10(VAR1)) < 0) {
goto VAR10;
}
}

return (VAR5[VAR1] ? VAR1 : -1);
} else {

return (FUN9());
}
}