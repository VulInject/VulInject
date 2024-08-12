static void FUN1(struct VAR1 ***VAR2,
struct VAR1 *VAR3, struct VAR1 *VAR4)
{
FUN2(VAR4->VAR5);
FUN3(VAR3->VAR5);
memcpy(VAR3, VAR4, sizeof(*VAR4));
VAR3->VAR6 = **VAR2;
**VAR2 = VAR3;
*VAR2 = &VAR3->VAR6;
}