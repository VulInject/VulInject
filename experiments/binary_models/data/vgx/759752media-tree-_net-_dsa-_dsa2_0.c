static bool FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3 && !strcmp(VAR2->VAR3, ""))
return true;
else
return !!FUN2(VAR2->VAR4, "", 0);
}