static int
FUN1(char *VAR1, struct VAR2 *VAR3)
{
int VAR4;

VAR4 = FUN2(VAR3);
if (VAR4 == 0)
return (1);
if (VAR4 == VAR5 || VAR4 == VAR6)
return (0);

FUN3(1, "", VAR1, FUN4(VAR3));
}