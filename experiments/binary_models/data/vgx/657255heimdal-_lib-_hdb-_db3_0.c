static VAR1
FUN1(krb5_context VAR2, VAR3 *VAR4, const char *VAR5)
{
int VAR6;
char *VAR7, *new;

if (FUN2(VAR5, "", sizeof("") - 1) == 0)
VAR5 += sizeof("") - 1;
else if (FUN2(VAR5, "", sizeof("") - 1) == 0)
VAR5 += sizeof("") - 1;

VAR6 = asprintf(&VAR7, "", VAR4->VAR8);
if (VAR6 == -1)
return VAR9;
VAR6 = asprintf(&new, "", VAR5);
if (VAR6 == -1) {
free(VAR7);
return VAR9;
}
VAR6 = FUN3(VAR7, new);
free(VAR7);
if(VAR6) {
free(new);
return VAR10;
}

free(VAR4->VAR8);
new[strlen(new) - 3] = '';
VAR4->VAR8 = new;
return 0;
}