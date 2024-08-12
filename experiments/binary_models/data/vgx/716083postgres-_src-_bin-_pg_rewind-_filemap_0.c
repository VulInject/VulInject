static char *
FUN1(RelFileLocator VAR1, ForkNumber VAR2, BlockNumber VAR3)
{
char	   *VAR4;
char	   *VAR5;

VAR4 = FUN2(VAR1, VAR2);
if (VAR3 > 0)
{
VAR5 = FUN3("", VAR4, VAR3);
FUN4(VAR4);
return VAR5;
}
else
return VAR4;
}