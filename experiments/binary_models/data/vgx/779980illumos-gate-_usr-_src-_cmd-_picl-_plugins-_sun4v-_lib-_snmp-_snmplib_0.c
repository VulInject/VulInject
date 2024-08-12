int
FUN1(picl_snmphdl_t VAR1, char *VAR2, int VAR3, int *VAR4,
int *VAR5)
{
struct VAR6 *VAR7 = (struct VAR6 *)VAR1;
VAR8	*VAR9;
int	VAR10;
int	VAR11 = 0;

if (VAR7 == NULL || VAR2 == NULL || VAR4 == NULL)
return (-1);


if ((VAR9 = FUN2(VAR7, VAR2)) == NULL) {
VAR10 = FUN3(VAR7, VAR2, VAR3, VAR4, &VAR11);

if (VAR5)
*VAR5 = VAR11;

return (VAR10);
}


if (FUN4(VAR2, VAR3, VAR4, VAR9->VAR12) == 0)
return (0);


FUN5(VAR7, VAR9->VAR13, VAR9->VAR14, VAR3, VAR9->VAR12, &VAR11);
if (VAR5)
*VAR5 = VAR11;


if (FUN4(VAR2, VAR3, VAR4, VAR9->VAR12) < 0)
return (-1);

return (0);
}