int
FUN1 (int VAR1, const char *VAR2, va_list VAR3)
{
char VAR4[2000];
char *VAR5;
size_t VAR6;
size_t VAR7 = sizeof (VAR4);

VAR5 = FUN2 (VAR4, &VAR7, VAR2, VAR3);
VAR6 = VAR7;

if (!VAR5)
return -1;

if (FUN3 (VAR1, VAR5, VAR6) < VAR6)
{
if (VAR5 != VAR4)
free (VAR5);
return -1;
}

if (VAR5 != VAR4)
free (VAR5);

if (VAR6 > VAR8)
{
VAR9 = VAR10;
return -1;
}

return VAR6;
}