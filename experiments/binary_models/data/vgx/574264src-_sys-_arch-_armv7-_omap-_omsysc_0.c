void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;
struct VAR7 *VAR8 = VAR4;

if (FUN2(VAR8->VAR9, "") < 0 &&
FUN3(VAR8->VAR9, ""))
FUN4(VAR8->VAR9, "");

FUN5(VAR2, &VAR6->VAR10.VAR11, VAR8);
}