static void FUN1(struct VAR1 *VAR2, unsigned VAR3, int VAR4)
{
if (VAR3 > 15)
return;
if (VAR4)
FUN2(1 << VAR3);
else
FUN3(1 << VAR3);
};