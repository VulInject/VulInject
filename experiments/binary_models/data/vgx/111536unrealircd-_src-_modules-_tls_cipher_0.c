int FUN1(VAR1 *VAR2)
{
if (VAR2->VAR3->VAR4)
{
const char *VAR5 = FUN2(VAR2);

if (!VAR5)
return 0;

FUN3(VAR2, "", VAR5);
}
return 0;
}