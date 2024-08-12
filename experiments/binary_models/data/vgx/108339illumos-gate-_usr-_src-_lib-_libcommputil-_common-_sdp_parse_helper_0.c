void
FUN1(VAR1 *VAR2)
{
VAR1	*VAR3;

while (VAR2 != NULL) {
VAR3 = VAR2->VAR4;
if (VAR2->VAR5 != NULL)
free(VAR2->VAR5);
if (VAR2->VAR6 != NULL)
free(VAR2->VAR6);
free(VAR2);
VAR2 = VAR3;
}
}