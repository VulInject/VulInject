static VAR1 *
FUN1(VAR2 *VAR3, int VAR4)
{
if (VAR4 == 0)
return (NULL);
if (VAR3->VAR5 != VAR6)
return (NULL);
if (VAR4 < (VAR7)VAR3->VAR8) {

VAR3->VAR9 += VAR4;

return ((VAR1 *)VAR3->VAR10);
}

if (VAR3->VAR10)
free(VAR3->VAR10);
if ((VAR3->VAR10 = malloc(VAR4)) == NULL) {
VAR3->VAR8 = 0;
return (NULL);
}
VAR3->VAR8 = (VAR11)(VAR7)VAR4;
VAR3->VAR9 += VAR4;

return ((VAR1 *)VAR3->VAR10);
}