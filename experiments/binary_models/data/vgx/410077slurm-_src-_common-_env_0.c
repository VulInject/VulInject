int FUN1(char ***VAR1, const char *VAR2, const char *VAR3, ...)
{
char *VAR4;
va_list VAR5;
int VAR6, VAR7;

if (!VAR2 || VAR2[0] == '')
return VAR8;

VAR4 = xmalloc(VAR9);
FUN2(VAR5, VAR3);
vsnprintf(VAR4, VAR9, VAR3, VAR5);
FUN3(VAR5);

VAR6 = strlen(VAR2) + strlen(VAR4) + 2;
if (VAR6 >= VAR10) {
FUN4("", VAR2);
return VAR11;
}

if (VAR1 && *VAR1) {
if (FUN5(VAR1, VAR2, VAR4) == 1)
VAR7 = 0;
else
VAR7 = 1;
} else {
VAR7 = setenv(VAR2, VAR4, 1);
}

FUN6(VAR4);
return VAR7;
}