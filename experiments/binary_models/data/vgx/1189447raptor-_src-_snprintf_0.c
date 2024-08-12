static int
FUN1(size_t VAR1, const char *VAR2, ...)
{
va_list VAR3;
int VAR4;

FUN2(VAR3, VAR2);
VAR4 = FUN3(FUN4(int, VAR1), VAR2, VAR3);
FUN5(VAR3);

return VAR4;
}