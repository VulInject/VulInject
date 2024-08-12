static VAR1
FUN1(krb5_context VAR2, const VAR3 *VAR4,
const VAR5 *VAR6)
{
krb5_error_code VAR7;
krb5_boolean VAR8 = VAR9;
VAR10 *VAR11 = VAR4->VAR12;
VAR13 *VAR14 = NULL;

if (VAR11 == NULL)
return VAR15;

VAR7 = FUN2(VAR4->VAR16, &VAR14);
if (VAR7)
return VAR7;

VAR7 = FUN3(VAR2, VAR6, VAR17,
VAR14, &VAR11->VAR18, &VAR8);
if (!VAR7 && !VAR8)
VAR7 = VAR19;

FUN4(VAR2, VAR14);
return VAR7;
}