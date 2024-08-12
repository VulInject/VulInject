char *
FUN1(VAR1 *VAR2)
{
VAR3	*VAR4;

if (VAR2 == NULL) {
return (NULL);
}

VAR4 = VAR2->VAR5;
while (VAR4 != NULL) {
if (strcmp("", (char *)VAR4->VAR6.VAR7) == 0)
return (VAR4->VAR8.VAR7);
VAR4 = VAR4->VAR9;
}
return (NULL);
}