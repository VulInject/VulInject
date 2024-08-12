int
FUN1(int VAR1, struct VAR2 *VAR3, struct VAR4 *VAR4)
{
switch (VAR4->VAR5.VAR6) {
case VAR7:
FUN2(VAR8, VAR4);
break;
case VAR9:
FUN3(VAR8, VAR4);
break;
case VAR10:
case VAR11:
FUN4();
break;
case VAR12:
FUN5(VAR8, VAR4);
break;
case VAR13:
return (FUN6(VAR4));
default:
return (-1);
}

return (0);
}