int
FUN1(int VAR1, char *VAR2, char **VAR3)
{
int VAR4;

VAR4 = FUN2(VAR1, VAR2);
if (VAR4 < 0)
return (VAR4);
*VAR3 = (char *)malloc(VAR4 + 1, VAR5, VAR6);
if (*VAR3 == NULL)
return (-1);

if (VAR4 != 0)
FUN3(VAR1, VAR2, *VAR3);
(*VAR3)[VAR4] = '';
return (0);
}