VAR1
FUN1(krb5_context VAR2,
pkinit_cert_iter_handle VAR3)
{
struct VAR4 *VAR5 = (struct VAR4 *)VAR3;

if (VAR5 == NULL || VAR5->VAR6 != VAR7)
return VAR8;
free(VAR3);
return 0;
}