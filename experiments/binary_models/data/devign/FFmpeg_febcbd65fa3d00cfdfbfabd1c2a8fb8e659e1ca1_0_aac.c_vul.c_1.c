static int FUN1(VAR1 *VAR2, float VAR3[1024], VAR4 *VAR5, float VAR6[120], int VAR7, const VAR8 *VAR9, const VAR10 *VAR11, enum BandType VAR12[120])
{
    int VAR13, VAR14, VAR15, VAR16 = 0;
    const int VAR17 = 1024 / VAR11->VAR18;
    const VAR19 *VAR20 = VAR11->VAR21;
    float *VAR22 = VAR3;
    for (VAR15 = 0; VAR15 < VAR11->VAR18; VAR15++)
        memset(VAR3 + VAR15 * 128 + VAR20[VAR11->VAR23], 0, sizeof(float) * (VAR17 - VAR20[VAR11->VAR23]));
    for (VAR15 = 0; VAR15 < VAR11->VAR24; VAR15++)
    {
        for (VAR13 = 0; VAR13 < VAR11->VAR23; VAR13++, VAR16++)
        {
            const int VAR25 = VAR12[VAR16];
            const int VAR26 = VAR25 >= VAR27 ? 2 : 4;
            const int VAR28 = FUN2(VAR25);
            int VAR29;
            if (VAR25 == VAR30)
            {
                for (VAR29 = 0; VAR29 < VAR11->VAR31[VAR15]; VAR29++)
                {
                    memset(VAR3 + VAR29 * 128 + VAR20[VAR13], 0, (VAR20[VAR13 + 1] - VAR20[VAR13]) * sizeof(float));
                }
            }
            else if (VAR25 == VAR32)
            {
                const float VAR33 = VAR6[VAR16] / ((VAR20[VAR13 + 1] - VAR20[VAR13]) * VAR34);
                for (VAR29 = 0; VAR29 < VAR11->VAR31[VAR15]; VAR29++)
                {
                    for (VAR14 = VAR20[VAR13]; VAR14 < VAR20[VAR13 + 1]; VAR14++)
                    {
                        VAR2->VAR35 = FUN3(VAR2->VAR35);
                        VAR3[VAR29 * 128 + VAR14] = VAR2->VAR35 * VAR33;
                    }
                }
            }
            else if (VAR25 != VAR36 && VAR25 != VAR37)
            {
                for (VAR29 = 0; VAR29 < VAR11->VAR31[VAR15]; VAR29++)
                {
                    for (VAR14 = VAR20[VAR13]; VAR14 < VAR20[VAR13 + 1]; VAR14 += VAR26)
                    {
                        const int VAR38 = FUN4(VAR5, VAR39[VAR25 - 1].VAR40, 6, 3);
                        const int VAR41 = (VAR29 << 7) + VAR14;
                        const float *VAR42;
                        int VAR43;
                        if (VAR38 >= VAR44[VAR25 - 1])
                        {
                            FUN5(VAR2->VAR45, VAR46, "", VAR25 - 1, VAR38, VAR44[VAR25 - 1]);
                            return -1;
                        }
                        VAR42 = &VAR47[VAR25 - 1][VAR38 * VAR26];
                        if (VAR28)
                        {
                            for (VAR43 = 0; VAR43 < VAR26; VAR43++)
                                if (VAR42[VAR43])
                                    VAR3[VAR41 + VAR43] = 1 - 2 * (int)FUN6(VAR5);
                        }
                        else
                        {
                            for (VAR43 = 0; VAR43 < VAR26; VAR43++)
                                VAR3[VAR41 + VAR43] = 1.0f;
                        }
                        if (VAR25 == VAR48)
                        {
                            for (VAR43 = 0; VAR43 < 2; VAR43++)
                            {
                                if (VAR42[VAR43] == 64.0f)
                                {
                                    int VAR49 = 4;
                                    while (FUN6(VAR5) && VAR49 < 15)
                                        VAR49++;
                                    if (VAR49 == 15)
                                    {
                                        FUN5(VAR2->VAR45, VAR46, "");
                                        return -1;
                                    }
                                    VAR49 = (1 << VAR49) + FUN7(VAR5, VAR49);
                                    VAR3[VAR41 + VAR43] *= FUN8(FUN9(VAR49)) * VAR49;
                                }
                                else
                                    VAR3[VAR41 + VAR43] *= VAR42[VAR43];
                            }
                        }
                        else
                            for (VAR43 = 0; VAR43 < VAR26; VAR43++)
                                VAR3[VAR41 + VAR43] *= VAR42[VAR43];
                        for (VAR43 = 0; VAR43 < VAR26; VAR43++)
                            VAR3[VAR41 + VAR43] *= VAR6[VAR16];
                    }
                }
            }
        }
        VAR3 += VAR11->VAR31[VAR15] << 7;
    }
    if (VAR7)
    {
        for (VAR13 = 0; VAR13 < VAR9->VAR50; VAR13++)
        {
            float VAR51 = VAR22[VAR9->VAR52[VAR13]];
            float VAR53 = VAR51 / FUN10(FUN10(FUN9(VAR51))) + VAR9->VAR54[VAR13];
            VAR22[VAR9->VAR52[VAR13]] = FUN8(FUN9(VAR53)) * VAR53;
        }
    }
    return 0;
}