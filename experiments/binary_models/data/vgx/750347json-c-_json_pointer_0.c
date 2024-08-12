int FUN1(struct VAR1 *VAR2, struct VAR1 **VAR3, const char *VAR4, ...)
{
char *VAR5 = NULL;
int VAR6 = 0;
va_list VAR7;

if (!VAR2 || !VAR4)
{
VAR8 = VAR9;
return -1;
}

FUN2(VAR7, VAR4);
VAR6 = vasprintf(&VAR5, VAR4, VAR7);
FUN3(VAR7);

if (VAR6 < 0)
return VAR6;

if (VAR5[0] == '')
{
if (VAR3)
*VAR3 = VAR2;
goto VAR10;
}

VAR6 = FUN4(VAR2, VAR5, VAR3);
VAR10:
free(VAR5);

return VAR6;
}