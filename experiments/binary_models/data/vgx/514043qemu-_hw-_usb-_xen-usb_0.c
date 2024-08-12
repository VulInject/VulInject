static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3;

VAR3 = VAR1->VAR3;
memset(VAR1, 0, sizeof(*VAR1));
FUN2(&VAR3->VAR4, VAR1, VAR5);
}