static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

if (FUN3(VAR4))
return FUN4(VAR4);

return VAR4->VAR5;
}