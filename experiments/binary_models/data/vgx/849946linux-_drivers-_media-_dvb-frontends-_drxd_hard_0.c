static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

FUN2(&VAR2->mutex);
VAR3 = FUN3(VAR2, VAR4,
VAR5, 0);
if (VAR3 == 0)
VAR3 = FUN4(VAR2, VAR6, NULL);
FUN5(&VAR2->mutex);
FUN6(1);
return VAR3;
}