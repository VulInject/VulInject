int FUN1(VAR1 **VAR2, const char *VAR3, const char *VAR4, VAR5 *VAR6, int VAR7, VAR8 **VAR9)
{
    VAR1 *VAR10 = NULL;
    VAR11 *VAR12;
    const char *VAR13;
    bool VAR14 = false;
    VAR8 *VAR15 = NULL;
    int VAR16;
    if (VAR6 == NULL)
    {
        VAR6 = FUN2();
    }
    if (VAR4)
    {
        if (VAR3 || FUN3(VAR6))
        {
            FUN4(VAR9, ""
                             "");
            return -VAR17;
        }
        FUN5(VAR6);
        VAR10 = FUN6(VAR4);
        if (!VAR10)
        {
            FUN4(VAR9, "", VAR4);
            return -VAR18;
        }
        FUN7(VAR10);
        *VAR2 = VAR10;
        return 0;
    }
    VAR10 = FUN8("");
    VAR10->VAR6 = VAR6;
    VAR6 = FUN9(VAR6);
    if (!VAR3)
    {
        VAR3 = FUN10(VAR6, "");
    }
    else if (VAR3 && !FUN11(VAR6, ""))
    {
        FUN12(VAR6, "", FUN13(VAR3));
        VAR14 = true;
    }
    else
    {
        FUN4(VAR9, ""
                         "");
        VAR16 = -VAR17;
        goto VAR19;
    }
    VAR13 = FUN10(VAR6, "");
    if (VAR13)
    {
        VAR12 = FUN14(VAR13);
        if (!VAR12)
        {
            FUN4(VAR9, "", VAR13);
        }
        FUN15(VAR6, "");
    }
    else if (VAR3)
    {
        VAR12 = FUN16(VAR3, VAR14);
        if (!VAR12)
        {
            FUN4(VAR9, "");
        }
    }
    else
    {
        FUN4(VAR9, "");
        VAR12 = NULL;
    }
    if (!VAR12)
    {
        VAR16 = -VAR20;
        goto VAR19;
    }
    if (VAR12->VAR21 && VAR3)
    {
        VAR12->FUN17(VAR3, VAR6, &VAR15);
        if (FUN18(&VAR15))
        {
            FUN19(VAR9, VAR15);
            VAR16 = -VAR17;
            goto VAR19;
        }
        FUN15(VAR6, "");
    }
    else if (VAR12->VAR22 && !VAR3)
    {
        FUN4(VAR9, "", VAR12->VAR23);
        VAR16 = -VAR17;
        goto VAR19;
    }
    if (!VAR12->VAR24)
    {
        VAR16 = FUN20(VAR10, VAR3, VAR6, VAR7, VAR12, &VAR15);
        VAR6 = NULL;
    }
    else
    {
        VAR16 = FUN21(VAR10, NULL, VAR6, VAR7, VAR12, &VAR15);
    }
    if (VAR16 < 0)
    {
        FUN19(VAR9, VAR15);
        goto VAR19;
    }
    if (VAR6 && (FUN3(VAR6) != 0))
    {
        const VAR25 *VAR26 = FUN22(VAR6);
        FUN4(VAR9, "", VAR12->VAR23, VAR26->VAR27);
        VAR16 = -VAR17;
        goto VAR19;
    }
    FUN5(VAR6);
    VAR10->VAR28 = 1;
    *VAR2 = VAR10;
    return 0;
VAR19:
    FUN5(VAR6);
    if (!VAR10->VAR12)
    {
        FUN5(VAR10->VAR6);
    }
    FUN23(VAR10);
    return VAR16;
}