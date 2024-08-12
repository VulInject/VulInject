static bool FUN1(struct VAR1 *VAR2,
struct VAR1 *VAR3)
{
if (VAR2->VAR4 != VAR3->VAR4 || VAR2->VAR5 != VAR3->VAR5)
return false;

return !VAR2->VAR5 ||
!memcmp(FUN2(VAR2), FUN2(VAR3), VAR2->VAR5);
}