static void FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3 = VAR2->VAR4;
struct VAR5 *VAR6 = FUN2(VAR3);
struct VAR7 *const VAR8 = VAR6->VAR8;

FUN3(0, &VAR8->VAR9);
FUN3(0, &VAR8->VAR10);
}