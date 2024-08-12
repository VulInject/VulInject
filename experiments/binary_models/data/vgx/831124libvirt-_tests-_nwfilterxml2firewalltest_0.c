static VAR1 *
FUN1(VAR1 *VAR2,
VAR1 *VAR3)
{
FUN2(VAR1) VAR4 = FUN3(VAR5);

if (FUN4(VAR2, VAR4) < 0)
return NULL;

if (FUN4(VAR3, VAR4) < 0)
return NULL;

return FUN5(&VAR4);
}