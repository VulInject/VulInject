static VAR1
FUN1( krb5_context VAR2,
VAR3 *VAR4,
VAR5 *VAR6)
{
krb5_error_code             VAR7;
krb5_tl_data                VAR8;
VAR9                *VAR10;

VAR8.VAR11 = VAR12;
VAR7 = FUN2(VAR2, VAR6, &VAR8);
if (VAR7 || VAR8.VAR13 == 0)
return 0;

VAR7 = FUN3(VAR14,
VAR8.VAR13, &VAR10);
if (VAR7)
return VAR7;
memcpy(VAR10->VAR15, VAR8.VAR16, VAR8.VAR13);
VAR7 = FUN4(&VAR4->VAR17, &VAR10);
FUN5(VAR10);
return VAR7;
}