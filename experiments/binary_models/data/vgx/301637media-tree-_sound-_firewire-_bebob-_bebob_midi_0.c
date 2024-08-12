static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->VAR6;

FUN2(&VAR4->mutex);
VAR4->VAR7--;
FUN3(VAR4);
FUN4(&VAR4->mutex);

FUN5(VAR4);
return 0;
}