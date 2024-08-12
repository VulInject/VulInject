char *
FUN1(char *VAR1, int VAR2)
{
char *VAR3 = VAR1 + VAR2;
while (VAR3 > VAR1 && *(VAR3 - 1) == '') --VAR3;
return (VAR3);
}