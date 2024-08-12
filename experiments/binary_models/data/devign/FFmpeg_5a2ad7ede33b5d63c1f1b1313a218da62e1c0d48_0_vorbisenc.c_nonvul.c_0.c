static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14 = 0, VAR15 = 1 << (VAR9->VAR16[1] - 1);
    VAR17 *VAR18;
    VAR19 *VAR20;
    PutBitContext VAR21;
    if (VAR6)
    {
        if ((VAR12 = FUN2(&VAR9->VAR22, VAR6)) < 0)
            return VAR12;
        FUN3(VAR2, &VAR9->VAR23, FUN4(VAR6));
    }
    else if (!VAR9->VAR22.VAR24)
        return 0;
    VAR13 = VAR9->VAR23.VAR25 * VAR2->VAR15 < VAR15;
    VAR13 = VAR6 && VAR13;
    if (VAR13)
        return 0;
    if (!VAR6)
    {
        if (VAR9->VAR23.VAR25 * VAR2->VAR15 < VAR15)
        {
            int VAR26 = (VAR15 / VAR2->VAR15) - VAR9->VAR23.VAR25;
            for (int VAR11 = 0; VAR11 < VAR26; VAR11++)
            {
                VAR5 *VAR27 = FUN5(VAR2, VAR9->VAR28);
                if (!VAR27)
                    return FUN6(VAR29);
                FUN3(VAR2, &VAR9->VAR23, VAR27);
            }
        }
    }
    FUN7(VAR9, &VAR14, VAR2->VAR15);
    if (!FUN8(VAR9, VAR14))
        return 0;
    if ((VAR12 = FUN9(VAR2, VAR4, 8192, 0)) < 0)
        return VAR12;
    FUN10(&VAR21, VAR4->VAR30, VAR4->VAR31);
    if (VAR21.VAR32 - FUN11(&VAR21) < 1 + FUN12(VAR9->VAR33 - 1))
    {
        FUN13(VAR2, VAR34, "");
        return FUN6(VAR35);
    }
    FUN14(&VAR21, 1, 0);
    FUN14(&VAR21, FUN12(VAR9->VAR33 - 1), 0);
    VAR18 = &VAR9->VAR36[0];
    VAR20 = &VAR9->VAR37[VAR18->VAR20];
    if (VAR18->VAR38)
    {
        FUN14(&VAR21, 1, 0);
        FUN14(&VAR21, 1, 0);
    }
    for (VAR11 = 0; VAR11 < VAR9->VAR28; VAR11++)
    {
        VAR39 *VAR40 = &VAR9->VAR41[VAR20->VAR42[VAR20->VAR43[VAR11]]];
        uint16_t VAR44[VAR45];
        FUN15(VAR9, VAR40, &VAR9->VAR46[VAR11 * VAR14], VAR44, VAR14);
        if (FUN16(VAR9, VAR40, &VAR21, VAR44, &VAR9->VAR42[VAR11 * VAR14], VAR14))
        {
            FUN13(VAR2, VAR34, "");
            return FUN6(VAR35);
        }
    }
    for (VAR11 = 0; VAR11 < VAR9->VAR28 * VAR14; VAR11++)
        VAR9->VAR46[VAR11] /= VAR9->VAR42[VAR11];
    for (VAR11 = 0; VAR11 < VAR20->VAR47; VAR11++)
    {
        float *VAR48 = VAR9->VAR46 + VAR20->VAR49[VAR11] * VAR14;
        float *VAR50 = VAR9->VAR46 + VAR20->VAR51[VAR11] * VAR14;
        int VAR52;
        for (VAR52 = 0; VAR52 < VAR14; VAR52++)
        {
            float VAR53 = VAR50[VAR52];
            VAR50[VAR52] -= VAR48[VAR52];
            if (VAR48[VAR52] > 0)
                VAR50[VAR52] = -VAR50[VAR52];
            if (VAR50[VAR52] < 0)
                VAR48[VAR52] = VAR53;
        }
    }
    if (FUN17(VAR9, &VAR9->VAR54[VAR20->VAR55[VAR20->VAR43[0]]], &VAR21, VAR9->VAR46, VAR14, VAR9->VAR28))
    {
        FUN13(VAR2, VAR34, "");
        return FUN6(VAR35);
    }
    FUN18(&VAR21);
    VAR4->VAR31 = FUN11(&VAR21) >> 3;
    FUN19(&VAR9->VAR22, VAR15, &VAR4->VAR56, &VAR4->VAR57);
    if (VAR15 > VAR4->VAR57)
    {
        VAR58 *VAR59 = FUN20(VAR4, VAR60, 10);
        if (!VAR59)
            return FUN6(VAR29);
        FUN21(&VAR59[4], VAR15 - VAR4->VAR57);
    }
    *VAR7 = 1;
    return 0;
}