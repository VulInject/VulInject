int FUN1(const char *VAR1, ...)
{
int VAR2;
va_list VAR3;
FUN2(VAR3, VAR1);
VAR2 = FUN3(VAR4, VAR1, VAR3);
FUN4(VAR3);
return VAR2;
}