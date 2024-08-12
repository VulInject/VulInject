static int FUN1(VAR1 *VAR2, bool VAR3)
{
    int VAR4;
    char *VAR5;
    void *VAR6;
    char VAR7[32];
    const VAR8 *VAR9;
    if (!VAR2->VAR10)
        return 0;
    if (strlen(VAR2->VAR10) == 0)
        return 0;
    if (!VAR2->VAR11)
    {
        int class = FUN2(VAR2->VAR12 + VAR13);
        if (class == 0x0300)
        {
            FUN3(VAR2->VAR10);
        }
        else
        {
            FUN4(VAR2->VAR10, -1);
        }
        return 0;
    }
    VAR5 = FUN5(VAR14, VAR2->VAR10);
    if (VAR5 == NULL)
    {
        VAR5 = FUN6(VAR2->VAR10);
    }
    VAR4 = FUN7(VAR5);
    if (VAR4 < 0)
    {
        FUN8(""%VAR15\"", VAR16, VAR2->VAR10);
        FUN9(VAR5);
        return -1;
    }
    else if (VAR4 == 0)
    {
        FUN8(""%VAR15\"", VAR16, VAR2->VAR10);
        FUN9(VAR5);
        return -1;
    }
    if (VAR4 & (VAR4 - 1))
    {
        VAR4 = 1 << FUN10(VAR4);
    }
    VAR9 = FUN11(FUN12(VAR2));
    if (VAR9)
    {
        snprintf(VAR7, sizeof(VAR7), "", VAR9->VAR7);
    }
    else
    {
        snprintf(VAR7, sizeof(VAR7), "", FUN13(FUN14(VAR2)));
    }
    VAR2->VAR17 = true;
    FUN15(&VAR2->VAR18, VAR7, VAR4);
    FUN16(&VAR2->VAR18, &VAR2->VAR19);
    VAR6 = FUN17(&VAR2->VAR18);
    FUN18(VAR5, VAR6);
    FUN9(VAR5);
    if (VAR3)
    {
        FUN19(VAR2, VAR6, VAR4);
    }
    FUN20(VAR6);
    FUN21(VAR2, VAR20, 0, &VAR2->VAR18);
    return 0;
}