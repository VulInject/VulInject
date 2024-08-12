static int FUN1(int VAR1, int VAR2)
{
unsigned int VAR3, VAR4;

switch (VAR1) {
case VAR5:
VAR3 = 13;
break;
case VAR6:
VAR3 = 14;
break;
default:
return -VAR7;
}

VAR4 = VAR3 * VAR2;

return FUN2(VAR4, 8);
}