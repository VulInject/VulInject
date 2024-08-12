int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2, &VAR4);
if (VAR3)
return VAR3;

FUN3(&VAR2->mutex, &VAR5);
FUN4(&VAR2->VAR6.VAR7, "", &VAR8, 0);

return 0;
}