static int FUN1(void *VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;

if (VAR3->VAR4 & VAR5)
FUN2(VAR3, VAR6, false);

if (!FUN3(VAR3))
FUN4(VAR3);

return FUN5(VAR3);
}