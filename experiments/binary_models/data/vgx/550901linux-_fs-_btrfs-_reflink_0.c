static bool FUN1(const struct VAR1 *VAR1)
{
if (VAR1->VAR2 & (VAR3 | VAR4))
return true;
if (FUN2(FUN3(VAR1)))
return true;

return false;
}