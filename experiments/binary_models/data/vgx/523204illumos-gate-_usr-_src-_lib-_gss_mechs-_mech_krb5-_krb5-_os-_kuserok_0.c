static VAR1
FUN1(krb5_principal VAR2, VAR3 *VAR4)
{
OM_uint32 VAR5, VAR6;
gss_name_t VAR7;
gss_buffer_desc VAR8;

VAR8.VAR9 = &VAR2;
VAR8.VAR10 = sizeof (VAR2);


VAR6 = FUN2(&VAR5, &VAR8,
(VAR11)VAR12, &VAR7);

if (VAR6 != VAR13)
return (VAR14);

FUN3();


VAR6 = FUN4(VAR7, (VAR11)VAR15,
VAR4, 0, 0, 0, 0);

(void) FUN5(&VAR5, &VAR7);

if (VAR6 != VAR13)
return (VAR14);

return (VAR16);
}