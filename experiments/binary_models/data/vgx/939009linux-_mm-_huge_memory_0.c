static inline bool FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR2;

if (!FUN2(VAR1))
return false;

VAR2 = FUN3(VAR1);
return FUN4(&VAR2->VAR1) ||
VAR2->VAR3 == VAR4;
}