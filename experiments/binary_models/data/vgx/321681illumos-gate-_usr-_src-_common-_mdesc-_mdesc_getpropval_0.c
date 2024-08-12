int
FUN1(VAR1 *VAR2, mde_cookie_t VAR3, char *VAR4, VAR5 *VAR6)
{
mde_str_cookie_t VAR7;
VAR8	*VAR9;
mde_cookie_t	VAR10;

VAR9 = (VAR8 *)VAR2;

if (VAR3 == VAR11) {
return (-1);
}

VAR7 = FUN2(VAR2, VAR4);
if (VAR7 == VAR12) {
return (-1);
}

VAR10 = FUN3(VAR9, VAR3, VAR7, VAR13);

if (VAR10 != VAR11) {
VAR14 *VAR15;
VAR15 = &(VAR9->VAR15[(int)VAR10]);

*VAR6 = FUN4(VAR15);
return (0);
}

return (-1);	
}