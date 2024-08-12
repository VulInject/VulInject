FUN1(VAR1 *VAR2, VAR3 *VAR4, enum dshowDeviceType VAR5, VAR6 **VAR7)
{
    struct VAR8 *VAR9 = VAR2->VAR10;
    VAR6 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    const char *VAR16 = VAR9->VAR16[VAR5];
    int VAR17;
    const VAR18 *VAR19[2] = {&VAR20, &VAR21};
    const char *VAR22 = (VAR5 == VAR23) ? "" : "";
    VAR17 = FUN2(VAR4, VAR19[VAR5], (VAR12 **)&VAR13, 0);
    if (VAR17 != VAR24)
    {
        FUN3(VAR2, VAR25, "", VAR22);
        return FUN4(VAR26);
    }
    while (FUN5(VAR13, 1, &VAR15, NULL) == VAR24 && !VAR11)
    {
        VAR27 *VAR28 = NULL;
        char *VAR29 = NULL;
        VARIANT VAR30;
        VAR17 = FUN6(VAR15, 0, 0, &VAR31, (void *)&VAR28);
        if (VAR17 != VAR24)
            goto VAR32;
        VAR30.VAR33 = VAR34;
        VAR17 = FUN7(VAR28, VAR35"", &VAR30, NULL);
        if (VAR17 != VAR24)
            goto VAR32;
        VAR29 = FUN8(VAR30.VAR36);
        if (VAR7)
        {
            if (strcmp(VAR16, VAR29))
                goto VAR32;
            FUN9(VAR15, 0, 0, &VAR37, (void *)&VAR11);
        }
        else
        {
            FUN3(VAR2, VAR38, ""%VAR39\"", VAR29);
        }
    VAR32:
        if (VAR29)
            FUN10(VAR29);
        if (VAR28)
            FUN11(VAR28);
        FUN12(VAR15);
    }
    FUN13(VAR13);
    if (VAR7)
    {
        if (!VAR11)
        {
            FUN3(VAR2, VAR25, "", VAR22);
            return FUN4(VAR26);
        }
        *VAR7 = VAR11;
    }
    return 0;
}