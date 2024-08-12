static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

if (VAR2->VAR4)
FUN2(VAR2, VAR2->VAR4);

VAR4 = FUN3(sizeof(*VAR4), VAR5);
if (FUN4(!VAR4))
return;

FUN5(VAR2, &VAR4->VAR6);
}