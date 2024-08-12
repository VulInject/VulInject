char *FUN1(int VAR1, int *VAR2)
{
int VAR3 = FUN2(VAR1, VAR4, sizeof(VAR4),
VAR5);
if (VAR2)
*VAR2 = VAR3;
return (VAR3 > 0) ? VAR4 : NULL;
}