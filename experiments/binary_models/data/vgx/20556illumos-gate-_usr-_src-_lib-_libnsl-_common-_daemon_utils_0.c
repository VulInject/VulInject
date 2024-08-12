int
FUN1(const char *VAR1)
{
int		VAR2, VAR3;
struct flock	VAR4;

if ((VAR2 = FUN2(VAR1, VAR5)) == -1) {
if (VAR6 == VAR7)
return (0);
return (-1);
}

VAR4.VAR8 = VAR9;
VAR4.VAR10 = VAR11;
VAR4.VAR12 = (VAR13)0;
VAR4.VAR14 = (VAR13)0;

VAR3 = FUN3(VAR2, VAR15, &VAR4);
(void) close(VAR2);

if (VAR3 == -1)
return (-1);

return ((VAR4.VAR8 == VAR16) ? 0 : 1);
}