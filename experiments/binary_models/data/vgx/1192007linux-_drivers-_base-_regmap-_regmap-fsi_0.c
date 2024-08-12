}
FUN1(VAR1);

struct VAR2 *FUN2(struct VAR3 *VAR4,
const struct VAR5 *VAR6,
struct VAR7 *VAR8, const char *VAR9)
{
const struct VAR10 *VAR11 = FUN3(VAR4, VAR6);

if (FUN4(VAR11))
return FUN5(VAR11);

return FUN6(&VAR4->VAR12, VAR11, VAR4->VAR13, VAR6, VAR8, VAR9);
}