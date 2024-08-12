static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6, bool VAR7, bool VAR8, bool VAR9)
{
    VAR1 *VAR10;
    VAR11 *VAR12 = NULL;
    if (!VAR4)
    {
        VAR4 = FUN2();
    }
    if (VAR5)
    {
        FUN3(VAR4, "", VAR5);
    }
    if (VAR9)
    {
        FUN4(VAR4, VAR13, true);
    }
    VAR10 = FUN5(VAR2, NULL, VAR4, VAR6, &VAR12);
    if (!VAR10)
    {
        FUN6(VAR12, "", VAR2);
        return NULL;
    }
    FUN7(VAR10, !VAR7);
    if (FUN8(VAR10, VAR2, VAR6, VAR8) < 0)
    {
        FUN9(VAR10);
        return NULL;
    }
    return VAR10;
}