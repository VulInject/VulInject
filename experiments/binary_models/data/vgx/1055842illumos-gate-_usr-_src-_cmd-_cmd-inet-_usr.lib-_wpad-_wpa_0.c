static void
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
VAR2->VAR5--;
if (VAR2->VAR6 == VAR4) {
FUN2(VAR7, "");
VAR2->VAR6 = NULL;
}
free(VAR4);
}