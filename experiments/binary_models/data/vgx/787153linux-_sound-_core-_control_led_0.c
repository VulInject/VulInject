static char *FUN1(char *VAR1, unsigned int *VAR2)
{
unsigned long long VAR3;
if (FUN2(VAR1, 10, &VAR3))
VAR3 = 0;
*VAR2 = VAR3;
return FUN3(VAR1);
}