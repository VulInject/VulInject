int FUN1(struct VAR1 *VAR2)
{
u16 VAR3;


FUN2();
VAR3 = FUN3(*VAR2->VAR4);
if (FUN4(&VAR2->VAR5) == VAR3 + 1)
return 0;

return VAR3 != FUN4(&VAR2->VAR5);
}