VAR1
FUN1(krb5_context VAR2, const char *VAR3,
const char *VAR4, int VAR5, int *VAR6)
{
char *VAR7 = NULL;
krb5_error_code VAR8;

VAR8 = FUN2(VAR2, VAR3, VAR4, &VAR7);

if (VAR8 == 0) {
char *VAR9;
long VAR10;
VAR10 = FUN3(VAR7, &VAR9, 0);
if (VAR9 == VAR7)
*VAR6 = VAR5;
else
*VAR6 = VAR10;
free(VAR7);
} else
*VAR6 = VAR5;

return 0;
}