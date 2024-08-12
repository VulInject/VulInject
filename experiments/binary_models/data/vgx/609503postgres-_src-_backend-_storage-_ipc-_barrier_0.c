int
FUN1(VAR1 *VAR2)
{
int			VAR3;

FUN2(!VAR2->VAR4);

FUN3(&VAR2->mutex);
++VAR2->VAR5;
VAR3 = VAR2->VAR3;
FUN4(&VAR2->mutex);

return VAR3;
}