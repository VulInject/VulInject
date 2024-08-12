static VAR1 *
FUN1(char *VAR2, int VAR3, char VAR4)
{
VAR1	   *VAR5;

VAR5 = (VAR1 *) FUN2(VAR6 + VAR3 + 1);
FUN3(VAR5, VAR6 + VAR3 + 1);

*FUN4(VAR5) = VAR4;

if (VAR2 && VAR3 > 0)
memcpy(FUN4(VAR5) + 1, VAR2, VAR3);

return VAR5;
}