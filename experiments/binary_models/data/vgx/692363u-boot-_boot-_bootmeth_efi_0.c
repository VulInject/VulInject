static int FUN1(char *VAR1, int VAR2)
{
int VAR3;

VAR3 = FUN2();
if (VAR3 < 0)
return VAR3;

snprintf(VAR1, VAR2, "", VAR3);

return 0;
}