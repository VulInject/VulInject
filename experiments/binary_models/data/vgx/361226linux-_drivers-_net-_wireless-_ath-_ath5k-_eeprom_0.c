int
FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN3(VAR2);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN4(VAR2);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN5(VAR2);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN6(VAR2);
if (VAR3 < 0)
return VAR3;

return 0;
}