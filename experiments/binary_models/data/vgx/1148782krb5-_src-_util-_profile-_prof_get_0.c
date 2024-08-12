static VAR1
FUN1(const char *VAR2, const char *VAR3, char **VAR4,
char **VAR5)
{
char *VAR6 = NULL, *VAR7 = NULL;

if (VAR4 && VAR2) {
VAR6 = strdup(VAR2);
if (VAR6 == NULL)
goto VAR8;
}
if (VAR5 && VAR3) {
VAR7 = strdup(VAR3);
if (VAR7 == NULL)
goto VAR8;
}
if (VAR4)
*VAR4 = VAR6;
if (VAR5)
*VAR5 = VAR7;
return 0;
VAR8:
free(VAR6);
free(VAR7);
return VAR9;
}