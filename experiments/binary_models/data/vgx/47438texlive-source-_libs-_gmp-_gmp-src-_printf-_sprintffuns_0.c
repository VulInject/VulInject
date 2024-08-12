FUN1 (char **VAR1, const char *VAR2, va_list VAR3)
{
char  *VAR4 = *VAR1;
int   VAR5;
vsprintf (VAR4, VAR2, VAR3);
VAR5 = strlen (VAR4);
*VAR1 = VAR4 + VAR5;
return VAR5;
}