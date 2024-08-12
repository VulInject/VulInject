void FUN1(const char *VAR1, const char *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11;
    VAR8 *VAR12 = NULL;
    VAR4 *VAR13 = NULL;
    bool VAR14;
    int VAR15;
    int VAR16;
    VAR7 = FUN2(VAR1);
    if (!VAR7)
    {
        FUN3(VAR5, VAR17, "", VAR1);
        return;
    }
    VAR11 = FUN4(VAR7);
    FUN5(VAR11);
    if (!FUN6(VAR7))
    {
        FUN7(VAR5, "", VAR1);
        goto VAR18;
    }
    VAR9 = FUN8(VAR7);
    VAR12 = FUN9(NULL, VAR2, &VAR13);
    if (VAR13)
    {
        FUN10(VAR5, VAR13);
        goto VAR18;
    }
    if (!VAR12)
    {
        FUN7(VAR5, "");
        goto VAR18;
    }
    if (FUN11(VAR12) == VAR12)
    {
        FUN7(VAR5, ""
                         "");
        goto VAR18;
    }
    if (FUN12(VAR9, VAR19, VAR5))
    {
        goto VAR18;
    }
    if (!FUN13(VAR9, VAR12))
    {
        FUN7(VAR5, "", VAR1);
        goto VAR18;
    }
    VAR15 = VAR12->VAR15;
    VAR14 = FUN14(VAR12);
    if (VAR14)
    {
        FUN15(VAR12, VAR15 | VAR20, &VAR13);
        if (VAR13)
        {
            FUN10(VAR5, VAR13);
            goto VAR18;
        }
    }
    VAR16 = FUN16(VAR12, VAR3, VAR12->VAR21 ? VAR12->VAR21->VAR22 : "");
    if (VAR16 < 0)
    {
        FUN17(VAR5, -VAR16, "", VAR3);
    }
    if (VAR14)
    {
        FUN15(VAR12, VAR15, &VAR13);
        FUN10(VAR5, VAR13);
    }
VAR18:
    FUN18(VAR11);
}