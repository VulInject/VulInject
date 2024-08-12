FUN1 (const char *VAR1, unsigned VAR2)
{
krb5_error_code VAR3;
int VAR4;
void *VAR5;
krb5_context VAR6;
unsigned VAR7;
char **VAR8;

VAR3 = FUN2(&VAR6);
if (VAR3)
FUN3 (1, "", VAR3);
VAR3 = FUN4(VAR6,
VAR9,
NULL,
VAR9,
NULL, 0, 0,
&VAR5);
if(VAR3)
FUN5(VAR6, 1, VAR3, "");

VAR7 = FUN6 (VAR1, &VAR8);

for (VAR4 = 0; VAR4 < VAR2; ++VAR4)
FUN7 (VAR6, VAR5, VAR7, VAR8);
FUN8(VAR5);
FUN9(VAR6);
free(VAR8);
}