void FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);

if (!VAR6)
return;

FUN3(&VAR6->VAR7.VAR8, &VAR4->VAR4);
FUN4(VAR6);
}