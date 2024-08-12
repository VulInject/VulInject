VAR1 FUN1(VAR2 *VAR3, VAR4 **VAR5,
VAR6 *VAR7)
{
apr_uint16_t VAR8;
apr_size_t   VAR9;
apr_status_t VAR10;

VAR10 = FUN2(VAR3, &VAR8);

VAR9 = VAR3->VAR11;

if ((VAR10 != VAR12) || (VAR8 + VAR9 > VAR3->VAR13)) {
return FUN3(VAR3, "");
}
VAR3->VAR11 += (VAR6)VAR8;   

*VAR5     = VAR3->VAR14 + VAR9;
*VAR7 = VAR8;

return VAR12;
}