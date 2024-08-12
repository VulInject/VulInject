static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = NULL;
    VAR7 *VAR9 = NULL;
    VAR3 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    VAR11 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    VAR16 *VAR17 = NULL;
    int VAR18, VAR19, VAR20;
    AVTimecode VAR21;
    int VAR22;
    int64_t VAR23;
    for (VAR18 = 0; VAR18 < VAR4->VAR24->VAR25; VAR18++)
    {
        VAR12 = FUN2(VAR2, &VAR4->VAR24->VAR26[VAR18], VAR27);
        if (!VAR12)
            continue;
        for (VAR19 = 0; VAR19 < VAR2->VAR28; VAR19++)
        {
            VAR8 = FUN2(VAR2, &VAR2->VAR29[VAR19], VAR30);
            if (!VAR8)
                continue;
            if (!memcmp(VAR8->VAR31, VAR12->VAR32, 16))
            {
                VAR9 = VAR8;
                VAR13 = VAR12;
                break;
            }
        }
        if (!VAR9)
            break;
        if (VAR9->VAR33[0])
            FUN3(&VAR6->VAR34, "", VAR9->VAR33, 0);
        for (VAR19 = 0; VAR19 < VAR9->VAR35; VAR19++)
        {
            if (!(VAR10 = FUN2(VAR2, &VAR9->VAR36[VAR19], VAR37)))
            {
                FUN4(VAR2->VAR38, VAR39, "");
                continue;
            }
            if (!(VAR10->VAR24 = FUN2(VAR2, &VAR10->VAR40, VAR41)))
            {
                FUN4(VAR2->VAR38, VAR39, "");
                continue;
            }
            for (VAR20 = 0; VAR20 < VAR10->VAR24->VAR25; VAR20++)
            {
                VAR12 = FUN2(VAR2, &VAR10->VAR24->VAR26[VAR20], VAR42);
                if (!VAR12)
                {
                    VAR12 = FUN2(VAR2, &VAR10->VAR24->VAR26[VAR20], VAR43);
                    if (!VAR12)
                        continue;
                    VAR17 = (VAR16 *)VAR12;
                    VAR12 = FUN2(VAR2, &VAR17->VAR44, VAR42);
                    if (!VAR12)
                        continue;
                }
                VAR15 = (VAR14 *)VAR12;
                VAR22 = VAR15->VAR45 == 1 ? VAR46 : 0;
                VAR23 = FUN5(VAR13->VAR23, VAR10->VAR47, VAR4->VAR47);
                if (FUN6(&VAR21, VAR15->VAR48, VAR22, VAR23 + VAR15->VAR49, VAR2->VAR38) == 0)
                {
                    FUN7(&VAR6->VAR34, "", &VAR21);
                    return 0;
                }
            }
        }
    }
    return 0;
}