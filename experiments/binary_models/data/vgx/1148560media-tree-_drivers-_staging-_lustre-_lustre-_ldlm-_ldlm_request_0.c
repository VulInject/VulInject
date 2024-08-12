static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6, void *VAR7)
{
struct VAR8	   *VAR9 = FUN2(VAR2, VAR6);
struct VAR10     *VAR11 = VAR7;

FUN3(FUN4(VAR9), &VAR9->VAR12,
NULL, VAR13,
VAR11->VAR14, VAR11->VAR15);

return 0;
}