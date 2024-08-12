void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2, struct VAR7, VAR9);
struct VAR10 *VAR11 = (struct VAR10 *)VAR6->VAR12;
int VAR13 = VAR11->VAR13;

FUN3(VAR8, VAR13, true);
FUN4(VAR8, VAR13, 0, NULL);
}