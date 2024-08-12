int FUN1(VAR1 **VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 **VAR8)
{
    VAR1 *VAR9;
    VAR10 *VAR11;
    const char *VAR12;
    bool VAR13 = false;
    VAR7 *VAR14 = NULL;
    int VAR15;
    if (VAR5 == NULL)
    {
        VAR5 = FUN2();
    }
    VAR9 = FUN3("");
    VAR9->VAR5 = VAR5;
    VAR5 = FUN4(VAR5);
    if (!VAR3)
    {
        VAR3 = FUN5(VAR5, "");
    }
    else if (VAR3 && !FUN6(VAR5, ""))
    {
        FUN7(VAR5, "", FUN8(VAR3));
        VAR13 = true;
    }
    else
    {
        FUN9(VAR8, ""
                         "");
        VAR15 = -VAR16;
        goto VAR17;
    }
    VAR12 = FUN5(VAR5, "");
    if (VAR12)
    {
        VAR11 = FUN10(VAR12, !(VAR6 & VAR18));
        if (!VAR11)
        {
            FUN9(VAR8, "", VAR12);
        }
        FUN11(VAR5, "");
    }
    else if (VAR3)
    {
        VAR11 = FUN12(VAR3, VAR13);
        if (!VAR11)
        {
            FUN9(VAR8, "");
        }
    }
    else
    {
        FUN9(VAR8, "");
        VAR11 = NULL;
    }
    if (!VAR11)
    {
        VAR15 = -VAR19;
        goto VAR17;
    }
    if (VAR11->VAR20 && VAR3)
    {
        VAR11->FUN13(VAR3, VAR5, &VAR14);
        if (FUN14(&VAR14))
        {
            FUN15(VAR8, VAR14);
            VAR15 = -VAR16;
            goto VAR17;
        }
        FUN11(VAR5, "");
    }
    else if (VAR11->VAR21 && !VAR3)
    {
        FUN9(VAR8, "", VAR11->VAR22);
        VAR15 = -VAR16;
        goto VAR17;
    }
    VAR15 = FUN16(VAR9, NULL, VAR5, VAR6, VAR11, &VAR14);
    if (VAR15 < 0)
    {
        FUN15(VAR8, VAR14);
        goto VAR17;
    }
    if (FUN17(VAR5) != 0)
    {
        const VAR23 *VAR24 = FUN18(VAR5);
        FUN9(VAR8, "", VAR11->VAR22, VAR24->VAR25);
        VAR15 = -VAR16;
        goto VAR17;
    }
    FUN19(VAR5);
    VAR9->VAR26 = 1;
    *VAR2 = VAR9;
    return 0;
VAR17:
    FUN19(VAR5);
    if (!VAR9->VAR11)
    {
        FUN19(VAR9->VAR5);
    }
    FUN20(VAR9);
    return VAR15;
}