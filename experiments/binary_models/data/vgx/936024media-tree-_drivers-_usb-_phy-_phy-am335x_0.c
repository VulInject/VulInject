static int FUN1(struct VAR1 *VAR2)
{
struct VAR3	*VAR4 = FUN2(VAR2);
struct VAR5	*VAR6 = FUN3(VAR4);

FUN4(VAR6->VAR7, VAR6->VAR8, VAR6->VAR9, true);

if (FUN5(VAR2))
FUN6(VAR6->VAR7, VAR6->VAR8, false);

return 0;
}