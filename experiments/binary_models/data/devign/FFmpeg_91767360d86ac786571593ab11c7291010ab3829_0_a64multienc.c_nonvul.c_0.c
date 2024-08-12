static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    int VAR12, VAR13;
    int VAR14;
    int VAR15;
    int VAR16, VAR17;
    VAR18 *VAR19;
    int *VAR20 = VAR9->VAR21;
    VAR18 *VAR22 = VAR9->VAR23;
    VAR18 *VAR24 = VAR9->VAR25;
    int *VAR26 = VAR9->VAR27;
    int *VAR28 = VAR9->VAR29;
    int VAR30 = 0x800 * (VAR31 + 1);
    int VAR32 = 0x100 * VAR9->VAR33;
    int VAR34;
    if (VAR35)
    {
        VAR14 = FUN2(VAR2->VAR36, VAR37) >> 3;
        VAR15 = FUN2(VAR2->VAR38, VAR39) >> 3;
        VAR34 = VAR15 * VAR14;
    }
    else
    {
        VAR14 = VAR37 >> 3;
        VAR15 = VAR39 >> 3;
        VAR34 = 0x400;
    }
    if (!VAR6)
    {
        if (!VAR9->VAR40)
            return 0;
        if (!VAR9->VAR41)
        {
            VAR9->VAR40 = 0;
        }
        else
            VAR9->VAR40 = VAR9->VAR41;
    }
    else
    {
        if (VAR9->VAR41 < VAR9->VAR40)
        {
            VAR2->VAR42->VAR43 = VAR44;
            VAR2->VAR42->VAR45 = 1;
            FUN3(VAR2, VAR6, VAR26 + 32000 * VAR9->VAR41);
            VAR9->VAR41++;
            if (VAR9->VAR46 == VAR47)
                VAR9->VAR46 = VAR6->VAR48;
            return 0;
        }
    }
    if (VAR9->VAR41 == VAR9->VAR40)
    {
        VAR16 = 0;
        if (VAR9->VAR40)
        {
            VAR16 = VAR30 + VAR9->VAR40 * (VAR34 + VAR32);
            if ((VAR17 = FUN4(VAR4, VAR16)) < 0)
            {
                FUN5(VAR2, VAR49, "", VAR16);
                return VAR17;
            }
            VAR19 = VAR4->VAR50;
            VAR17 = FUN6(VAR26, 32, 1000 * VAR9->VAR40, VAR28, VAR51, 50, VAR20, &VAR9->VAR52);
            if (VAR17 < 0)
                return VAR17;
            VAR17 = FUN7(VAR26, 32, 1000 * VAR9->VAR40, VAR28, VAR51, 50, VAR20, &VAR9->VAR52);
            if (VAR17 < 0)
                return VAR17;
            FUN8(VAR2, VAR24, VAR22);
            memcpy(VAR19, VAR24, VAR30);
            VAR19 += VAR30;
            VAR24 += VAR30;
        }
        for (VAR11 = 0; VAR11 < VAR9->VAR40; VAR11++)
        {
            for (VAR13 = 0; VAR13 < VAR14; VAR13++)
            {
                for (VAR12 = 0; VAR12 < VAR15; VAR12++)
                {
                    VAR19[VAR13 * VAR15 + VAR12] = VAR20[VAR13 * VAR15 + VAR12];
                }
            }
            VAR19 += VAR34;
            VAR16 += VAR34;
            if (VAR9->VAR33)
            {
                FUN9(VAR19, VAR20, VAR22);
                VAR19 += VAR32;
                VAR16 += VAR32;
            }
            VAR20 += 1000;
        }
        FUN10(VAR2->VAR53 + 4, VAR9->VAR41);
        FUN10(VAR2->VAR53 + 8, VAR30);
        FUN10(VAR2->VAR53 + 12, VAR34 + VAR32);
        VAR9->VAR41 = 0;
        VAR4->VAR48 = VAR4->VAR54 = VAR9->VAR46;
        VAR9->VAR46 = VAR47;
        VAR4->VAR55 = VAR16;
        VAR4->VAR56 |= VAR57;
        *VAR7 = !!VAR16;
    }
    return 0;
}