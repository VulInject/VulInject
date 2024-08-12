extern void FUN1(void *VAR1, void *VAR2,
VAR3 *VAR4, int VAR5)
{
VAR6 *VAR7 = (VAR6 *)VAR1;
VAR8 *VAR9 = (VAR8 *)VAR1;
VAR10 *VAR11 = (VAR10 *)VAR2;


switch(VAR5) {
case VAR12:
FUN2(NULL, VAR11, VAR13, VAR14);
break;
case VAR15:
FUN3(VAR7, VAR4, VAR11, VAR16);
break;
case VAR17:
FUN2(VAR9, VAR11,
VAR9->VAR18, VAR14);
break;
default:
FUN4("", VAR5);
}
}