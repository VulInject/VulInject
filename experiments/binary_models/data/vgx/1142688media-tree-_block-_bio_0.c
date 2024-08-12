static inline bool FUN1(struct VAR1 *VAR1)
{

if (!FUN2(VAR1, VAR2))
return true;

FUN3(FUN4(&VAR1->VAR3) <= 0);

if (FUN5(&VAR1->VAR3)) {
FUN6(VAR1, VAR2);
return true;
}

return false;
}