static int FUN1(int VAR1)
{
int VAR2 = 0;

if (FUN2(VAR1))
VAR2 = VAR3 + VAR1 * 2;
else if (FUN3(VAR1))
VAR2 = VAR4 + VAR1 * 2;
else
switch (VAR1) {
case VAR5:
VAR2 = VAR6;
break;
case VAR7:
VAR2 = VAR8;
break;
case VAR9:
VAR2 = VAR10;
break;
case VAR11:
VAR2 = VAR12;
break;
case VAR13:
VAR2 = VAR14;
break;
case VAR15:
VAR2 = VAR16;
break;
case VAR17:
VAR2 = VAR18;
break;
case VAR19:
VAR2 = VAR20;
break;
}


return VAR2;
}