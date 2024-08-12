int
FUN1(int VAR1, void *VAR2, size_t VAR3, int VAR4)
{
ssize_t	VAR5;
uint_t	VAR6, VAR7;


VAR6 = FUN2();
for (;;) {
VAR5 = recvfrom(VAR1, VAR2, VAR3, VAR8, NULL, NULL);
if (VAR5 == -1 && VAR9 == VAR10) {
VAR7 = (VAR11)((FUN2() - VAR6) + 500) / 1000;
if (VAR4 != 0 && VAR7 > VAR4) {
VAR9 = VAR12;
return (-1);
}
} else {
return (VAR5);
}
}
}