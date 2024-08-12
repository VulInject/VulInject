void
FUN1(int VAR1, int VAR2, const char *VAR3, ...)
{
va_list VAR4;
FUN2(VAR4, VAR3);
if (VAR2 < 0)
VAR2 = VAR5;
FUN3(VAR1, NULL, VAR3, VAR4, VAR2);
FUN4(VAR4);
}