int
FUN1(VAR1 *VAR2, VAR3 *VAR4, char *VAR5)
{
if (!VAR2 || !FUN2(VAR2, VAR6))
return (VAR7);

if (FUN2(VAR2, VAR8))
return	(FUN1(FUN3(VAR2), VAR4, FUN4(VAR5)) ||
FUN1(FUN5(VAR2), VAR4, FUN6(VAR5)));
else
return ((*FUN7(VAR2)) (VAR4, VAR5));
}