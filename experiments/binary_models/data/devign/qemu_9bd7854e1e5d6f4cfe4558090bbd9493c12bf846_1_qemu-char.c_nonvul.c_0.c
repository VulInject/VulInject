void FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
    char VAR4[VAR5];
    va_list VAR6;
    FUN2(VAR6, VAR3);
    vsnprintf(VAR4, sizeof(VAR4), VAR3, VAR6);
    FUN3(VAR2, (VAR7 *)VAR4, strlen(VAR4));
    FUN4(VAR6);
}