int
FUN1(VAR1 *VAR2)
{
VAR3 *VAR4;

VAR4 = FUN2(VAR2, FUN3());
if (VAR4 == NULL)
return (0);
FUN4(VAR4, NULL, VAR5);

VAR4 = FUN2(VAR2, FUN5());
if (VAR4 == NULL)
return (0);
FUN6(VAR4, NULL, VAR5);


FUN7();

return (1);
}