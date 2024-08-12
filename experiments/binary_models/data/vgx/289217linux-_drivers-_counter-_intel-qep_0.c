static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = &VAR2->VAR6;

FUN3(VAR6);
if (!VAR4->VAR7)
FUN4(VAR6);

FUN5(VAR4, VAR8, 0);
}