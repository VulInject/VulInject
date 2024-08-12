static int FUN1(char *VAR1)
{
if (FUN2(VAR1, VAR2) == 0)
return 1;

if (FUN2(VAR1, VAR3) == 0)
return 0;

return -1;
}