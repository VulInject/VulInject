static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = NULL, *VAR12 = NULL;
    int VAR13;
    int VAR14 = 0;
    uint32_t VAR15;
    int32_t VAR16, VAR17, VAR18;
    AVRational VAR19;
    char VAR20[VAR21];
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    FUN3(&VAR2->VAR22, "", VAR20, 0);
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    FUN3(&VAR2->VAR22, "", VAR20, 0);
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    FUN3(&VAR2->VAR22, "", VAR20, 0);
    VAR11 = FUN4(VAR2, NULL);
    if (!VAR11)
        return FUN5(VAR23);
    VAR11->VAR24->VAR25 = VAR26;
    VAR11->VAR24->VAR27 = FUN6(VAR6, &VAR14);
    VAR11->VAR24->VAR28 = FUN6(VAR6, &VAR14);
    VAR11->VAR24->VAR29 = FUN6(VAR6, &VAR14);
    VAR11->VAR24->VAR30 = FUN6(VAR6, &VAR14);
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    VAR19 = FUN7(VAR20, &VAR14);
    FUN8(VAR11, 32, VAR19.VAR31, VAR19.VAR32);
    switch (VAR11->VAR24->VAR27)
    {
    case 122:
        VAR11->VAR24->VAR33 = VAR34;
        break;
    case 124:
        VAR11->VAR24->VAR33 = VAR35;
        VAR11->VAR24->VAR30 = 16;
        break;
    case 130:
        VAR11->VAR24->VAR33 = VAR36;
        break;
    default:
        FUN9(VAR2, VAR37, "", VAR11->VAR24->VAR27);
        VAR11->VAR24->VAR33 = VAR38;
    }
    VAR16 = FUN6(VAR6, &VAR14);
    if (VAR16)
    {
        VAR12 = FUN4(VAR2, NULL);
        if (!VAR12)
            return FUN5(VAR23);
        VAR12->VAR24->VAR25 = VAR39;
        VAR12->VAR24->VAR27 = VAR16;
        VAR12->VAR24->VAR40 = FUN6(VAR6, &VAR14);
        VAR12->VAR24->VAR41 = FUN6(VAR6, &VAR14);
        VAR12->VAR24->VAR30 = FUN6(VAR6, &VAR14);
        if (VAR12->VAR24->VAR30 == 0)
            VAR12->VAR24->VAR30 = 4;
        VAR12->VAR24->VAR42 = VAR12->VAR24->VAR40 * VAR12->VAR24->VAR30 * VAR12->VAR24->VAR41;
        VAR12->VAR24->VAR33 = VAR38;
        switch (VAR16)
        {
        case 1:
            if (VAR12->VAR24->VAR30 == 16)
            {
                VAR12->VAR24->VAR33 = VAR43;
                break;
            }
            break;
        case 101:
            if (VAR12->VAR24->VAR30 == 8)
            {
                VAR12->VAR24->VAR33 = VAR44;
                break;
            }
            else if (VAR12->VAR24->VAR30 == 4)
            {
                VAR12->VAR24->VAR33 = VAR45;
                break;
            }
            break;
        }
        if (VAR12->VAR24->VAR33 == VAR38)
        {
            FUN9(VAR2, VAR37, "", VAR16);
        }
        FUN8(VAR12, 32, 1, VAR12->VAR24->VAR42);
    }
    else
    {
        for (VAR15 = 0; VAR15 < 3; VAR15++)
            VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    }
    VAR8->VAR46 = FUN6(VAR6, &VAR14);
    if (VAR8->VAR46 > 1 && VAR11->VAR24->VAR27 != 124)
        FUN9(VAR2, VAR37, ""
                                  "",
               VAR11->VAR24->VAR27);
    VAR18 = FUN6(VAR6, &VAR14);
    VAR18++;
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    VAR17 = FUN6(VAR6, &VAR14);
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
    FUN10(VAR6, VAR17, VAR47);
    VAR13 = 0;
    for (VAR15 = 0; !VAR14 && VAR15 < VAR18; VAR15++)
    {
        int64_t VAR48, VAR49, VAR50;
        VAR14 |= FUN2(VAR6, VAR20, sizeof(VAR20));
        if (3 != sscanf(VAR20, "" VAR51 "" VAR51 "" VAR51, &VAR48, &VAR49, &VAR50))
            VAR14 = -1;
        FUN11(VAR11, VAR48, VAR15 * VAR8->VAR46, VAR49, VAR8->VAR46, 0);
        if (VAR12)
            FUN11(VAR12, VAR48 + VAR49, VAR13, VAR50, VAR50 * 8, 0);
        VAR13 += VAR50 * 8;
    }
    if (VAR14)
        return FUN5(VAR52);
    return 0;
}