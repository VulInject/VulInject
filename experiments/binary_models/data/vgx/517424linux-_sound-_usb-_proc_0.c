static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
FUN2(&VAR2->mutex);
if (VAR4->VAR7) {
FUN3(VAR6, "");
if (VAR4->VAR8) {
FUN3(VAR6, "", VAR4->VAR8->VAR9);
FUN3(VAR6, "", VAR4->VAR8->VAR10);
}
FUN4(VAR4, VAR4->VAR11, VAR4->VAR12, VAR6);
} else {
FUN3(VAR6, "");
}
FUN5(&VAR2->mutex);
}