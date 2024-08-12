FUN1 (enum mstate VAR1)
{
VAR2 * VAR3;
const char * VAR4;
int VAR5;

if (VAR6 == VAR1)

return;

VAR6 = VAR1;

switch (VAR1)
{
case VAR7:
VAR4 = "";
VAR5 = VAR8;
break;
case VAR9:
VAR4 = "";
VAR5 = VAR8;
break;
case VAR10:
VAR4 = "";
VAR5 = VAR8;
break;
case VAR11:
return;
default:
FUN2 ();
}

FUN3 (VAR12)->VAR13.VAR6 = VAR1;

VAR3 = FUN4 (VAR4, VAR12, (VAR14) FUN5 (), VAR15);
FUN6 (VAR3);
FUN7 (VAR3)->VAR16 |= VAR5 | VAR17;

switch (VAR1)
{
case VAR9:
FUN8 (VAR3, 0);
FUN9 (VAR3, 0);
FUN10 (VAR3, VAR18);
break;

case VAR10:
FUN8 (VAR3, 1);
FUN9 (VAR3, 1);
FUN10 (VAR3, VAR18);
break;

case VAR7:
default:
return;
}
}