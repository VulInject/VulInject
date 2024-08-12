static void FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    int VAR6;
    char *VAR7;
    void *VAR8;
    char VAR9[32];
    const VAR10 *VAR11;
    if (!VAR2->VAR12)
        return;
    if (strlen(VAR2->VAR12) == 0)
        return;
    if (!VAR2->VAR13)
    {
        int class = FUN2(VAR2->VAR14 + VAR15);
        if (FUN3(VAR2)->VAR16)
        {
            FUN4(VAR5, ""
                             "");
            return;
        }
        if (class == 0x0300)
        {
            FUN5(VAR2->VAR12);
        }
        else
        {
            FUN6(VAR2->VAR12, -1);
        }
        return;
    }
    VAR7 = FUN7(VAR17, VAR2->VAR12);
    if (VAR7 == NULL)
    {
        VAR7 = FUN8(VAR2->VAR12);
    }
    VAR6 = FUN9(VAR7);
    if (VAR6 < 0)
    {
        FUN4(VAR5, ""%VAR18\"", VAR2->VAR12);
        FUN10(VAR7);
        return;
    }
    else if (VAR6 == 0)
    {
        FUN4(VAR5, ""%VAR18\"", VAR2->VAR12);
        FUN10(VAR7);
        return;
    }
    VAR6 = FUN11(VAR6);
    VAR11 = FUN12(FUN3(VAR2));
    if (VAR11)
    {
        snprintf(VAR9, sizeof(VAR9), "", VAR11->VAR9);
    }
    else
    {
        snprintf(VAR9, sizeof(VAR9), "", FUN13(FUN14(VAR2)));
    }
    VAR2->VAR19 = true;
    FUN15(&VAR2->VAR20, FUN14(VAR2), VAR9, VAR6, &VAR21);
    FUN16(&VAR2->VAR20, &VAR2->VAR22);
    VAR8 = FUN17(&VAR2->VAR20);
    FUN18(VAR7, VAR8);
    FUN10(VAR7);
    if (VAR3)
    {
        FUN19(VAR2, VAR8, VAR6);
    }
    FUN20(VAR2, VAR23, 0, &VAR2->VAR20);
}