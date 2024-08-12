static int
FUN1(const void *VAR1, const void *VAR2)
{
const char	*VAR3, *VAR4;
int		VAR5;

VAR3 = ((VAR6 *)VAR1)->VAR7;
VAR4 = ((VAR6 *)VAR2)->VAR7;

VAR5 = strcmp(VAR3, VAR4);
if (VAR5 > 0)
return (1);
if (VAR5 < 0)
return (-1);
return (0);
}