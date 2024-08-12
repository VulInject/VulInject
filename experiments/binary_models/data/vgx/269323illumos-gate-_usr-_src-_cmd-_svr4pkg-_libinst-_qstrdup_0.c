char *
FUN1(char *VAR1)
{
register char *VAR2 = NULL;

if (VAR1 && *VAR1) {
VAR2 = calloc((strlen(VAR1) + 1), sizeof (char));
if (VAR2 == NULL) {
FUN2(FUN3(VAR3), VAR4);
FUN4(99);
}
(void) strcpy(VAR2, VAR1);
}
return (VAR2);
}