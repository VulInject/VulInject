static bool FUN1(struct VAR1 *VAR1)
{
bool (*VAR2)(struct VAR1 *VAR1);
bool VAR3;

VAR2 = FUN2(VAR4);
if (!VAR2)
return false;

VAR3 = FUN3(VAR1);

FUN4(VAR4);

return VAR3;
}