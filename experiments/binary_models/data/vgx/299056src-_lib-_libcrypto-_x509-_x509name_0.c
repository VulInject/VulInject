int
FUN1(VAR1 *VAR2, int VAR3, char *VAR4, int VAR5)
{
VAR6 *VAR7;

VAR7 = FUN2(VAR3);
if (VAR7 == NULL)
return (-1);
return (FUN3(VAR2, VAR7, VAR4, VAR5));
}