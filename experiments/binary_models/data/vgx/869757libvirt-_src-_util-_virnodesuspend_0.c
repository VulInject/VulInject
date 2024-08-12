static int
FUN1(unsigned int VAR1, bool *VAR2)
{
int VAR3 = -1;

*VAR2 = false;

switch (VAR1) {
case VAR4:
VAR3 = FUN2(VAR2);
break;
case VAR5:
VAR3 = FUN3(VAR2);
break;
case VAR6:
VAR3 = FUN4(VAR2);
break;
default:
return VAR3;
}

return VAR3;
}