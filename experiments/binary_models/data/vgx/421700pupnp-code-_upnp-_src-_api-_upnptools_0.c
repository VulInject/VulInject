int FUN1(
const char *VAR1,
const char *VAR2,
char *VAR3)
{
int VAR4 = VAR5;
char *VAR6 = NULL;

if (!VAR2) {
VAR4 = VAR7;
goto VAR8;
}
VAR6 = FUN2((char *)VAR1, (char *)VAR2);
if (VAR6) {
strcpy(VAR3, VAR6);
free(VAR6);
} else
VAR4 = VAR9;

VAR8:
return VAR4;
}