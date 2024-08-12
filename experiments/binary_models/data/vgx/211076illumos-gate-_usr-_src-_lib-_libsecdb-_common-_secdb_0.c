extern char *FUN1(char *, char *);

char *FUN2(char *);



char *
FUN3(VAR1 *VAR2, char *VAR3)
{
int	VAR4;
VAR5	*VAR6;

if (VAR2 == NULL || VAR3 == NULL) {
return (NULL);
}
VAR6 = VAR2->VAR6;
for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++) {
if (strcmp(VAR6[VAR4].VAR3, VAR3) == 0) {
return (VAR6[VAR4].VAR8);
}
}

return (NULL);
}