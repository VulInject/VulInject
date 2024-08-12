static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    HANDLE VAR14;
    HANDLE VAR15;
    int VAR16 = FUN2(VAR17);
    int VAR18;
    FUN3(0);
    if (!VAR4->VAR19 && !FUN4(VAR2))
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR4->VAR22 = VAR2->VAR22 ? VAR2->VAR22 : VAR23;
    if (VAR4->VAR24 != VAR25)
    {
        if (VAR4->VAR22 != VAR23)
        {
            FUN5(VAR2, VAR20, ""
                                        "");
            VAR16 = FUN2(VAR26);
            goto VAR21;
        }
    }
    if (VAR4->VAR27)
    {
        VAR18 = FUN6(&VAR4->VAR28, VAR4->VAR27);
        if (VAR18 < 0)
        {
            FUN5(VAR2, VAR20, "", VAR4->VAR27);
            goto VAR21;
        }
    }
    VAR18 = FUN7(&VAR29, NULL, VAR30, &VAR31, (void **)&VAR7);
    if (VAR18 != VAR32)
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR4->VAR7 = VAR7;
    VAR18 = FUN7(&VAR33, NULL, VAR30, &VAR34, (void **)&VAR9);
    if (VAR18 != VAR32)
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    if (VAR4->VAR19)
    {
        FUN5(VAR2, VAR35, "");
        FUN8(VAR2, VAR9, VAR36, NULL);
        FUN5(VAR2, VAR35, "");
        FUN8(VAR2, VAR9, VAR37, NULL);
        VAR16 = VAR38;
        goto VAR21;
    }
    if (VAR4->VAR39)
    {
        if (VAR4->VAR40[VAR36])
            FUN9(VAR2, VAR9, VAR36);
        if (VAR4->VAR40[VAR37])
            FUN9(VAR2, VAR9, VAR37);
        VAR16 = VAR38;
        goto VAR21;
    }
    if (VAR4->VAR40[VAR36])
    {
        if ((VAR18 = FUN10(VAR2, VAR9, VAR36)) < 0 || (VAR18 = FUN11(VAR2, VAR36)) < 0)
        {
            VAR16 = VAR18;
            goto VAR21;
        }
    }
    if (VAR4->VAR40[VAR37])
    {
        if ((VAR18 = FUN10(VAR2, VAR9, VAR37)) < 0 || (VAR18 = FUN11(VAR2, VAR37)) < 0)
        {
            VAR16 = VAR18;
            goto VAR21;
        }
    }
    VAR4->mutex = FUN12(NULL, 0, NULL);
    if (!VAR4->mutex)
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR4->VAR41[1] = FUN13(NULL, 1, 0, NULL);
    if (!VAR4->VAR41[1])
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR18 = FUN14(VAR7, &VAR42, (void **)&VAR11);
    if (VAR18 != VAR32)
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR4->VAR11 = VAR11;
    VAR18 = FUN14(VAR7, &VAR43, (void **)&VAR13);
    if (VAR18 != VAR32)
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR4->VAR13 = VAR13;
    VAR18 = FUN15(VAR13, (void *)&VAR14);
    if (VAR18 != VAR32)
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR15 = FUN16();
    VAR18 = FUN17(VAR15, VAR14, VAR15, &VAR4->VAR41[0], 0, 0, VAR44);
    if (!VAR18)
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR18 = FUN18(VAR11);
    if (VAR18 == VAR45)
    {
        OAFilterState VAR46;
        VAR18 = FUN19(VAR11, 0, &VAR46);
    }
    if (VAR18 != VAR32)
    {
        FUN5(VAR2, VAR20, "");
        goto VAR21;
    }
    VAR16 = 0;
VAR21:
    if (VAR9)
        FUN20(VAR9);
    if (VAR16 < 0)
        FUN21(VAR2);
    return VAR16;
}