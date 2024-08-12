static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR6;

FUN3(&VAR6->mutex);

if (FUN4(VAR6))
FUN5(VAR4, true);

FUN6(&VAR6->mutex);

return 0;
}