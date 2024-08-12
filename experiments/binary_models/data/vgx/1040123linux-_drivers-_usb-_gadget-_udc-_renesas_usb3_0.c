static bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
if (FUN2(VAR4->VAR5) >= 128)
return true;	

FUN3(VAR2, FUN2(VAR4->VAR5));
FUN4(VAR2);

return false;
}