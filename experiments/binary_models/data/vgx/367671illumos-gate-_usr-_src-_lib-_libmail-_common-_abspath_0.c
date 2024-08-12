VAR1 *
FUN1(char *VAR2, char *VAR3, VAR1 *VAR4)
{
if (*VAR2 == '') {
VAR4 = FUN2(VAR4, VAR2);
} else {
VAR4 = FUN2(VAR4, VAR3);
VAR4 = FUN2(VAR4, VAR2);
}
return (VAR4);
}