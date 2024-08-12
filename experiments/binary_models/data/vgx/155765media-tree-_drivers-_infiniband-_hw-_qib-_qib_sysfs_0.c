static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
char *VAR6)
{
struct VAR7 *VAR8 =
FUN2(VAR5, struct VAR7, VAR5);
struct VAR9 *VAR10 =
FUN2(VAR3, struct VAR9, VAR11);
struct VAR12 *VAR13 = &VAR10->VAR14;

return sprintf(VAR6, "", VAR13->VAR15[VAR8->VAR16]);
}