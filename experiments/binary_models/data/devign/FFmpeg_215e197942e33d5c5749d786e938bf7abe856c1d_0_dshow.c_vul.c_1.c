FUN1(VAR1 *VAR2, enum dshowDeviceType VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    struct VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = 0;
    VAR6 *VAR13 = NULL;
    VAR6 *VAR14;
    int VAR15;
    const VAR16 *VAR17[2] = {&VAR18, &VAR19};
    const char *VAR20 = (VAR3 == VAR21) ? "" : "";
    int VAR22 = (VAR3 == VAR21 && (VAR9->VAR23 || VAR9->VAR24)) || (VAR3 == VAR25 && (VAR9->VAR26 || VAR9->VAR27));
    int VAR28 = 0;
    VAR15 = FUN2(VAR5, &VAR12);
    if (VAR15 != VAR29)
    {
        FUN3(VAR2, VAR30, "");
        return FUN4(VAR31);
    }
    if (!VAR7)
    {
        FUN3(VAR2, VAR32, "", VAR20);
    }
    while (FUN5(VAR12, 1, &VAR14, NULL) == VAR29 && !VAR13)
    {
        VAR33 *VAR34 = NULL;
        VAR35 *VAR36 = NULL;
        PIN_INFO VAR37 = {0};
        VAR38 *VAR39;
        GUID VAR40;
        DWORD VAR41;
        FUN6(VAR14, &VAR37);
        FUN7(VAR37.VAR42);
        if (VAR37.VAR43 != VAR44)
            goto VAR45;
        if (FUN8(VAR14, &VAR46, (void **)&VAR34) != VAR29)
            goto VAR45;
        if (FUN9(VAR34, &VAR47, VAR48, NULL, 0, &VAR40, sizeof(VAR16), &VAR41) != VAR29)
            goto VAR45;
        if (!FUN10(&VAR40, &VAR49))
            goto VAR45;
        if (!VAR7)
        {
            char *VAR50 = FUN11(VAR37.VAR51);
            FUN3(VAR2, VAR32, ""%VAR52\"", VAR50);
            FUN12(VAR50);
            FUN13(VAR2, VAR3, VAR14, NULL);
            goto VAR45;
        }
        if (VAR22)
        {
            FUN13(VAR2, VAR3, VAR14, &VAR28);
            if (!VAR28)
            {
                goto VAR45;
            }
        }
        if (FUN14(VAR14, &VAR36) != VAR29)
            goto VAR45;
        FUN15(VAR36);
        while (FUN16(VAR36, 1, &VAR39, NULL) == VAR29 && !VAR13)
        {
            if (FUN10(&VAR39->VAR53, VAR17[VAR3]))
            {
                VAR13 = VAR14;
                goto VAR45;
            }
            FUN17(VAR39);
        }
    VAR45:
        if (VAR36)
            FUN18(VAR36);
        if (VAR34)
            FUN19(VAR34);
        if (VAR13 != VAR14)
            FUN20(VAR14);
    }
    FUN21(VAR12);
    if (VAR7)
    {
        if (VAR22 && !VAR28)
        {
            FUN3(VAR2, VAR30, "", VAR20);
            return FUN4(VAR31);
        }
        if (!VAR13)
        {
            FUN3(VAR2, VAR30, "", VAR20);
            return FUN4(VAR31);
        }
        *VAR7 = VAR13;
    }
    return 0;
}