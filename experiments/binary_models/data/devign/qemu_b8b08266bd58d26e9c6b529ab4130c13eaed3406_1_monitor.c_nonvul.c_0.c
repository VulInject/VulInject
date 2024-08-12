void FUN1(VAR1 *VAR2, const char *VAR3, va_list VAR4)
{
    char VAR5[4096];
    if (!VAR2)
        return;
    if (FUN2(VAR2))
    {
        FUN3(VAR6);
        return;
    }
    vsnprintf(VAR5, sizeof(VAR5), VAR3, VAR4);
    FUN4(VAR2, VAR5);
}