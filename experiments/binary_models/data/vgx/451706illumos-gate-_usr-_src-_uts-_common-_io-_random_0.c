static int
FUN1(dev_t VAR1, short VAR2, int VAR3, short *VAR4,
struct VAR5 **VAR6)
{
switch (FUN2(VAR1)) {
case VAR7:
*VAR4 = VAR2 & (VAR8 | VAR9 | VAR10);


if ((*VAR4 == 0 && !VAR3) || (VAR2 & VAR11))
*VAR6 = &VAR12;

break;
case VAR13:
FUN3(VAR2, VAR3, VAR4, VAR6);
break;
default:
return (VAR14);
}

return (0);
}