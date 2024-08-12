int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    const char *VAR10;
    const char *VAR11;
    const char *VAR12;
    const char *VAR13;
    const char *VAR14;
    const char *VAR15;
    const char *VAR16;
    const char *VAR17;
    char *VAR18 = NULL;
    int VAR19 = 0;
    int VAR20;
    VAR10 = FUN2(VAR2, "");
    VAR11 = FUN2(VAR2, "");
    VAR12 = FUN2(VAR2, "");
    VAR13 = FUN2(VAR2, "");
    VAR14 = FUN2(VAR2, "");
    VAR15 = FUN2(VAR2, "");
    VAR16 = FUN2(VAR2, "");
    VAR17 = FUN2(VAR2, "");
    if (FUN2(VAR2, ""))
    {
        const char *VAR21 = FUN2(VAR2, "");
        int VAR22 = strlen(VAR21) + strlen("") + 1;
        VAR18 = FUN3(VAR22);
        FUN4(VAR18, VAR22, VAR21);
        FUN5(VAR18, VAR22, "");
    }
    if (FUN2(VAR2, ""))
    {
        if (VAR18)
        {
            FUN6(VAR18);
        }
        VAR18 = FUN7(FUN2(VAR2, ""));
    }
    if (FUN2(VAR2, "") && FUN2(VAR2, "")[0] == '')
    {
        VAR19 = 1;
    }
    FUN8(VAR2, VAR23, NULL, 0);
    VAR20 = FUN9(VAR7, "", VAR5, VAR19, VAR18, VAR10, VAR11, VAR14, VAR15, VAR12, VAR13, VAR16, VAR17);
    while (VAR24)
    {
        VAR9 = VAR24;
        VAR24 = VAR9->VAR25;
        FUN6(VAR9);
    }
    FUN6(VAR18);
    return VAR20;
}