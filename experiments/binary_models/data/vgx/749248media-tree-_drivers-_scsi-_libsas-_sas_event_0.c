int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(&VAR2->VAR4);
if (VAR3)
return VAR3;
if (FUN3(VAR5, &VAR2->VAR6))
FUN4(VAR2);
FUN5(&VAR2->VAR4);

return 0;
}