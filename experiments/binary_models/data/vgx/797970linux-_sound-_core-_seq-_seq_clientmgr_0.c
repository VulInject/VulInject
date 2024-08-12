bool FUN1(int VAR1)
{
struct VAR2 *VAR3;

VAR3 = FUN2(VAR1);
if (!VAR3)
return false;
FUN3(&VAR3->VAR4);

return true;
}