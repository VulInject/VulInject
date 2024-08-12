static int FUN1(int VAR1, int VAR2, int VAR3)
{
int VAR4, VAR5, VAR6, VAR7, VAR8;
char *VAR9 = VAR10.VAR11;
char *VAR12;

VAR5 = -1;
VAR6 = VAR13;
VAR7 = VAR14;
while ((VAR4 = *VAR9++) != 0) {
VAR8 = FUN2(VAR9, &VAR12, 0);
switch(VAR4) {
case '':
++VAR5;
VAR6 = VAR15;
VAR7 = VAR16;
break;
case '':
if (VAR6 != VAR2)
VAR6 = (VAR2 == VAR8) ? VAR8 : VAR13;
VAR7 = VAR16;
break;
case '':
if (VAR7 != VAR3)
VAR7 = (VAR3 == VAR8) ? VAR8 : VAR14;
break;
case '':
if (VAR5 == VAR1 &&
(VAR6 == VAR15 || VAR6 == VAR2) &&
(VAR7 == VAR16    || VAR7 == VAR3))
return VAR8;
break;
case '':
VAR6 = VAR15;
VAR7 = VAR16;
break;
default:
break;
}
VAR9 = VAR12;
}
return VAR17;
}