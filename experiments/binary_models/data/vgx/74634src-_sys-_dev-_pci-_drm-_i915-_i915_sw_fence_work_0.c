void FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
VAR2->VAR4 = VAR4;
FUN2(&VAR2->VAR5, VAR6);
FUN3(&VAR2->VAR7, &VAR8, &VAR2->VAR5, 0, 0);
FUN4(&VAR2->VAR9, VAR10);
FUN5(&VAR2->VAR11, VAR12);
}