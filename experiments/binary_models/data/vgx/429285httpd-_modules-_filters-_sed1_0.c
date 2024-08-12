static VAR1 FUN1(VAR2 *VAR3, apr_size_t VAR4,
char **VAR5)
{
apr_status_t VAR6 = 0;
if (VAR5 == NULL) {
VAR5 = &VAR3->VAR7;
}
VAR6 = FUN2(VAR3->VAR8, &VAR3->VAR7, VAR5,
&VAR3->VAR9, VAR4);
if (VAR6 == VAR10) { 
VAR3->VAR11 = &VAR3->VAR7[71];
}
return VAR6;
}