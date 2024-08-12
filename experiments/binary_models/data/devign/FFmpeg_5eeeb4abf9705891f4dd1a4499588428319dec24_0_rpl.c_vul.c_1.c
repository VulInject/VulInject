static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL, *VAR10 = NULL;
    int VAR11;
    int VAR12 = 0;
    uint32_t VAR13;
    int32_t VAR14, VAR15, VAR16;
    AVRational VAR17;
    char VAR18[VAR19];
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    FUN3(&VAR2->VAR20, "", VAR18, 0);
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    FUN3(&VAR2->VAR20, "", VAR18, 0);
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    FUN3(&VAR2->VAR20, "", VAR18, 0);
    VAR9 = FUN4(VAR2, NULL);
    if (!VAR9)
        return FUN5(VAR21);
    VAR9->VAR22->VAR23 = VAR24;
    VAR9->VAR22->VAR25 = FUN6(VAR4, &VAR12);
    VAR9->VAR22->VAR26 = FUN6(VAR4, &VAR12);
    VAR9->VAR22->VAR27 = FUN6(VAR4, &VAR12);
    VAR9->VAR22->VAR28 = FUN6(VAR4, &VAR12);
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    VAR17 = FUN7(VAR18, &VAR12);
    FUN8(VAR9, 32, VAR17.VAR29, VAR17.VAR30);
    switch (VAR9->VAR22->VAR25)
    {
    case 122:
        VAR9->VAR22->VAR31 = VAR32;
        break;
    case 124:
        VAR9->VAR22->VAR31 = VAR33;
        VAR9->VAR22->VAR28 = 16;
        break;
    case 130:
        VAR9->VAR22->VAR31 = VAR34;
        break;
    default:
        FUN9(VAR2, "", VAR9->VAR22->VAR25);
        VAR9->VAR22->VAR31 = VAR35;
    }
    VAR14 = FUN6(VAR4, &VAR12);
    if (VAR14)
    {
        VAR10 = FUN4(VAR2, NULL);
        if (!VAR10)
            return FUN5(VAR21);
        VAR10->VAR22->VAR23 = VAR36;
        VAR10->VAR22->VAR25 = VAR14;
        VAR10->VAR22->VAR37 = FUN6(VAR4, &VAR12);
        VAR10->VAR22->VAR38 = FUN6(VAR4, &VAR12);
        VAR10->VAR22->VAR28 = FUN6(VAR4, &VAR12);
        if (VAR10->VAR22->VAR28 == 0)
            VAR10->VAR22->VAR28 = 4;
        VAR10->VAR22->VAR39 = VAR10->VAR22->VAR37 * VAR10->VAR22->VAR28 * VAR10->VAR22->VAR38;
        VAR10->VAR22->VAR31 = VAR35;
        switch (VAR14)
        {
        case 1:
            if (VAR10->VAR22->VAR28 == 16)
            {
                VAR10->VAR22->VAR31 = VAR40;
                break;
            }
            break;
        case 101:
            if (VAR10->VAR22->VAR28 == 8)
            {
                VAR10->VAR22->VAR31 = VAR41;
                break;
            }
            else if (VAR10->VAR22->VAR28 == 4)
            {
                VAR10->VAR22->VAR31 = VAR42;
                break;
            }
            break;
        }
        if (VAR10->VAR22->VAR31 == VAR35)
            FUN10(VAR2, "", VAR14);
        FUN8(VAR10, 32, 1, VAR10->VAR22->VAR39);
    }
    else
    {
        for (VAR13 = 0; VAR13 < 3; VAR13++)
            VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    }
    VAR6->VAR43 = FUN6(VAR4, &VAR12);
    if (VAR6->VAR43 > 1 && VAR9->VAR22->VAR25 != 124)
        FUN11(VAR2, VAR44, ""
                                  "",
               VAR9->VAR22->VAR25);
    VAR16 = FUN6(VAR4, &VAR12);
    VAR16++;
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    VAR15 = FUN6(VAR4, &VAR12);
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
    FUN12(VAR4, VAR15, VAR45);
    VAR11 = 0;
    for (VAR13 = 0; !VAR12 && VAR13 < VAR16; VAR13++)
    {
        int64_t VAR46, VAR47, VAR48;
        VAR12 |= FUN2(VAR4, VAR18, sizeof(VAR18));
        if (3 != sscanf(VAR18, "" VAR49 "" VAR49 "" VAR49, &VAR46, &VAR47, &VAR48))
            VAR12 = -1;
        FUN13(VAR9, VAR46, VAR13 * VAR6->VAR43, VAR47, VAR6->VAR43, 0);
        if (VAR10)
            FUN13(VAR10, VAR46 + VAR47, VAR11, VAR48, VAR48 * 8, 0);
        VAR11 += VAR48 * 8;
    }
    if (VAR12)
        return FUN5(VAR50);
    return 0;
}