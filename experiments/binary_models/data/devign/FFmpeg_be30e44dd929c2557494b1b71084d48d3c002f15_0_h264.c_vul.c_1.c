static int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
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
        FUN2(&VAR5->VAR24);
        VAR5->VAR14 = VAR7->VAR14;
        VAR5->VAR15 = VAR7->VAR15;
        VAR5->VAR17 = VAR7->VAR17;
        VAR5->VAR16 = VAR7->VAR16;
        VAR5->VAR25 = VAR7->VAR25;
        VAR5->VAR26 = VAR7->VAR26;
        VAR5->VAR27 = VAR7->VAR27;
        FUN3((void **)VAR5->VAR28, (void **)VAR7->VAR28, VAR29, sizeof(VAR30));
        VAR5->VAR18 = VAR7->VAR18;
        FUN3((void **)VAR5->VAR31, (void **)VAR7->VAR31, VAR32, sizeof(VAR33));
        VAR5->VAR34 = VAR7->VAR34;
        if ((VAR10 = FUN4(VAR5, 1)) < 0)
        {
            FUN5(VAR5->VAR22, VAR35, "");
            return VAR10;
        }
        VAR11 = 1;
        FUN6(VAR5);
        VAR5->VAR36 = VAR7->VAR36;
    }
    VAR5->VAR37 = VAR7->VAR37;
    VAR5->VAR38 = VAR7->VAR38;
    memcpy(VAR5->VAR39, VAR7->VAR39, sizeof(VAR5->VAR39));
    if (!VAR8)
    {
        for (VAR12 = 0; VAR12 < VAR29; VAR12++)
            FUN2(VAR5->VAR28 + VAR12);
        for (VAR12 = 0; VAR12 < VAR32; VAR12++)
            FUN2(VAR5->VAR31 + VAR12);
        memcpy(VAR5, VAR7, FUN7(VAR4, VAR40));
        memcpy(&VAR5->VAR41, &VAR7->VAR41, sizeof(VAR4) - FUN7(VAR4, VAR41));
        FUN8((void *)&VAR5->VAR41 == &VAR5->VAR42 + 1);
        memset(VAR5->VAR28, 0, sizeof(VAR5->VAR28));
        memset(VAR5->VAR31, 0, sizeof(VAR5->VAR31));
        memset(&VAR5->VAR43, 0, sizeof(VAR5->VAR43));
        memset(&VAR5->VAR44, 0, sizeof(VAR5->VAR44));
        memset(&VAR5->VAR45, 0, sizeof(VAR5->VAR45));
        memset(&VAR5->VAR46, 0, sizeof(VAR5->VAR46));
        memset(&VAR5->VAR42, 0, sizeof(VAR5->VAR42));
        VAR5->VAR22 = VAR2;
        VAR5->VAR47 = NULL;
        VAR5->VAR48 = NULL;
        VAR5->VAR49 = NULL;
        VAR5->VAR50 = NULL;
        VAR5->VAR51 = NULL;
        if (VAR7->VAR9)
        {
            VAR5->VAR9 = 0;
            memset(&VAR5->VAR52, 0, sizeof(VAR5->VAR52));
            FUN9(&VAR5->VAR52.VAR53);
            VAR5->VAR52.VAR54.VAR53 = &VAR5->VAR52.VAR53;
            VAR13 = FUN10(VAR5);
            if (VAR13 < 0)
            {
                FUN5(VAR2, VAR35, "");
                return VAR13;
            }
            VAR13 = FUN11(VAR5);
            if (VAR13 < 0)
            {
                FUN5(VAR2, VAR35, "");
                return VAR13;
            }
        }
        for (VAR12 = 0; VAR12 < 2; VAR12++)
        {
            VAR5->VAR55[VAR12] = NULL;
            VAR5->VAR56[VAR12] = 0;
        }
        VAR5->VAR24 = NULL;
        VAR5->VAR57 = NULL;
        VAR5->VAR58[0] = VAR5;
        VAR5->VAR9 = VAR7->VAR9;
    }
    VAR5->VAR22->VAR59 = VAR7->VAR22->VAR59;
    VAR5->VAR22->VAR60 = VAR7->VAR22->VAR60;
    VAR5->VAR22->VAR14 = VAR7->VAR22->VAR14;
    VAR5->VAR22->VAR15 = VAR7->VAR22->VAR15;
    VAR5->VAR61 = VAR7->VAR61;
    VAR5->VAR62 = VAR7->VAR62;
    VAR5->VAR63 = VAR7->VAR63;
    VAR5->VAR64 = VAR7->VAR64;
    VAR5->VAR65 = VAR7->VAR65;
    VAR5->VAR66 = VAR7->VAR66;
    VAR5->VAR67 = VAR7->VAR67;
    for (VAR12 = 0; VAR5->VAR47 && VAR12 < VAR68; VAR12++)
    {
        FUN12(VAR5, &VAR5->VAR47[VAR12]);
        if (VAR7->VAR47[VAR12].VAR53.VAR69[0] && (VAR13 = FUN13(VAR5, &VAR5->VAR47[VAR12], &VAR7->VAR47[VAR12])) < 0)
            return VAR13;
    }
    VAR5->VAR70 = FUN14(VAR7->VAR70, VAR5, VAR7);
    FUN12(VAR5, &VAR5->VAR52);
    if (VAR7->VAR52.VAR53.VAR71[0] && (VAR13 = FUN13(VAR5, &VAR5->VAR52, &VAR7->VAR52)) < 0)
        return VAR13;
    VAR5->VAR72 = VAR7->VAR72;
    VAR5->VAR67 = VAR7->VAR67;
    VAR5->VAR65 = VAR7->VAR65;
    VAR5->VAR73 = VAR7->VAR73;
    FUN3((void **)VAR5->VAR28, (void **)VAR7->VAR28, VAR29, sizeof(VAR30));
    VAR5->VAR18 = VAR7->VAR18;
    FUN3((void **)VAR5->VAR31, (void **)VAR7->VAR31, VAR32, sizeof(VAR33));
    VAR5->VAR34 = VAR7->VAR34;
    FUN15(VAR5, VAR7, VAR74, VAR75);
    for (VAR12 = 0; VAR12 < 6; VAR12++)
        VAR5->VAR75[VAR12] = VAR5->VAR74[0] + (VAR7->VAR75[VAR12] - VAR7->VAR74[0]);
    for (VAR12 = 0; VAR12 < 6; VAR12++)
        VAR5->VAR76[VAR12] = VAR5->VAR77[0] + (VAR7->VAR76[VAR12] - VAR7->VAR77[0]);
    VAR5->VAR78 = VAR7->VAR78;
    FUN15(VAR5, VAR7, VAR79, VAR80);
    FUN15(VAR5, VAR7, VAR81, VAR82);
    FUN16(VAR5->VAR81, VAR7->VAR81, 32, VAR5, VAR7);
    FUN16(VAR5->VAR83, VAR7->VAR83, 32, VAR5, VAR7);
    FUN16(VAR5->VAR84, VAR7->VAR84, VAR85 + 2, VAR5, VAR7);
    VAR5->VAR86 = VAR7->VAR86;
    if (VAR11)
        FUN6(VAR5);
    if (!VAR5->VAR70)
        return 0;
    if (!VAR5->VAR65)
    {
        VAR10 = FUN17(VAR5, VAR5->VAR87, VAR5->VAR88);
        VAR5->VAR89 = VAR5->VAR90;
        VAR5->VAR91 = VAR5->VAR79;
    }
    VAR5->VAR92 = VAR5->VAR93;
    VAR5->VAR94 = VAR5->VAR95;
    VAR5->VAR96 = VAR5->VAR97;
    return VAR10;
}