static int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6, *VAR7 = VAR3->VAR6;
    int VAR8 = VAR5->VAR9, VAR10 = 0;
    int VAR11 = 0;
    int VAR12, VAR13;
    if (VAR2 == VAR3 || !VAR7->VAR9)
        return 0;
    if (VAR8 && (VAR5->VAR14 != VAR7->VAR14 || VAR5->VAR15 != VAR7->VAR15 || VAR5->VAR16 != VAR7->VAR16 || VAR5->VAR17 != VAR7->VAR17 || VAR5->VAR18.VAR19 != VAR7->VAR18.VAR19 || VAR5->VAR18.VAR20 != VAR7->VAR18.VAR20 || VAR5->VAR18.VAR21 != VAR7->VAR18.VAR21))
    {
        VAR5->VAR22->VAR23 = VAR5->VAR18.VAR19;
        FUN2(&VAR5->VAR24);
        VAR5->VAR14 = VAR7->VAR14;
        VAR5->VAR15 = VAR7->VAR15;
        VAR5->VAR17 = VAR7->VAR17;
        VAR5->VAR16 = VAR7->VAR16;
        VAR5->VAR25 = VAR7->VAR25;
        VAR5->VAR26 = VAR7->VAR26;
        VAR5->VAR27 = VAR7->VAR27;
        if ((VAR10 = FUN3(VAR5, 1)) < 0)
        {
            FUN4(VAR5->VAR22, VAR28, "");
            return VAR10;
        }
        VAR11 = 1;
        VAR5->VAR29 = VAR7->VAR29;
        VAR5->VAR30 = VAR7->VAR30;
        memcpy(VAR5->VAR31, VAR7->VAR31, sizeof(VAR5->VAR31));
    }
    if (!VAR8)
    {
        for (VAR12 = 0; VAR12 < VAR32; VAR12++)
            FUN2(VAR5->VAR33 + VAR12);
        for (VAR12 = 0; VAR12 < VAR34; VAR12++)
            FUN2(VAR5->VAR35 + VAR12);
        memcpy(VAR5, VAR7, sizeof(*VAR7));
        memset(VAR5->VAR33, 0, sizeof(VAR5->VAR33));
        memset(VAR5->VAR35, 0, sizeof(VAR5->VAR35));
        memset(&VAR5->VAR36, 0, sizeof(VAR5->VAR36));
        memset(&VAR5->VAR37, 0, sizeof(VAR5->VAR37));
        memset(&VAR5->VAR38, 0, sizeof(VAR5->VAR38));
        memset(&VAR5->VAR39, 0, sizeof(VAR5->VAR39));
        memset(&VAR5->VAR40, 0, sizeof(VAR5->VAR40));
        VAR5->VAR9 = 0;
        memset(&VAR5->VAR41, 0, sizeof(VAR5->VAR41));
        FUN5(&VAR5->VAR41.VAR42);
        VAR5->VAR41.VAR43.VAR42 = &VAR5->VAR41.VAR42;
        VAR5->VAR22 = VAR2;
        VAR5->VAR44 = NULL;
        VAR5->VAR45 = NULL;
        VAR5->VAR46 = NULL;
        VAR5->VAR47 = NULL;
        VAR5->VAR48 = NULL;
        VAR13 = FUN6(VAR5);
        if (VAR13 < 0)
        {
            FUN4(VAR2, VAR28, "");
            return VAR13;
        }
        VAR13 = FUN7(VAR5);
        if (VAR13 < 0)
        {
            FUN4(VAR2, VAR28, "");
            return VAR13;
        }
        for (VAR12 = 0; VAR12 < 2; VAR12++)
        {
            VAR5->VAR49[VAR12] = NULL;
            VAR5->VAR50[VAR12] = 0;
        }
        VAR5->VAR24 = NULL;
        VAR5->VAR51 = NULL;
        VAR5->VAR52[0] = VAR5;
        VAR5->VAR9 = 1;
    }
    VAR5->VAR22->VAR53 = VAR7->VAR22->VAR53;
    VAR5->VAR22->VAR54 = VAR7->VAR22->VAR54;
    VAR5->VAR22->VAR14 = VAR7->VAR22->VAR14;
    VAR5->VAR22->VAR15 = VAR7->VAR22->VAR15;
    VAR5->VAR55 = VAR7->VAR55;
    VAR5->VAR56 = VAR7->VAR56;
    VAR5->VAR57 = VAR7->VAR57;
    VAR5->VAR58 = VAR7->VAR58;
    VAR5->VAR59 = VAR7->VAR59;
    VAR5->VAR60 = VAR7->VAR60;
    VAR5->VAR61 = VAR7->VAR61;
    for (VAR12 = 0; VAR12 < VAR62; VAR12++)
    {
        FUN8(VAR5, &VAR5->VAR44[VAR12]);
        if (VAR7->VAR44[VAR12].VAR42.VAR63[0] && (VAR13 = FUN9(VAR5, &VAR5->VAR44[VAR12], &VAR7->VAR44[VAR12])) < 0)
            return VAR13;
    }
    VAR5->VAR64 = FUN10(VAR7->VAR64, VAR5, VAR7);
    FUN8(VAR5, &VAR5->VAR41);
    if ((VAR13 = FUN9(VAR5, &VAR5->VAR41, &VAR7->VAR41)) < 0)
        return VAR13;
    VAR5->VAR65 = VAR7->VAR65;
    VAR5->VAR61 = VAR7->VAR61;
    VAR5->VAR59 = VAR7->VAR59;
    VAR10 = FUN11(VAR5, VAR7->VAR29);
    if (VAR10 < 0)
        return VAR10;
    VAR5->VAR66 = VAR7->VAR66;
    if ((VAR13 = FUN12((void **)VAR5->VAR33, (void **)VAR7->VAR33, VAR32, sizeof(VAR67))) < 0)
        return VAR13;
    VAR5->VAR18 = VAR7->VAR18;
    if ((VAR13 = FUN12((void **)VAR5->VAR35, (void **)VAR7->VAR35, VAR34, sizeof(VAR68))) < 0)
        return VAR13;
    VAR5->VAR69 = VAR7->VAR69;
    FUN13(VAR5, VAR7, VAR70, VAR71);
    for (VAR12 = 0; VAR12 < 6; VAR12++)
        VAR5->VAR71[VAR12] = VAR5->VAR70[0] + (VAR7->VAR71[VAR12] - VAR7->VAR70[0]);
    for (VAR12 = 0; VAR12 < 6; VAR12++)
        VAR5->VAR72[VAR12] = VAR5->VAR73[0] + (VAR7->VAR72[VAR12] - VAR7->VAR73[0]);
    VAR5->VAR74 = VAR7->VAR74;
    FUN13(VAR5, VAR7, VAR75, VAR76);
    FUN13(VAR5, VAR7, VAR77, VAR78);
    FUN14(VAR5->VAR77, VAR7->VAR77, 32, VAR5, VAR7);
    FUN14(VAR5->VAR79, VAR7->VAR79, 32, VAR5, VAR7);
    FUN14(VAR5->VAR80, VAR7->VAR80, VAR81 + 2, VAR5, VAR7);
    VAR5->VAR82 = VAR7->VAR82;
    if (VAR11)
        FUN15(VAR5);
    if (!VAR5->VAR64)
        return 0;
    if (!VAR5->VAR59)
    {
        VAR10 = FUN16(VAR5, VAR5->VAR83, VAR5->VAR84);
        VAR5->VAR85 = VAR5->VAR86;
        VAR5->VAR87 = VAR5->VAR75;
    }
    VAR5->VAR88 = VAR5->VAR89;
    VAR5->VAR90 = VAR5->VAR91;
    VAR5->VAR92 = VAR5->VAR93;
    VAR5->VAR94 = VAR7->VAR94;
    VAR5->VAR95 = VAR7->VAR95;
    return VAR10;
}