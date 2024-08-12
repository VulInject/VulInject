static char *
FUN1(const char *VAR1)
{
char *VAR2;

VAR2 = malloc(strlen(VAR1) + 1);
if (VAR2 != 0)
(void) strcpy(VAR2, VAR1);
return (VAR2);
}