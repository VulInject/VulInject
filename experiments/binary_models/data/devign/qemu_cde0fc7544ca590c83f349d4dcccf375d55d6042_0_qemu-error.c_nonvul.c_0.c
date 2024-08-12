void FUN1(const char *VAR1, int VAR2, const char *VAR3, const char *VAR4, ...)
{
    va_list VAR5;
    VAR6 *VAR7;
    FUN2(VAR5, VAR4);
    VAR7 = FUN3(VAR1, VAR2, VAR3, VAR4, &VAR5);
    FUN4(VAR5);
    if (FUN5())
    {
        FUN6(VAR8, VAR7);
    }
    else
    {
        FUN7(VAR7);
        FUN8(VAR7);
    }
}