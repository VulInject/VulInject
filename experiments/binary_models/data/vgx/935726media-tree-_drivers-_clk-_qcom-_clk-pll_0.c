static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5 = FUN2(FUN3(VAR2));

VAR3 = FUN4(VAR2);
if (VAR3)
return VAR3;

return FUN5(VAR5);
}