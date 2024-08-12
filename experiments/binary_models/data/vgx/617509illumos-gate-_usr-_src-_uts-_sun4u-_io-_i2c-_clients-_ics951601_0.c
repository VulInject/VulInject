int
FUN1(void)
{
int    VAR1;

VAR1 = FUN2(&VAR2);
if (VAR1 == 0) {
(void) FUN3(&VAR3,
sizeof (VAR4), 1);
}
return (VAR1);
}