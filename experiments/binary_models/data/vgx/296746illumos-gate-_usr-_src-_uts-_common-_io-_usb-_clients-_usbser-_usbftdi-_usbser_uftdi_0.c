int
FUN1(void)
{
int VAR1;

if ((VAR1 = FUN2(&VAR2)) != 0)
return (VAR1);
if ((VAR1 = FUN3(&VAR3,
FUN4(), 1)) != 0)
(void) FUN5(&VAR2);
return (VAR1);
}