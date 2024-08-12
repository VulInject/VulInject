FUN1(VAR1 *VAR2, VAR3 *VAR4, enum dshowDeviceType VAR5, enum dshowSourceFilterType VAR6, VAR7 **VAR8)
{
    struct VAR9 *VAR10 = VAR2->VAR11;
    VAR7 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    VAR15 *VAR16 = NULL;
    const char *VAR17 = VAR10->VAR17[VAR5];
    int VAR18 = (VAR5 == VAR19) ? VAR10->VAR20 : VAR10->VAR21;
    int VAR22;
    const VAR23 *VAR24[2] = {&VAR25, &VAR26};
    const char *VAR27 = (VAR5 == VAR19) ? "" : "";
    const char *VAR28 = (VAR6 == VAR29) ? "" : "";
    VAR22 = FUN2(VAR4, VAR24[VAR6], (VAR13 **)&VAR14, 0);
    if (VAR22 != VAR30)
    {
        FUN3(VAR2, VAR31, "", VAR27);
        return FUN4(VAR32);
    }
    while (!VAR12 && FUN5(VAR14, 1, &VAR16, NULL) == VAR30)
    {
        VAR33 *VAR34 = NULL;
        char *VAR35 = NULL;
        char *VAR36 = NULL;
        VARIANT VAR37;
        VAR38 *VAR39 = NULL;
        LPOLESTR VAR40 = NULL;
        LPMALLOC VAR41 = NULL;
        int VAR42;
        VAR22 = FUN6(1, &VAR41);
        if (VAR22 != VAR30)
            goto VAR43;
        VAR22 = FUN7(0, &VAR39);
        if (VAR22 != VAR30)
            goto VAR43;
        VAR22 = FUN8(VAR16, VAR39, NULL, &VAR40);
        if (VAR22 != VAR30)
            goto VAR43;
        VAR36 = FUN9(VAR40);
        for (VAR42 = 0; VAR42 < strlen(VAR36); VAR42++)
        {
            if (VAR36[VAR42] == '')
                VAR36[VAR42] = '';
        }
        VAR22 = FUN10(VAR16, 0, 0, &VAR44, (void *)&VAR34);
        if (VAR22 != VAR30)
            goto VAR43;
        VAR37.VAR45 = VAR46;
        VAR22 = FUN11(VAR34, VAR47"", &VAR37, NULL);
        if (VAR22 != VAR30)
            goto VAR43;
        VAR35 = FUN9(VAR37.VAR48);
        if (VAR8)
        {
            if (strcmp(VAR17, VAR35) && strcmp(VAR17, VAR36))
                goto VAR43;
            if (!VAR18--)
            {
                VAR22 = FUN12(VAR16, 0, 0, &VAR49, (void *)&VAR12);
                if (VAR22 != VAR30)
                {
                    FUN3(VAR2, VAR31, "", VAR17);
                    goto VAR43;
                }
            }
        }
        else
        {
            FUN3(VAR2, VAR50, ""%VAR51\"", VAR35);
            FUN3(VAR2, VAR50, ""%VAR51\"", VAR36);
        }
    VAR43:
        if (VAR40 && VAR41)
            FUN13(VAR41, VAR40);
        if (VAR39)
            FUN14(VAR39);
        FUN15(VAR35);
        FUN15(VAR36);
        if (VAR34)
            FUN16(VAR34);
        FUN17(VAR16);
    }
    FUN18(VAR14);
    if (VAR8)
    {
        if (!VAR12)
        {
            FUN3(VAR2, VAR31, "", VAR27, VAR17, VAR28);
            return FUN4(VAR32);
        }
        *VAR8 = VAR12;
    }
    return 0;
}