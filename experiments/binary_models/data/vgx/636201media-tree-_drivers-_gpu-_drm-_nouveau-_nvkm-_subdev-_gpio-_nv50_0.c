int
FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6.VAR5;
u32 VAR7, VAR8;

if (FUN2(VAR3, &VAR7, &VAR8))
return -VAR9;

return !!(FUN3(VAR5, VAR7) & (4 << VAR8));
}