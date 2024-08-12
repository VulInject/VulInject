int FUN1(void)
{
char *VAR1;
long VAR2 = 0;

VAR1 = FUN2("");

if (VAR1)
VAR2 = FUN3(VAR1, NULL, 0);

if ((VAR2 & VAR3) == 0)
FUN4(VAR4);

return 0;
}