static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR4);

return FUN4(VAR2, VAR6->VAR7,
VAR6->VAR8);
}