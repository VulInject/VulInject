static const VAR1 *
FUN1(void *VAR2, krb5_boolean VAR3)
{
VAR1 *VAR4;
int *VAR5 = VAR2;

if (VAR3 || VAR6[*VAR5] == NULL)
return NULL;

VAR4 = VAR6[*VAR5];
*VAR5 += 1;
return VAR4;
}