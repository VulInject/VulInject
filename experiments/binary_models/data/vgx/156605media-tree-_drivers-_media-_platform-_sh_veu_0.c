static int FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3)
return 0;

VAR2->VAR3 = FUN2(VAR2->VAR4, VAR2,
VAR5);

return FUN3(VAR2->VAR3);
}