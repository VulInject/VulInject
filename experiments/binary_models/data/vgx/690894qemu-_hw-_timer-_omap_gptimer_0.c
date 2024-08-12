static VAR1 FUN1(void *VAR2, hwaddr VAR3,
unsigned VAR4)
{
switch (VAR4) {
case 1:
return FUN2(VAR2, VAR3);
case 2:
return FUN3(VAR2, VAR3);
case 4:
return FUN4(VAR2, VAR3);
default:
FUN5();
}
}