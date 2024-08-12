static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR5;

VAR5 = FUN2(VAR2, &VAR6);
if (FUN3(VAR5))
return FUN4(VAR5);

return FUN5(&VAR2->VAR7,
&VAR8, NULL, 0);
}