void
FUN1(VAR1 *VAR2)
{
VAR3	*VAR4;
VAR3	*VAR5;

if (VAR2 == NULL)
return;
VAR4 = (VAR3 *)VAR2->VAR4;
while (VAR4 != NULL) {
FUN2(VAR4->VAR6);
VAR5 = VAR4->VAR7;
free(VAR4);
VAR4 = VAR5;
}
free(VAR2);
}