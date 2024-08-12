static int FUN1 (char *VAR1)
{
int VAR2, VAR3;

if ((VAR2 = FUN2(*VAR1++)) < 0) {
return (-1);
}
if ((VAR3 = FUN2(*VAR1)) < 0) {
return (-1);
}

return ((VAR2<<4) + VAR3);
}