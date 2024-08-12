VAR1 *
FUN1()
{
VAR1 * VAR2;

if ((VAR2 = calloc(1, sizeof (*VAR2))) != NULL) {
VAR2->VAR3 = VAR4;
VAR2->VAR5 = VAR6;
}

return (VAR2);
}