static VAR1
FUN1(VAR1 *VAR2,
gssnetlogon_ctx VAR3,
const gss_buffer_t VAR4)
{
NL_AUTH_MESSAGE VAR5;
const VAR6 *VAR7 = (const VAR6 *)VAR4->VAR8;

if (VAR3->VAR9 != VAR10) {
*VAR2 = VAR11;
return VAR12;
}

if (VAR4->VAR13 < VAR14)
return VAR15;

FUN2(&VAR7[0], &VAR5.VAR16);
FUN2(&VAR7[4], &VAR5.VAR17);

if (VAR5.VAR16 != VAR18 ||
VAR5.VAR17 != 0)
return VAR15;

VAR3->VAR9 = VAR19;

*VAR2 = 0;
return VAR20;
}