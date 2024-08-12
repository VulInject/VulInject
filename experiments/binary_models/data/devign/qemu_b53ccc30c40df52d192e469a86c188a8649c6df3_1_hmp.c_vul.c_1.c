void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    int VAR7 = FUN2(VAR4, "", 0);
    const char *VAR8 = FUN3(VAR4, "");
    bool VAR9 = FUN4(VAR4, "");
    bool VAR10 = FUN4(VAR4, "");
    int64_t VAR11 = 0;
    int64_t VAR12 = 0;
    char *VAR13;
    if (VAR9)
    {
        VAR11 = FUN5(VAR4, "");
    }
    if (VAR10)
    {
        VAR12 = FUN5(VAR4, "");
    }
    VAR13 = FUN6("", VAR8, NULL);
    FUN7(VAR7, VAR13, VAR9, VAR11, VAR10, VAR12, &VAR6);
    FUN8(VAR2, &VAR6);
    FUN9(VAR13);
}