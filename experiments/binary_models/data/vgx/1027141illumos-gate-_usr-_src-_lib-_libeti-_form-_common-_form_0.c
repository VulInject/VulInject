static char *
FUN1(char *VAR1, int VAR2, int VAR3)
{
char *VAR4 = VAR1 + VAR3;
while (VAR4 > VAR1 && *(VAR4 - 1) == VAR2) --VAR4;
return (VAR4);
}