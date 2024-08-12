int
FUN1(char **VAR1, char *VAR2, int VAR3)
{
VAR4 *VAR5;
char *VAR6;
int VAR7 = (VAR3 + 3) & ~3;	


VAR5 = (VAR4 *) *VAR1;
*VAR1 += sizeof(*VAR5);
*VAR5 = FUN2(VAR3);

VAR6 = *VAR1;
*VAR1 += VAR7;
bcopy(VAR2, VAR6, VAR3);

return (0);
}