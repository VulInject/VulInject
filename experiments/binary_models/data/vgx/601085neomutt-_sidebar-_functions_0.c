bool FUN1(struct VAR1 *VAR2)
{
struct VAR3 **VAR4 = NULL, **VAR5 = NULL;
FUN2(VAR4, &VAR2->VAR6, VAR2->VAR7)
{
if (!(*VAR4)->VAR8)
VAR5 = VAR4;
}

if (VAR5)
{
VAR2->VAR7 = FUN3(&VAR2->VAR6, VAR5);
return true;
}

return false;
}