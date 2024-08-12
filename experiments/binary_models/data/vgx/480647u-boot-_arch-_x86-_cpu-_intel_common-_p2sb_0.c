static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2, true);
if (VAR3)
return FUN3("", VAR3);

return 0;
}