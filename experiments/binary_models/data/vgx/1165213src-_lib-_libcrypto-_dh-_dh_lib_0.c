int
FUN1(const VAR1 *VAR2)
{
int VAR3 = -1;

if (VAR2->VAR4 != NULL)
VAR3 = FUN2(VAR2->VAR4);
else if (VAR2->VAR5 > 0)
VAR3 = VAR2->VAR5;

return FUN3(FUN2(VAR2->VAR6), VAR3);
}