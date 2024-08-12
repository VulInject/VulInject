static void
FUN1(VAR1 *VAR2)
{
if (VAR2->VAR3 < 0)
return;

FUN2(VAR2->VAR3);
VAR2->VAR3 = -1;
}