FUN1 (VAR1 *VAR2)
{
VAR3 *VAR4 = NULL;
VAR5        *VAR6;

VAR6 = FUN2 (VAR2);
if (VAR6)
{
VAR4 = FUN3 (VAR6);
FUN4 (VAR6);
}

return VAR4;
}