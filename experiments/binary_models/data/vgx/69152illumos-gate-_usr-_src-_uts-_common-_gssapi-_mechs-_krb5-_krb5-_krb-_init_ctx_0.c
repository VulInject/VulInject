static VAR1
FUN1(krb5_context VAR2,
unsigned int VAR3,
VAR4 *VAR5,
VAR4 **VAR6)
{
unsigned int VAR7;

*VAR6 = NULL;
if (!VAR3)
return 0;

*VAR6 = FUN2(VAR3 * sizeof(VAR4));
if (*VAR6 == NULL)
return VAR8;
for (VAR7 = 0; VAR7 < VAR3; VAR7++)
(*VAR6)[VAR7] = VAR5[VAR7];
return 0;
}