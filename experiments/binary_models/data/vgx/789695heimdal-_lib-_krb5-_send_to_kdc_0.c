static VAR1
FUN1(krb5_context VAR2, struct VAR3 *VAR3, const VAR4 *VAR5)
{
char *VAR6 = NULL, *VAR7 = NULL;
krb5_error_code VAR8;
int VAR9;

FUN2(VAR3->VAR5.VAR10 == 0, "");

VAR9 = FUN3(VAR5->VAR5, VAR5->VAR10, &VAR6);
if(VAR9 < 0)
return VAR11;

if (VAR2->VAR12)
VAR8 = asprintf(&VAR7, "GET VAR13:
else
VAR8 = asprintf(&VAR7, "", VAR6);
free(VAR6);
if(VAR8 < 0 || VAR7 == NULL)
return VAR11;

VAR3->VAR5.VAR5 = VAR7;
VAR3->VAR5.VAR10 = strlen(VAR7);

return 0;
}