static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = FUN2(VAR1);

FUN3(VAR3->VAR4, 1);
FUN3(VAR3->VAR5, 1);

FUN4(VAR6);


FUN5(VAR3, VAR7, VAR3->VAR8);

return 0;
}