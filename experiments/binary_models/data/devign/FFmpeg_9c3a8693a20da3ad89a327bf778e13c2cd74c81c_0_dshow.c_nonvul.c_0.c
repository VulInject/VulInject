FUN1(VAR1 *VAR2, VAR3 *VAR4, enum dshowDeviceType VAR5, VAR6 **VAR7)
{
    struct VAR8 *VAR9 = VAR2->VAR10;
    VAR6 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    const char *VAR16 = VAR9->VAR16[VAR5];
    int VAR17 = (VAR5 == VAR18) ? VAR9->VAR19 : VAR9->VAR20;
    int VAR21;
    const VAR22 *VAR23[2] = {&VAR24, &VAR25};
    const char *VAR26 = (VAR5 == VAR18) ? "" : "";
    VAR21 = FUN2(VAR4, VAR23[VAR5], (VAR12 **)&VAR13, 0);
    if (VAR21 != VAR27)
    {
        FUN3(VAR2, VAR28, "", VAR26);
        return FUN4(VAR29);
    }
    while (!VAR11 && FUN5(VAR13, 1, &VAR15, NULL) == VAR27)
    {
        VAR30 *VAR31 = NULL;
        char *VAR32 = NULL;
        VARIANT VAR33;
        VAR21 = FUN6(VAR15, 0, 0, &VAR34, (void *)&VAR31);
        if (VAR21 != VAR27)
            goto VAR35;
        VAR33.VAR36 = VAR37;
        VAR21 = FUN7(VAR31, VAR38"", &VAR33, NULL);
        if (VAR21 != VAR27)
            goto VAR35;
        VAR32 = FUN8(VAR33.VAR39);
        if (VAR7)
        {
            if (strcmp(VAR16, VAR32))
                goto VAR35;
            if (!VAR17--)
                FUN9(VAR15, 0, 0, &VAR40, (void *)&VAR11);
        }
        else
        {
            FUN3(VAR2, VAR41, ""%VAR42\"", VAR32);
        }
    VAR35:
        FUN10(VAR32);
        if (VAR31)
            FUN11(VAR31);
        FUN12(VAR15);
    }
    FUN13(VAR13);
    if (VAR7)
    {
        if (!VAR11)
        {
            FUN3(VAR2, VAR28, "", VAR26);
            return FUN4(VAR29);
        }
        *VAR7 = VAR11;
    }
    return 0;
}