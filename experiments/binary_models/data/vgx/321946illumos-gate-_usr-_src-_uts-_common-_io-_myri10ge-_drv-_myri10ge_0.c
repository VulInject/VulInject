static void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;

FUN2(VAR4, sizeof (*VAR4));
FUN3(&VAR4->VAR5, NULL, VAR6,
VAR2->VAR7->VAR8);
VAR4->VAR9 = NULL;
}