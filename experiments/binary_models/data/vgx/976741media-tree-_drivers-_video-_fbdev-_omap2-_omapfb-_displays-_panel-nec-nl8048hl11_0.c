static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR1 *VAR5 = VAR4->VAR5;

if (!FUN3(VAR2))
return;

VAR5->VAR6.VAR7->FUN4(VAR5, VAR2);
}