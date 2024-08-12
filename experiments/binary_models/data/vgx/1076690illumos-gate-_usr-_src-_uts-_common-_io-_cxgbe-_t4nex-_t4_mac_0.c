static int
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
int VAR4;

VAR4 = FUN2(VAR3, 0, 1);
if (VAR4 != 0)
return (VAR4);
VAR4 = FUN3(VAR3);
FUN4(VAR3, 0);

return (VAR4);
}