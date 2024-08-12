int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    enum AVDiscard VAR15;
    VAR16 *FUN2(VAR17), *VAR18;
    if (VAR7)
        VAR11 = FUN3(VAR9, VAR6->VAR3, VAR6->VAR19);
    else
        VAR11 = FUN4(VAR9, VAR6->VAR3, VAR6->VAR19);
    if (VAR11 < 0)
        goto VAR20;
    VAR18 = VAR9->VAR21[VAR22];
    VAR13 = VAR9->VAR23 || VAR9->VAR24 == VAR22 || VAR9->VAR25 == VAR22;
    VAR15 = !VAR13 ? VAR26 : !VAR9->VAR27 ? VAR28
                                                                : VAR29;
    if (VAR2->VAR30 >= VAR15)
    {
        VAR9->VAR31 = 1;
        memcpy(&VAR9->VAR32[0], &VAR9->VAR21[0], sizeof(VAR9->VAR21[0]) * 4);
        goto VAR33;
    }
    VAR9->VAR34 = VAR9->VAR35.VAR36 && VAR2->VAR37 < VAR15;
    for (VAR12 = 0; VAR12 < 5; VAR12++)
        if (VAR9->VAR38[VAR12].VAR39.VAR40->VAR3[0] && &VAR9->VAR38[VAR12] != VAR18 && &VAR9->VAR38[VAR12] != VAR9->VAR21[VAR41] && &VAR9->VAR38[VAR12] != VAR9->VAR21[VAR42] && &VAR9->VAR38[VAR12] != VAR9->VAR21[VAR43])
            FUN5(VAR9, &VAR9->VAR38[VAR12]);
    VAR17 = VAR9->VAR21[VAR22] = FUN6(VAR9);
    if (!VAR9->VAR44)
        VAR2->VAR44 = VAR45;
    if (VAR9->VAR46)
        VAR2->VAR47 = VAR48;
    else
        VAR2->VAR47 = VAR49;
    if (!VAR9->VAR27 && (!VAR9->VAR21[VAR41] || !VAR9->VAR21[VAR42] || !VAR9->VAR21[VAR43]))
    {
        FUN7(VAR2, VAR50, "");
        VAR11 = VAR51;
        goto VAR20;
    }
    VAR17->VAR39.VAR40->VAR52 = VAR9->VAR27;
    VAR17->VAR39.VAR40->VAR53 = VAR9->VAR27 ? VAR54 : VAR55;
    if ((VAR11 = FUN8(VAR9, VAR17, VAR13)) < 0)
        goto VAR20;
    if (VAR9->VAR25 != VAR56)
        VAR9->VAR32[VAR43] = VAR9->VAR21[VAR9->VAR25];
    else
        VAR9->VAR32[VAR43] = VAR9->VAR21[VAR43];
    if (VAR9->VAR24 != VAR56)
        VAR9->VAR32[VAR42] = VAR9->VAR21[VAR9->VAR24];
    else
        VAR9->VAR32[VAR42] = VAR9->VAR21[VAR42];
    if (VAR9->VAR23)
        VAR9->VAR32[VAR41] = VAR17;
    else
        VAR9->VAR32[VAR41] = VAR9->VAR21[VAR41];
    VAR9->VAR32[VAR22] = VAR17;
    if (VAR2->VAR57->VAR58)
        FUN9(VAR2);
    VAR9->VAR59 = VAR17->VAR39.VAR40->VAR59[0];
    VAR9->VAR60 = VAR17->VAR39.VAR40->VAR59[1];
    memset(VAR9->VAR61, 0, VAR9->VAR62 * sizeof(*VAR9->VAR61));
    if (!VAR9->VAR63)
        memset(VAR9->VAR64 + VAR9->VAR65 * 2 - 1, 0, (VAR9->VAR62 + 1) * sizeof(*VAR9->VAR64));
    if (!VAR9->VAR63 && VAR9->VAR27)
        memset(VAR9->VAR66, VAR67, VAR9->VAR62 * 4);
    memset(VAR9->VAR68, 0, sizeof(VAR9->VAR68));
    if (VAR9->VAR63 == 1)
    {
        if (VAR18 && VAR9->VAR69.VAR70 && !VAR9->VAR69.VAR71)
            FUN10(&VAR18->VAR39, 1, 0);
        if (VAR7)
            FUN11(VAR2, VAR17, VAR18);
        else
            FUN12(VAR2, VAR17, VAR18);
    }
    if (VAR2->VAR72 == VAR73)
        VAR14 = 1;
    else
        VAR14 = FUN13(VAR9->VAR74, VAR2->VAR75);
    VAR9->VAR14 = VAR14;
    VAR9->VAR17 = VAR17;
    VAR9->VAR18 = VAR18;
    VAR9->VAR76.VAR77.VAR78 = -VAR79;
    VAR9->VAR76.VAR80.VAR78 = ((VAR9->VAR65 - 1) << 6) + VAR79;
    for (VAR12 = 0; VAR12 < VAR81; VAR12++)
    {
        VAR82 *VAR83 = &VAR9->VAR84[VAR12];
        FUN14(&VAR83->VAR85, 0);
        FUN14(&VAR83->VAR86, VAR87);
    }
    if (VAR7)
        VAR2->FUN15(VAR2, VAR88, VAR9->VAR84, NULL, VAR14);
    else
        VAR2->FUN15(VAR2, VAR89, VAR9->VAR84, NULL, VAR14);
    FUN16(&VAR17->VAR39, VAR87, 0);
    memcpy(&VAR9->VAR21[0], &VAR9->VAR32[0], sizeof(VAR9->VAR21[0]) * 4);
VAR33:
    if (!VAR9->VAR90)
        VAR9->VAR91[0] = VAR9->VAR91[1];
    if (!VAR9->VAR31)
    {
        if ((VAR11 = FUN17(VAR3, VAR17->VAR39.VAR40)) < 0)
            return VAR11;
        *VAR4 = 1;
    }
    return VAR6->VAR19;
VAR20:
    memcpy(&VAR9->VAR32[0], &VAR9->VAR21[0], sizeof(VAR9->VAR21[0]) * 4);
    return VAR11;