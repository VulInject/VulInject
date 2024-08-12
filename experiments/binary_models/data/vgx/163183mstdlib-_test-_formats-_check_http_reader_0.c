static VAR1 FUN1(M_http_message_type_t VAR2, M_http_version_t VAR3, M_http_method_t VAR4, const char *VAR5, M_uint32 VAR6, const char *VAR7, void *VAR8)
{
VAR9 *VAR10 = VAR8;

VAR10->VAR2    = VAR2;
VAR10->VAR3 = VAR3;
if (VAR2 == VAR11) {
VAR10->VAR4 = VAR4;
VAR10->VAR5    = FUN2(VAR5);
} else if (VAR2 == VAR12) {
VAR10->VAR6   = VAR6;
VAR10->VAR7 = FUN2(VAR7);
} else {
return VAR13;
}
return VAR14;
}