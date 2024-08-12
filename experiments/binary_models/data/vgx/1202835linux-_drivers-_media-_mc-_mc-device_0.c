void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5.VAR4;

if (VAR4 == NULL)
return;

FUN2(&VAR4->VAR6);
FUN3(VAR2);
FUN4(&VAR4->VAR6);
}