void FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
    va_list VAR4;
    FUN2(VAR4, VAR3);
    FUN3(VAR2, VAR3, VAR4);
    FUN4(VAR4);
}