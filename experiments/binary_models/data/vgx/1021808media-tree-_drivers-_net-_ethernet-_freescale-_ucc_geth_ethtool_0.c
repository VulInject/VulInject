static void
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
FUN2(VAR4->VAR5, VAR6, sizeof(VAR4->VAR5));
FUN2(VAR4->VAR7, VAR8, sizeof(VAR4->VAR7));
FUN2(VAR4->VAR9, "", sizeof(VAR4->VAR9));
FUN2(VAR4->VAR10, "", sizeof(VAR4->VAR10));
}