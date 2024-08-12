int FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
    va_list VAR4;
    char VAR5[4096];
    int VAR6;
    FUN2(VAR4, VAR3);
    VAR6 = vsnprintf(VAR5, sizeof(VAR5), VAR3, VAR4);
    FUN3(VAR4);
    FUN4(VAR2, VAR5, strlen(VAR5));
    return VAR6;
}