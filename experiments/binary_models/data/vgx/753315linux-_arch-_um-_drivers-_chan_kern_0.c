static void FUN1(struct VAR1 *VAR1)
{
FUN2(&VAR1->VAR2);

FUN3(VAR1, 0);

if (VAR1->VAR3->free != NULL)
(*VAR1->VAR3->free)(VAR1->VAR4);

if (VAR1->VAR5 && VAR1->VAR6)
FUN4(VAR1->VAR7);
FUN5(VAR1);
}