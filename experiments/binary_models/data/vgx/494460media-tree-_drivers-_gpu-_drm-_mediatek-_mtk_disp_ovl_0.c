static void FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3,
void *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = VAR4;

FUN3(VAR8, &VAR6->VAR9);
}