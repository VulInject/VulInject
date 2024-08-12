VAR1
FUN1(VAR1 *VAR2,
krb5_context VAR3,
OM_uint32 VAR4,
VAR1 *VAR5)
{
krb5_timestamp VAR6;
krb5_error_code VAR7;

if (VAR4 == 0) {
*VAR5 = VAR8;
return VAR9;
}

VAR7 = FUN2(VAR3, &VAR6);
if (VAR7) {
*VAR5 = 0;
*VAR2 = VAR7;
return VAR10;
}

if (VAR4 < VAR6)
*VAR5 = 0;
else
*VAR5 = VAR4 - VAR6;

return VAR9;
}


OM_uint32 GSSAPI_CALLCONV VAR11
(VAR1 * VAR2,
gss_const_ctx_id_t VAR12,
VAR1 * VAR13
)
{
krb5_context VAR3;
OM_uint32 VAR4;
OM_uint32 VAR14;
const gsskrb5_ctx VAR15 = (const VAR16) VAR12;

FUN3 (&VAR3);

FUN4(&VAR15->VAR17);
VAR4 = VAR15->VAR4;
FUN5(&VAR15->VAR17);

VAR14 = FUN1(VAR2, VAR3,
VAR4, VAR13);
if (VAR14 != VAR9)
return VAR14;

*VAR2 = 0;

if (*VAR13 == 0)
return VAR18;

return VAR9;
}