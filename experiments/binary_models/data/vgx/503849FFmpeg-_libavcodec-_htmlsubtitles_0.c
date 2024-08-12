static void FUN1(VAR1 *VAR2, const char **VAR3, int *VAR4, int *VAR5)
{
const char *VAR6 = *VAR3;

*VAR4 += FUN2(VAR6);

if (!*VAR5) {
if (   (*VAR4 != 1 && VAR6[1] == '')
|| (VAR6[1] && strchr("", VAR6[1]) && VAR6[2] == '')) {
char *VAR7 = strchr(VAR6+2, '');
if (VAR7) {
*VAR3 = VAR7;
return;
} else
*VAR5 = 1;
}
}

FUN3(VAR2, *VAR6, 1);
}