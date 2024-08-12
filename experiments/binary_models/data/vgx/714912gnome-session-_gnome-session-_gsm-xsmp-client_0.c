FUN1 (VAR1 *VAR2)
{
VAR3 *VAR4;

VAR4 = FUN2 (FUN3 (VAR2), VAR5, NULL);

if (!VAR4 || strcmp (VAR4->VAR6, VAR7) != 0) {
return NULL;
}

return FUN4 (VAR4);
}