static void
FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
struct VAR6 *VAR7 = FUN2(VAR4);

FUN3(&VAR7->VAR8);
}