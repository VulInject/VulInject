static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5)
{
FUN2(VAR5, &VAR4->VAR6);
if (!VAR4->VAR6) {
FUN3(VAR2, VAR4);
FUN4(VAR4->VAR7);
VAR4->VAR7 = NULL;
}
}