int FUN1(void)
{
struct VAR1 *VAR2;
int VAR3;

VAR3 = FUN2(VAR4,
FUN3(VAR2),
&VAR2);
if (!VAR3)
FUN4("");

return FUN5(VAR2);
}