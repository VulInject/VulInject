VAR1 *
FUN1(Index VAR2, VAR3 *VAR4)
{
VAR5   *VAR6;

FUN2(VAR6, VAR4)
{
VAR1 *VAR7 = (VAR1 *) FUN3(VAR6);

if (VAR7->VAR8 == VAR2)
return VAR7;
}

FUN4(VAR9, "");
return NULL;				
}