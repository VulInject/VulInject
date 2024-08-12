static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR4);
struct VAR7 *VAR8 = VAR6->VAR9;

FUN4(VAR8);

FUN5(&VAR4->VAR10);

return 0;
}