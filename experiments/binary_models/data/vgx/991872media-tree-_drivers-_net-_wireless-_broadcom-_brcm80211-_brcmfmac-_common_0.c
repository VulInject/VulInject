void FUN1(const char *VAR1, const char *VAR2, ...)
{
struct va_format VAR3;
va_list VAR4;

FUN2(VAR4, VAR2);

VAR3.VAR2 = VAR2;
VAR3.VAR5 = &VAR4;
FUN3("", VAR1, &VAR3);

FUN4(VAR4);
}