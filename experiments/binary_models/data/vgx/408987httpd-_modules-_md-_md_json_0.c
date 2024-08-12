static VAR1 FUN1(void *VAR2, size_t VAR3, void *VAR4)
{
VAR5 *VAR6 = VAR4;
apr_size_t VAR7 = VAR3;
apr_status_t VAR8;

VAR8 = FUN2(VAR6, VAR2, &VAR7);
if (VAR9 == VAR8) {
return VAR7;
}
else if (VAR10 == VAR8) {
return 0;
}
return (VAR1)-1;
}