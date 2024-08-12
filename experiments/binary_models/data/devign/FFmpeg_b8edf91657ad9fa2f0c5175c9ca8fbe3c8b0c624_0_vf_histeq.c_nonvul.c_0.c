static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    int VAR13 = VAR9->VAR13 * 1000;
    int VAR14 = VAR9->VAR14 * 1000;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
    VAR3 *VAR24;
    unsigned int VAR25, VAR26, VAR27, VAR28;
    VAR29 *VAR30, *VAR7;
    VAR24 = FUN2(VAR11, VAR11->VAR31, VAR11->VAR32);
    if (!VAR24)
    {
        FUN3(&VAR4);
        return FUN4(VAR33);
    }
    FUN5(VAR24, VAR4);
    VAR28 = VAR34;
    memset(VAR9->VAR35, 0, sizeof(VAR9->VAR35));
    VAR30 = VAR4->VAR36[0];
    VAR7 = VAR24->VAR36[0];
    for (VAR16 = 0; VAR16 < VAR2->VAR32; VAR16++)
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR31 * VAR9->VAR37; VAR15 += VAR9->VAR37)
        {
            FUN6(VAR25, VAR26, VAR27, VAR30, VAR9->VAR38);
            VAR21 = (55 * VAR25 + 182 * VAR26 + 19 * VAR27) >> 8;
            VAR7[VAR15 + VAR9->VAR38[VAR39]] = VAR21;
            VAR9->VAR35[VAR21]++;
        }
        VAR30 += VAR4->VAR40[0];
        VAR7 += VAR24->VAR40[0];
    }
    for (VAR15 = 0; VAR15 < 256; VAR15++)
        FUN7(VAR6, "", VAR15, VAR9->VAR35[VAR15]);
    VAR9->VAR41[0] = VAR9->VAR35[0];
    for (VAR15 = 1; VAR15 < 256; VAR15++)
        VAR9->VAR41[VAR15] = VAR9->VAR41[VAR15 - 1] + VAR9->VAR35[VAR15];
    for (VAR15 = 0; VAR15 < 256; VAR15++)
        VAR9->VAR41[VAR15] = (VAR9->VAR41[VAR15] * VAR14) / (VAR2->VAR32 * VAR2->VAR31);
    for (VAR15 = 0; VAR15 < 256; VAR15++)
        VAR9->VAR41[VAR15] = (VAR13 * VAR9->VAR41[VAR15]) / 255 + ((255 - VAR13) * VAR15) / 255;
    memset(VAR9->VAR42, 0, sizeof(VAR9->VAR42));
    VAR30 = VAR4->VAR36[0];
    VAR7 = VAR24->VAR36[0];
    for (VAR16 = 0; VAR16 < VAR2->VAR32; VAR16++)
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR31 * VAR9->VAR37; VAR15 += VAR9->VAR37)
        {
            VAR21 = VAR7[VAR15 + VAR9->VAR38[VAR39]];
            if (VAR21 == 0)
            {
                for (VAR17 = 0; VAR17 < VAR9->VAR37; ++VAR17)
                    VAR7[VAR15 + VAR17] = 0;
                VAR9->VAR42[0]++;
            }
            else
            {
                VAR20 = VAR9->VAR41[VAR21];
                if (VAR9->VAR43 != VAR44)
                {
                    if (VAR21 > 0)
                    {
                        VAR19 = VAR9->VAR43 == VAR45 ? (VAR9->VAR41[VAR21] + VAR9->VAR41[VAR21 - 1]) / 2 : VAR9->VAR41[VAR21 - 1];
                    }
                    else
                        VAR19 = VAR20;
                    if (VAR21 < 255)
                    {
                        VAR18 = (VAR9->VAR43 == VAR45) ? (VAR9->VAR41[VAR21] + VAR9->VAR41[VAR21 + 1]) / 2 : VAR9->VAR41[VAR21 + 1];
                    }
                    else
                        VAR18 = VAR20;
                    if (VAR19 != VAR18)
                    {
                        VAR28 = FUN8(VAR28);
                        VAR20 = VAR19 + ((VAR18 - VAR19 + 1) * VAR28) / VAR46;
                    }
                }
                FUN6(VAR25, VAR26, VAR27, VAR30, VAR9->VAR38);
                if (((VAR23 = FUN9(VAR25, VAR26, VAR27)) * VAR20) / VAR21 > 255)
                {
                    VAR25 = (VAR25 * 255) / VAR23;
                    VAR26 = (VAR26 * 255) / VAR23;
                    VAR27 = (VAR27 * 255) / VAR23;
                }
                else
                {
                    VAR25 = (VAR25 * VAR20) / VAR21;
                    VAR26 = (VAR26 * VAR20) / VAR21;
                    VAR27 = (VAR27 * VAR20) / VAR21;
                }
                VAR7[VAR15 + VAR9->VAR38[VAR47]] = VAR25;
                VAR7[VAR15 + VAR9->VAR38[VAR48]] = VAR26;
                VAR7[VAR15 + VAR9->VAR38[VAR49]] = VAR27;
                VAR22 = FUN10((55 * VAR25 + 182 * VAR26 + 19 * VAR27) >> 8);
                VAR9->VAR42[VAR22]++;
            }
        }
        VAR30 += VAR4->VAR40[0];
        VAR7 += VAR24->VAR40[0];
    }
    for (VAR15 = 0; VAR15 < 256; VAR15++)
        FUN7(VAR6, "", VAR15, VAR9->VAR42[VAR15]);
    FUN3(&VAR4);
    return FUN11(VAR11, VAR24);
}