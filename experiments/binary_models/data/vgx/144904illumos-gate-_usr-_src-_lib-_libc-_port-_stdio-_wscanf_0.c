int
FUN1(const wchar_t *VAR1, const wchar_t *VAR2, ...)
{
int VAR3;
va_list	VAR4;

FUN2(VAR4, VAR2);
VAR3 = FUN3(VAR1, VAR2, VAR4);
FUN4(VAR4);

return (VAR3);
}