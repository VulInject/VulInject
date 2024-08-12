VAR1
FUN1(VAR2 *VAR3,
VAR4 *VAR5,
const VAR6 *VAR7,
VAR8 *VAR9)
{
dns_totext_ctx_t VAR10;
isc_result_t VAR11;
VAR11 = FUN2(VAR7, &VAR10);
if (VAR11 != VAR12) {
FUN3(VAR13, VAR14,
"");
return (VAR15);
}

return (FUN4(VAR5, VAR3, &VAR10,
0, VAR9));
}