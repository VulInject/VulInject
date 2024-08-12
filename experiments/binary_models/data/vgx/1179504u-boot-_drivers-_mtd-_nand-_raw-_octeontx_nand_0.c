static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2, VAR4, 0, 0, 0, 0);
if (VAR3)
return VAR3;

VAR3 = FUN3(VAR2);
if (VAR3)
return VAR3;

VAR3 = FUN4(VAR2, VAR5);
if (VAR3)
return VAR3;

return 0;
}