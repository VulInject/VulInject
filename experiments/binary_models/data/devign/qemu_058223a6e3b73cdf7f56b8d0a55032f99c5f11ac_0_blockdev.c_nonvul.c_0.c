void FUN1(bool VAR1, const char *VAR2, const char *VAR3, bool VAR4, const char *VAR5, bool VAR6, const char *VAR7, bool VAR8, const char *VAR9, bool VAR10, int64_t VAR11, VAR12 **VAR13)
{
    VAR14 *VAR15;
    VAR14 *VAR16;
    VAR14 *VAR17, *VAR18;
    VAR19 *VAR20;
    VAR12 *VAR21 = NULL;
    BlockdevOnError VAR22 = VAR23;
    if (!VAR10)
    {
        VAR11 = 0;
    }
    VAR15 = FUN2(VAR3, &VAR21);
    if (!VAR15)
    {
        VAR15 = FUN3(VAR3, VAR3, NULL);
        if (!VAR15)
        {
            FUN4(VAR21);
            FUN5(VAR13, VAR24, "", VAR3);
        }
        else
        {
            FUN6(VAR13, VAR21);
        }
        return;
    }
    VAR20 = FUN7(VAR15);
    FUN8(VAR20);
    if (FUN9(VAR15, VAR25, VAR13))
    {
        goto VAR26;
    }
    VAR18 = VAR15;
    if (VAR6 && VAR7)
    {
        if (strcmp(VAR15->VAR27, VAR7) != 0)
        {
            VAR18 = FUN10(VAR15, VAR7);
        }
    }
    if (VAR18 == NULL)
    {
        FUN11(VAR13, "", VAR7 ? VAR7 : "");
        goto VAR26;
    }
    assert(FUN7(VAR18) == VAR20);
    if (VAR4 && VAR5)
    {
        VAR17 = FUN10(VAR18, VAR5);
    }
    else
    {
        VAR17 = FUN12(VAR18);
    }
    if (VAR17 == NULL)
    {
        FUN11(VAR13, VAR28, VAR5 ? VAR5 : "");
        goto VAR26;
    }
    assert(FUN7(VAR17) == VAR20);
    for (VAR16 = VAR18; VAR16 != FUN13(VAR17); VAR16 = FUN13(VAR16))
    {
        if (FUN9(VAR16, VAR29, VAR13))
        {
            goto VAR26;
        }
    }
    if (VAR18 == VAR17)
    {
        FUN11(VAR13, "");
        goto VAR26;
    }
    if (VAR18 == VAR15)
    {
        if (VAR8)
        {
            FUN11(VAR13, ""
                             "");
            goto VAR26;
        }
        FUN14(VAR1 ? VAR2 : NULL, VAR15, VAR17, VAR11, VAR22, VAR30, VAR15, &VAR21, false);
    }
    else
    {
        VAR14 *VAR31 = FUN15(VAR15, VAR18);
        if (FUN9(VAR31, VAR29, VAR13))
        {
            goto VAR26;
        }
        FUN16(VAR1 ? VAR2 : NULL, VAR15, VAR17, VAR18, VAR11, VAR22, VAR30, VAR15, VAR8 ? VAR9 : NULL, &VAR21);
    }
    if (VAR21 != NULL)
    {
        FUN6(VAR13, VAR21);
        goto VAR26;
    }
VAR26:
    FUN17(VAR20);
}