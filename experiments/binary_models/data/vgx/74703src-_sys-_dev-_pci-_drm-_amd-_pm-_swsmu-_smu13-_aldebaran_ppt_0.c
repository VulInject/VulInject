static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;

VAR3 = FUN2(VAR2);
if (VAR3)
return VAR3;

VAR3 = FUN3(VAR2);
if (VAR3)
return VAR3;

return FUN4(VAR2);
}