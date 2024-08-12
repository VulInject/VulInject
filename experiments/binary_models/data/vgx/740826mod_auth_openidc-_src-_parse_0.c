const char *FUN1(VAR1 *VAR2, const char *VAR3,
char **VAR4, char **VAR5, int *VAR6, apr_byte_t VAR7) {
const char *VAR8 = NULL;
char *VAR9 = NULL, *VAR10 = NULL, *VAR11 = NULL, *VAR12 = NULL;

if ((VAR3 == NULL) || (FUN2(VAR3, "") == 0))
return "";

VAR9 = FUN3(VAR2, VAR3);
VAR10 = strstr(VAR9, VAR13);
if (VAR10 && VAR7)
VAR11 = strstr(VAR10 + 1, VAR13);

if (VAR10) {
if (VAR11) {
*VAR10 = '';
*VAR11 = '';
VAR12 = VAR9;
VAR10++;
if (VAR10 != VAR11)
*VAR4 = FUN3(VAR2, VAR10);
VAR8 = FUN4(VAR2, VAR12, VAR11 + 1, VAR5, VAR6);
} else {
*VAR10 = '';
*VAR4 = VAR9;
*VAR5 = VAR10 + 1;
*VAR6 = strlen(*VAR5);
}
} else {
*VAR4 = NULL;
*VAR5 = VAR9;
*VAR6 = strlen(*VAR5);
}

return VAR8;
}