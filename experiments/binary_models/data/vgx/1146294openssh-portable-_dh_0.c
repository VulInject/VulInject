VAR1 *
FUN1(VAR2 *VAR3, VAR2 *VAR4)
{
VAR1 *VAR5;

if ((VAR5 = FUN2()) == NULL)
return NULL;
if (!FUN3(VAR5, VAR4, NULL, VAR3)) {
FUN4(VAR5);
return NULL;
}

return VAR5;
}