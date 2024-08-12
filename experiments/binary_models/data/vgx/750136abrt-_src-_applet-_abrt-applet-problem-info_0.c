FUN1 (VAR1 *VAR2)
{
FUN2 (FUN3 (VAR2), -1);

if (VAR2->VAR3 == -1)
{
const char *VAR4;

VAR4 = FUN4 (VAR2->VAR5, VAR6);

VAR2->VAR3 = VAR4 != NULL? FUN5 (VAR4) : -1;
}

return VAR2->VAR3;
}