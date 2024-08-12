static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7 =
FUN2(VAR3, struct VAR6, VAR5);

FUN3(VAR2, "", VAR7->VAR8);
FUN4(VAR5, &VAR7->VAR9) {
struct VAR10 *VAR11 =
FUN2(VAR5, struct VAR10, VAR5);
FUN3(VAR2, "", VAR11->VAR12, VAR11->VAR13);
}
return 0;
}