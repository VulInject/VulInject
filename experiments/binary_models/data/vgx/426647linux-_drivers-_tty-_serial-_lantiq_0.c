static void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2->VAR5);

if (VAR2->VAR6 & VAR7) {
FUN3(&VAR4->VAR5, VAR2->VAR8);
VAR2->VAR8 = NULL;
}
}