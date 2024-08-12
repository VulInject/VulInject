static void
FUN1(VAR1 *VAR2)
{
VAR1	*VAR3;
VAR1	*VAR4;

for (VAR3 = VAR2; VAR3 != NULL; VAR3 = VAR4) {
VAR4 = VAR3->VAR5;
free(VAR3);
}
}