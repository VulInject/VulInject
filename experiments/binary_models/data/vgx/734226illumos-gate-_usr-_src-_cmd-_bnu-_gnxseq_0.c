int
FUN1(void)
{
int VAR1;

if ((VAR1 = FUN2(VAR2, 0)) != 0) {
FUN3(VAR3);
return (0);
}
unlink(VAR4);
VAR1 = FUN4(VAR2, VAR4);
unlink(VAR2);
FUN3(VAR3);
return (VAR1);
}