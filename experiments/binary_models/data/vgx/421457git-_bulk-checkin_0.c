static void FUN1(struct VAR1 *VAR2,
unsigned VAR3)
{
if (!(VAR3 & VAR4) || VAR2->VAR5)
return;

VAR2->VAR5 = FUN2(&VAR2->VAR6);
FUN3(&VAR2->VAR7);


VAR2->VAR8 = FUN4(VAR2->VAR5, 1);
if (!VAR2->VAR8)
FUN5("");
}