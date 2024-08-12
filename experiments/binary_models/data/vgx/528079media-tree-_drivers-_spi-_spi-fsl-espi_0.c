static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

FUN3(VAR2, false);

VAR5 = FUN4(VAR2);
if (VAR5 < 0)
return VAR5;

return FUN5(VAR4);
}