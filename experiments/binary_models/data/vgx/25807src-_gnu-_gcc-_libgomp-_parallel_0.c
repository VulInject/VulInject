int FUN1 (void)
{
struct VAR1 *VAR2 = FUN2 ()->VAR3.VAR2;

while (VAR2)
{
if (VAR2->VAR4 > 1)
return true;
VAR2 = VAR2->VAR5.VAR2;
}

return false;
}