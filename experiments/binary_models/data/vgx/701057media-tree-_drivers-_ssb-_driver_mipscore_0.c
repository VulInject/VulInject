static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->VAR4;

if (FUN2(&VAR4->VAR6))
VAR2->VAR7 = FUN3(&VAR4->VAR6, VAR2->VAR8);
else if (FUN4(&VAR4->VAR9))
VAR2->VAR7 = FUN5(&VAR4->VAR9, VAR2->VAR8);
else
VAR2->VAR7 = 0;
}