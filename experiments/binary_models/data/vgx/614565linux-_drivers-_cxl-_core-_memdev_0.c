static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
struct VAR3 *VAR4 =
FUN2(VAR1->VAR5, FUN3(*VAR4), VAR6);

FUN4(&VAR4->VAR7);
VAR2->VAR8 = VAR4;

return 0;
}