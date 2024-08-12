static int
FUN1(const char *VAR1, const char *VAR2, int VAR3, int VAR4)
{
int		VAR5;
const char	*VAR6;

VAR5 = FUN2(VAR1, VAR3, VAR4, &VAR6);
if (VAR6 != NULL)
FUN3(1, "", VAR1, VAR2, VAR6);
return (VAR5);
}