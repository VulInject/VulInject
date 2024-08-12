void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;

if (!VAR4)
return;

FUN2(&VAR4->VAR5);
FUN3(VAR2);
VAR2->VAR4 = NULL;
FUN4(VAR4);
}