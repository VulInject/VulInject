static inline bool FUN1(struct VAR1 *VAR2)
{
u64 VAR3;

if (FUN2(VAR4, &VAR3))
return false;

if (VAR3 == VAR2->VAR3)
return true;

return false;
}