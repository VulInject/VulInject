static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

VAR4->VAR5 = FUN3(VAR2, "",
0);
FUN4(VAR2, "", VAR4->VAR5);

return 0;
}