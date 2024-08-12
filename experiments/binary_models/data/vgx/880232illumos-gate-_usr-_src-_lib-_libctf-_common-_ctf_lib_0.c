static int
FUN1(VAR1 *VAR2)
{
int VAR3;

if ((VAR3 = FUN2(VAR2, VAR4)) != 0)
return (VAR3);

if ((VAR3 = VAR5.FUN3(&VAR2->VAR6)) != 0)
return (FUN4(VAR2->VAR7, VAR8));

return (0);
}