FUN1 (CORE_ADDR VAR1)
{
CORE_ADDR VAR2, VAR3;
struct symtab_and_line VAR4;


if (FUN2 (VAR1, NULL, &VAR2, &VAR3))
{
VAR4 = FUN3 (VAR2, 0);
if (VAR4.VAR5 && VAR4.VAR5 < VAR3)
return VAR4.VAR5;
}

return FUN4 (NULL, VAR1, 1);
}