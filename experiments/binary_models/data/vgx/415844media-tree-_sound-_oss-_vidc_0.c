static short FUN1(int VAR1, short VAR2)
{
switch (VAR2) {
default:
VAR2 = 2;
case 1:
case 2:
VAR3 = VAR2;
FUN2(VAR4, VAR3);
case 0:
break;
}
return VAR3;
}