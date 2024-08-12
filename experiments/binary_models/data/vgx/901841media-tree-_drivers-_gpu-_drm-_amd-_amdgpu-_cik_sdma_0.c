static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2);
if (VAR3)
return VAR3;


FUN3(VAR2, false);


VAR3 = FUN4(VAR2);
if (VAR3)
return VAR3;
VAR3 = FUN5(VAR2);
if (VAR3)
return VAR3;

return 0;
}