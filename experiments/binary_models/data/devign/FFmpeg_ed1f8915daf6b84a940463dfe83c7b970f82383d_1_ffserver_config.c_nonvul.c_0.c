static void FUN1(const char *VAR1, int VAR2, int VAR3, int *VAR4, const char *VAR5, ...)
{
    va_list VAR6;
    FUN2(VAR6, VAR5);
    FUN3(VAR1, VAR2, VAR3, VAR4, VAR5, VAR6);
    FUN4(VAR6);
}