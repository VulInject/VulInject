int
FUN1(VAR1 *VAR2, int VAR3)
{
int VAR4;

if (VAR2 == (VAR1 *)NULL && VAR3 == -1)
return (VAR5);

if (VAR3 != -1) {
if (FUN2(VAR3, NULL) == 0) {
return (0);
} else {
return (VAR5);
}
} else {
VAR4 = FUN3(VAR2, VAR6|VAR7, 1, (VAR8)0, FUN4(), NULL);
FUN5(VAR2);
return (VAR4);
}
}