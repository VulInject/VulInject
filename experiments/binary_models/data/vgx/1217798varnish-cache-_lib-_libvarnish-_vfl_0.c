int
FUN1(const char *VAR1, int VAR2, ...)
{
va_list VAR3;
int VAR4;

FUN2(VAR3, VAR2);
VAR4 = FUN3(VAR5, VAR1, VAR2, VAR3);
FUN4(VAR3);
return (VAR4);
}