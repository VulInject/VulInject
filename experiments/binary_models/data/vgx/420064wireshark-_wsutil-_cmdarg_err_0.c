void
FUN1(const char *VAR1, ...)
{
va_list VAR2;

FUN2(VAR2, VAR1);
FUN3(VAR1, VAR2);
FUN4(VAR2);
}