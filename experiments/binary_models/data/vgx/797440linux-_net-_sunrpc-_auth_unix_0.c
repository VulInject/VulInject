static void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2, struct VAR3, VAR4);

FUN3(VAR3->VAR5);
FUN4(VAR3, VAR6);
}