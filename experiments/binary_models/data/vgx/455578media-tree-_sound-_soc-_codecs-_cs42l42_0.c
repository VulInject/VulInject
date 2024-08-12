static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = FUN2(VAR1);

FUN3(&VAR1->VAR4);


if (VAR3->VAR5)
FUN4(VAR3->VAR5, 0);

return 0;
}