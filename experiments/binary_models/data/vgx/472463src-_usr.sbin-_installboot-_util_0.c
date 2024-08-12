char *
FUN1(const char *VAR1, const char *VAR2)
{
char *VAR3 = NULL, *VAR4, *VAR5, *VAR6;
int VAR7;

if ((VAR6 = malloc(VAR8)) == NULL) {
FUN2("");
return (NULL);
}
VAR7 = snprintf(VAR6, VAR8, "", VAR1, VAR2);
if (VAR7 < 0 || VAR7 >= VAR8) {
FUN2("");
goto VAR9;
}
if ((VAR4 = FUN3(VAR6)) == NULL) {
FUN2("");
goto VAR9;
}
if ((VAR3 = FUN4(VAR4, NULL)) == NULL) {
FUN2("");
goto VAR9;
}
if ((VAR5 = FUN5(VAR6)) == NULL) {
FUN2("");
goto VAR9;
}
VAR7 = snprintf(VAR6, VAR8, "", VAR3, VAR5);
if (VAR7 < 0 || VAR7 >= VAR8) {
FUN2("");
goto VAR9;
}
free(VAR3);
return (VAR6);

VAR9:
free(VAR6);
free(VAR3);
return (NULL);
}