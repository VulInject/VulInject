static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR7;

FUN3(VAR4);

FUN4(0, VAR6->VAR8 + VAR9);

FUN5(VAR6->VAR10);

return 0;
}