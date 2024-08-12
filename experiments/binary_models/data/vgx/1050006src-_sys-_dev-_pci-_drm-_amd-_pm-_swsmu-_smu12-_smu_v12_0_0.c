int FUN1(struct VAR1 *VAR2, bool VAR3)
{
if (!VAR2->VAR4)
return 0;

if (VAR3)
return FUN2(VAR2, VAR5, NULL);
else
return FUN2(VAR2, VAR6, NULL);
}