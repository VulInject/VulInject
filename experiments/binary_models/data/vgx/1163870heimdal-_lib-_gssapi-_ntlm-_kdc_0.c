static int
FUN1(VAR1 *VAR2, void *VAR3, const char *VAR4)
{
struct VAR5 *VAR6 = VAR3;
krb5_error_code VAR7;
unsigned VAR8;

VAR7 = FUN2(VAR6->VAR9, FUN3(VAR4), VAR6->VAR10, &VAR8);
if (VAR7)
return VAR7;

if ((VAR8 & (1|2|4)) == 0)
return VAR11;

return 0;
}