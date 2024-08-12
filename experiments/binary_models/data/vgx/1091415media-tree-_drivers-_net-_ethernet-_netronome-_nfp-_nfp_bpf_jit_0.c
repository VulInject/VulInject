static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
int VAR4;

if (VAR1->VAR5 == VAR6)
VAR4 = FUN2(VAR1, VAR3);
else
VAR4 = FUN3(VAR1, VAR3);

FUN4(VAR1, FUN5(VAR3->VAR7.VAR8 * 2 + 1), 0);

return VAR4;
}