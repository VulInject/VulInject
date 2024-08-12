static bool FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2->VAR4, &VAR2->VAR5);
if (VAR3) {
FUN3(&VAR2->VAR5);
return false;
}

return true;
}