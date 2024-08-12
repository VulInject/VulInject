int
FUN1(void)
{
int VAR1;

if ((VAR1 = FUN2(&VAR2,
sizeof (struct VAR2), 2)) != 0) {
return (VAR1);
}

if ((VAR1 = FUN3(&VAR3)) != 0) {
FUN4(&VAR2);
}
return (VAR1);
}