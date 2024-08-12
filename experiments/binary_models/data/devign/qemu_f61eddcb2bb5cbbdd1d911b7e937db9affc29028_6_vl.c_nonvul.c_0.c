static void FUN1(const char *VAR1, const char *VAR2, bool VAR3)
{
    static int VAR4 = 0;
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8;
    const char *VAR9;
    char VAR10[32];
    int VAR11 = 0;
    if (FUN2(VAR1, "", &VAR9))
    {
        snprintf(VAR10, sizeof(VAR10), "", VAR9);
    }
    else
    {
        snprintf(VAR10, sizeof(VAR10), "", VAR4);
        if (VAR4 == 0)
        {
            VAR11 = 1;
        }
        VAR8 = FUN3(VAR10, VAR1);
        if (!VAR8)
        {
            FUN4("", VAR1);
            FUN5(1);
        }
    }
    VAR8 = FUN6(FUN7(""), VAR10, 1, &VAR6);
    if (!VAR8)
    {
        FUN8(VAR6);
        FUN5(1);
    }
    FUN9(VAR8, "", VAR2, &VAR12);
    FUN9(VAR8, "", VAR10, &VAR12);
    FUN10(VAR8, "", VAR3, &VAR12);
    if (VAR11)
        FUN9(VAR8, "", "", &VAR12);
    VAR4++;
}