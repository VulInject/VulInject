static int FUN1(const char *VAR1, void *VAR2)
{
VAR3 *VAR4 = (VAR3*)VAR2;
VAR3 *VAR5 = FUN2(VAR4, (char*) "", (char*) "", VAR1);
int VAR6 = 0;
if (VAR5)
{
VAR6 = FUN3(VAR5);
FUN4(VAR5);
}

return VAR6;
}