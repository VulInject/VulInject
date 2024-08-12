static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &(VAR2->VAR4);
struct VAR5 *VAR6 = FUN2(VAR4);
FUN3(VAR6);
return 0;
}