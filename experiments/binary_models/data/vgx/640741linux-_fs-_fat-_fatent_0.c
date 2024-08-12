static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

if (FUN3(VAR2) || !FUN4(VAR4))
return;

FUN5(VAR4->VAR5, VAR6);
}