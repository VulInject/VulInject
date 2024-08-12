static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14 = 1 << (VAR9->VAR15[1] - 1);
    VAR16 *VAR17;
    VAR18 *VAR19;
    PutBitContext VAR20;
    if (VAR6)
    {
        if ((VAR12 = FUN2(&VAR9->VAR21, VAR6)) < 0)
            return VAR12;
        FUN3(VAR2, &VAR9->VAR22, FUN4(VAR6));
    }
    else if (!VAR9->VAR21.VAR23)
        return 0;
    VAR13 = VAR9->VAR22.VAR24 * VAR2->VAR14 < VAR14;
    VAR13 = VAR6 && VAR13;
    if (VAR13)
        return 0;
    if (!VAR6)
    {
        if (VAR9->VAR22.VAR24 * VAR2->VAR14 < VAR14)
        {
            int VAR25 = (VAR14 / VAR2->VAR14) - VAR9->VAR22.VAR24;
            int VAR11;
            for (VAR11 = 0; VAR11 < VAR25; VAR11++)
            {
                VAR5 *VAR26 = FUN5(VAR2, VAR9->VAR27);
                if (!VAR26)
                    return FUN6(VAR28);
                FUN3(VAR2, &VAR9->VAR22, VAR26);
            }
        }
    }
    FUN7(VAR9, VAR2->VAR14);
    if (!FUN8(VAR9))
        return 0;
    if ((VAR12 = FUN9(VAR2, VAR4, 8192, 0)) < 0)
        return VAR12;
    FUN10(&VAR20, VAR4->VAR29, VAR4->VAR30);
    if (VAR20.VAR31 - FUN11(&VAR20) < 1 + FUN12(VAR9->VAR32 - 1))
    {
        FUN13(VAR2, VAR33, "");
        return FUN6(VAR34);
    }
    FUN14(&VAR20, 1, 0);
    FUN14(&VAR20, FUN12(VAR9->VAR32 - 1), 1);
    VAR17 = &VAR9->VAR35[1];
    VAR19 = &VAR9->VAR36[VAR17->VAR19];
    if (VAR17->VAR37)
    {
        FUN14(&VAR20, 1, 1);
        FUN14(&VAR20, 1, 1);
    }
    for (VAR11 = 0; VAR11 < VAR9->VAR27; VAR11++)
    {
        VAR38 *VAR39 = &VAR9->VAR40[VAR19->VAR41[VAR19->VAR42[VAR11]]];
        uint16_t VAR43[VAR44];
        FUN15(VAR9, VAR39, &VAR9->VAR45[VAR11 * VAR14], VAR43, VAR14);
        if (FUN16(VAR9, VAR39, &VAR20, VAR43, &VAR9->VAR41[VAR11 * VAR14], VAR14))
        {
            FUN13(VAR2, VAR33, "");
            return FUN6(VAR34);
        }
    }
    for (VAR11 = 0; VAR11 < VAR9->VAR27 * VAR14; VAR11++)
        VAR9->VAR45[VAR11] /= VAR9->VAR41[VAR11];
    for (VAR11 = 0; VAR11 < VAR19->VAR46; VAR11++)
    {
        float *VAR47 = VAR9->VAR45 + VAR19->VAR48[VAR11] * VAR14;
        float *VAR49 = VAR9->VAR45 + VAR19->VAR50[VAR11] * VAR14;
        int VAR51;
        for (VAR51 = 0; VAR51 < VAR14; VAR51++)
        {
            float VAR52 = VAR49[VAR51];
            VAR49[VAR51] -= VAR47[VAR51];
            if (VAR47[VAR51] > 0)
                VAR49[VAR51] = -VAR49[VAR51];
            if (VAR49[VAR51] < 0)
                VAR47[VAR51] = VAR52;
        }
    }
    if (FUN17(VAR9, &VAR9->VAR53[VAR19->VAR54[VAR19->VAR42[0]]], &VAR20, VAR9->VAR45, VAR14, VAR9->VAR27))
    {
        FUN13(VAR2, VAR33, "");
        return FUN6(VAR34);
    }
    FUN18(&VAR20);
    VAR4->VAR30 = FUN11(&VAR20) >> 3;
    FUN19(&VAR9->VAR21, VAR14, &VAR4->VAR55, &VAR4->VAR56);
    if (VAR14 > VAR4->VAR56)
    {
        VAR57 *VAR58 = FUN20(VAR4, VAR59, 10);
        if (!VAR58)
            return FUN6(VAR28);
        FUN21(&VAR58[4], VAR14 - VAR4->VAR56);
    }
    *VAR7 = 1;
    return 0;
}