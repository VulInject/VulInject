int
FUN1(const char *VAR1, void **VAR2)
{
VAR3 *VAR4;
int VAR5;
VAR6 *VAR7 = NULL;

if ((VAR4 = fopen(VAR1, "")) == NULL)
return (-1);

if ((VAR7 = calloc(1, sizeof (*VAR7))) == NULL)
goto VAR8;

if ((VAR7->VAR9 = calloc(VAR10, sizeof (char))) == NULL)
goto VAR8;

VAR7->VAR11 = VAR4;
*VAR2 = VAR7;

return (0);

VAR8:
VAR5 = VAR12;
(void) fclose(VAR4);
if (VAR7 != NULL) {
free(VAR7->VAR9);
free(VAR7);
}
VAR12 = VAR5;
return (-1);
}