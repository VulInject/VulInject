static int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
char	*VAR5;
char	*VAR6 = NULL;

VAR6 = FUN2(VAR4, VAR7);
if (VAR6 == NULL)
return (VAR8);

VAR9 = 0;
VAR2->VAR10 = FUN3(VAR6, &VAR5, 0);
if (VAR9 != 0)
return (VAR11);
if (*VAR5 != '')
return (VAR12);

return (0);
}