int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6, *VAR7 = VAR3->VAR6;
    int VAR8 = VAR5->VAR9, VAR10 = 0;
    int VAR11 = 0;
    int VAR12, VAR13;
    if (VAR2 == VAR3)
        return 0;
    if (VAR8 && (VAR5->VAR14 != VAR7->VAR14 || VAR5->VAR15 != VAR7->VAR15 || VAR5->VAR16 != VAR7->VAR16 || VAR5->VAR17 != VAR7->VAR17 || VAR5->VAR18.VAR19 != VAR7->VAR18.VAR19 || VAR5->VAR18.VAR20 != VAR7->VAR18.VAR20 || VAR5->VAR18.VAR21 != VAR7->VAR18.VAR21))
    {
        VAR5->VAR22->VAR23 = VAR5->VAR18.VAR19;
        VAR5->VAR14 = VAR7->VAR14;
        VAR5->VAR15 = VAR7->VAR15;
        VAR5->VAR17 = VAR7->VAR17;
        VAR5->VAR16 = VAR7->VAR16;
        VAR5->VAR24 = VAR7->VAR24;
        VAR5->VAR25 = VAR7->VAR25;
        VAR5->VAR26 = VAR7->VAR26;
        if ((VAR13 = FUN2((void **)VAR5->VAR27, (void **)VAR7->VAR27, VAR28, sizeof(VAR29))) < 0)
            return VAR13;
        VAR5->VAR18 = VAR7->VAR18;
        if ((VAR13 = FUN2((void **)VAR5->VAR30, (void **)VAR7->VAR30, VAR31, sizeof(VAR32))) < 0)
            return VAR13;
        VAR5->VAR33 = VAR7->VAR33;
        if ((VAR10 = FUN3(VAR5, 1)) < 0)
        {
            FUN4(VAR5->VAR22, VAR34, "");
            return VAR10;
        }
        VAR11 = 1;
        FUN5(VAR5);
        VAR5->VAR35 = VAR7->VAR35;
    }
    memcpy(VAR5->VAR36, VAR7->VAR36, sizeof(VAR5->VAR36));
    if (!VAR8)
    {
        VAR37 *VAR38 = VAR5->VAR39;
        for (VAR12 = 0; VAR12 < VAR28; VAR12++)
            FUN6(VAR5->VAR27 + VAR12);
        for (VAR12 = 0; VAR12 < VAR31; VAR12++)
            FUN6(VAR5->VAR30 + VAR12);
        FUN7(VAR5, &VAR5->VAR40);
        memcpy(VAR5, VAR7, sizeof(VAR4));
        memset(VAR5->VAR27, 0, sizeof(VAR5->VAR27));
        memset(VAR5->VAR30, 0, sizeof(VAR5->VAR30));
        memset(&VAR5->VAR41, 0, sizeof(VAR5->VAR41));
        memset(&VAR5->VAR40, 0, sizeof(VAR5->VAR40));
        VAR5->VAR39 = VAR38;
        memset(&VAR5->VAR39[0].VAR42, 0, sizeof(VAR5->VAR39[0].VAR42));
        memset(&VAR5->VAR39[0].VAR43, 0, sizeof(VAR5->VAR39[0].VAR43));
        memset(&VAR5->VAR39[0].VAR44, 0, sizeof(VAR5->VAR39[0].VAR44));
        memset(&VAR5->VAR39[0].VAR45, 0, sizeof(VAR5->VAR39[0].VAR45));
        VAR5->VAR22 = VAR2;
        VAR5->VAR46 = NULL;
        VAR5->VAR47 = NULL;
        VAR5->VAR48 = NULL;
        VAR5->VAR49 = NULL;
        VAR5->VAR50 = NULL;
        VAR5->VAR51 = NULL;
        VAR5->VAR52 = NULL;
        VAR5->VAR53 = NULL;
        VAR5->VAR54 = NULL;
        VAR5->VAR55 = NULL;
        VAR5->VAR56 = NULL;
        memset(VAR5->VAR57, 0, sizeof(VAR5->VAR57));
        VAR5->VAR58 = NULL;
        VAR5->VAR59 = NULL;
        VAR5->VAR60 = NULL;
        VAR5->VAR61 = NULL;
        if (VAR7->VAR9)
        {
            VAR5->VAR9 = 0;
            memset(&VAR5->VAR41, 0, sizeof(VAR5->VAR41));
            FUN8(&VAR5->VAR41.VAR62);
            VAR5->VAR41.VAR63.VAR62 = &VAR5->VAR41.VAR62;
            VAR13 = FUN9(VAR5);
            if (VAR13 < 0)
            {
                FUN4(VAR2, VAR34, "");
                return VAR13;
            }
            VAR13 = FUN10(VAR5, &VAR5->VAR39[0]);
            if (VAR13 < 0)
            {
                FUN4(VAR2, VAR34, "");
                return VAR13;
            }
        }
        VAR5->VAR9 = VAR7->VAR9;
    }
    VAR5->VAR22->VAR64 = VAR7->VAR22->VAR64;
    VAR5->VAR22->VAR65 = VAR7->VAR22->VAR65;
    VAR5->VAR22->VAR14 = VAR7->VAR22->VAR14;
    VAR5->VAR22->VAR15 = VAR7->VAR22->VAR15;
    VAR5->VAR66 = VAR7->VAR66;
    VAR5->VAR67 = VAR7->VAR67;
    VAR5->VAR68 = VAR7->VAR68;
    VAR5->VAR69 = VAR7->VAR69;
    VAR5->VAR70 = VAR7->VAR70;
    for (VAR12 = 0; VAR5->VAR46 && VAR12 < VAR71; VAR12++)
    {
        FUN7(VAR5, &VAR5->VAR46[VAR12]);
        if (VAR7->VAR46 && VAR7->VAR46[VAR12].VAR62.VAR72[0] && (VAR13 = FUN11(VAR5, &VAR5->VAR46[VAR12], &VAR7->VAR46[VAR12])) < 0)
            return VAR13;
    }
    VAR5->VAR73 = FUN12(VAR7->VAR73, VAR5, VAR7);
    FUN7(VAR5, &VAR5->VAR41);
    if (VAR7->VAR41.VAR62.VAR72[0])
    {
        VAR13 = FUN11(VAR5, &VAR5->VAR41, &VAR7->VAR41);
        if (VAR13 < 0)
            return VAR13;
    }
    VAR5->VAR74 = VAR7->VAR74;
    VAR5->VAR70 = VAR7->VAR70;
    VAR5->VAR69 = VAR7->VAR69;
    VAR5->VAR75 = VAR7->VAR75;
    if ((VAR13 = FUN2((void **)VAR5->VAR27, (void **)VAR7->VAR27, VAR28, sizeof(VAR29))) < 0)
        return VAR13;
    VAR5->VAR18 = VAR7->VAR18;
    if ((VAR13 = FUN2((void **)VAR5->VAR30, (void **)VAR7->VAR30, VAR31, sizeof(VAR32))) < 0)
        return VAR13;
    VAR5->VAR33 = VAR7->VAR33;
    FUN13(VAR5, VAR7, VAR76, VAR77);
    for (VAR12 = 0; VAR12 < 6; VAR12++)
        VAR5->VAR77[VAR12] = VAR5->VAR76[0] + (VAR7->VAR77[VAR12] - VAR7->VAR76[0]);
    for (VAR12 = 0; VAR12 < 6; VAR12++)
        VAR5->VAR78[VAR12] = VAR5->VAR79[0] + (VAR7->VAR78[VAR12] - VAR7->VAR79[0]);
    VAR5->VAR80 = VAR7->VAR80;
    FUN13(VAR5, VAR7, VAR81, VAR82);
    FUN13(VAR5, VAR7, VAR83, VAR84);
    FUN14(VAR5->VAR83, VAR7->VAR83, 32, VAR5, VAR7);
    FUN14(VAR5->VAR85, VAR7->VAR85, 32, VAR5, VAR7);
    FUN14(VAR5->VAR86, VAR7->VAR86, VAR87 + 2, VAR5, VAR7);
    VAR5->VAR88 = VAR7->VAR88;
    if (VAR11)
        FUN15(VAR5);
    if (!VAR5->VAR73)
        return 0;
    if (!VAR5->VAR69)
    {
        VAR10 = FUN16(VAR5, VAR5->VAR89, VAR5->VAR90);
        VAR5->VAR91 = VAR5->VAR92;
        VAR5->VAR93 = VAR5->VAR81;
    }
    VAR5->VAR94 = VAR5->VAR95;
    VAR5->VAR96 = VAR5->VAR97;
    VAR5->VAR98 = VAR5->VAR99;
    VAR5->VAR100 = VAR7->VAR100;
    return VAR10;
}