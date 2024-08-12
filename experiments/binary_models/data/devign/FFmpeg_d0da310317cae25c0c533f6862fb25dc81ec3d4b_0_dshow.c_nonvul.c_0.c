FUN1(VAR1 *VAR2, enum dshowDeviceType VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = 0;
    VAR6 *VAR10 = NULL;
    VAR6 *VAR11;
    int VAR12;
    const VAR13 *VAR14[2] = {&VAR15, &VAR16};
    const char *VAR17 = (VAR3 == VAR18) ? "" : "";
    VAR12 = FUN2(VAR5, &VAR9);
    if (VAR12 != VAR19)
    {
        FUN3(VAR2, VAR20, "");
        return FUN4(VAR21);
    }
    while (FUN5(VAR9, 1, &VAR11, NULL) == VAR19 && !VAR10)
    {
        VAR22 *VAR23 = NULL;
        VAR24 *VAR25 = NULL;
        PIN_INFO VAR26 = {0};
        VAR27 *VAR28;
        GUID VAR29;
        DWORD VAR30;
        FUN6(VAR11, &VAR26);
        FUN7(VAR26.VAR31);
        if (VAR26.VAR32 != VAR33)
            goto VAR34;
        if (FUN8(VAR11, &VAR35, (void **)&VAR23) != VAR19)
            goto VAR34;
        if (FUN9(VAR23, &VAR36, VAR37, NULL, 0, &VAR29, sizeof(VAR13), &VAR30) != VAR19)
            goto VAR34;
        if (!FUN10(&VAR29, &VAR38))
            goto VAR34;
        if (FUN11(VAR11, &VAR25) != VAR19)
            goto VAR34;
        FUN12(VAR25);
        while (FUN13(VAR25, 1, &VAR28, NULL) == VAR19 && !VAR10)
        {
            if (FUN10(&VAR28->VAR39, VAR14[VAR3]))
            {
                VAR10 = VAR11;
                goto VAR34;
            }
            FUN14(VAR28);
        }
    VAR34:
        if (VAR25)
            FUN15(VAR25);
        if (VAR23)
            FUN16(VAR23);
        if (VAR10 != VAR11)
            FUN17(VAR11);
    }
    FUN18(VAR9);
    if (!VAR10)
    {
        FUN3(VAR2, VAR20, "", VAR17);
        return FUN4(VAR21);
    }
    *VAR7 = VAR10;
    return 0;
}