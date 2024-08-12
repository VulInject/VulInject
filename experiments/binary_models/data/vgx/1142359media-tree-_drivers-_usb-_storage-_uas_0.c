static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = (void *)VAR2;
struct VAR5 *VAR6 = FUN2(VAR4, struct VAR5, VAR7);
struct VAR8 *VAR9 = VAR6->VAR10->VAR11;

FUN3(&VAR9->VAR12);
VAR2->VAR13 |= VAR14;
FUN4(&VAR9->VAR15);
}