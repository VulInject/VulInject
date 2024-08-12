static float FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const float *VAR5, const float *VAR6, int VAR7, int VAR8, int VAR9, const float VAR10, const float VAR11, int *VAR12)
{
    const float VAR13 = VAR14[200 + VAR8 - VAR15 + VAR16];
    const float VAR17 = VAR14[200 - VAR8 + VAR15 - VAR16];
    const float VAR18 = 165140.0f * VAR13;
    int VAR19, VAR20, VAR21;
    float VAR22 = 0;
    const int VAR23 = VAR9 < VAR24 ? 4 : 2;
    int VAR25 = 0;
    const float VAR26 = FUN2(VAR17 * FUN2(VAR17));
    const int VAR27 = VAR28[VAR9];
    const int VAR29 = VAR30[VAR9];
    int VAR31[4];
    if (!VAR9)
    {
        for (VAR19 = 0; VAR19 < VAR7; VAR19++)
            VAR22 += VAR5[VAR19] * VAR5[VAR19];
        if (VAR12)
            *VAR12 = 0;
        return VAR22 * VAR10;
    }
    VAR31[0] = 1;
    for (VAR19 = 1; VAR19 < VAR23; VAR19++)
        VAR31[VAR19] = VAR31[VAR19 - 1] * VAR27;
    if (!VAR6)
    {
        FUN3(VAR2->VAR32, VAR5, VAR7);
        VAR6 = VAR2->VAR32;
    }
    FUN4(VAR2->VAR33, VAR5, VAR6, VAR7, VAR26, !FUN5(VAR9), VAR29);
    for (VAR19 = 0; VAR19 < VAR7; VAR19 += VAR23)
    {
        float VAR34;
        int VAR35 = 0;
        int VAR36 = 0;
        const float *VAR37;
        int(*VAR38)[2] = &VAR2->VAR33[VAR19];
        VAR34 = 0.0f;
        for (VAR20 = 0; VAR20 < VAR23; VAR20++)
            VAR34 += VAR5[VAR19 + VAR20] * VAR5[VAR19 + VAR20];
        VAR35 = FUN5(VAR9) ? 0 : 40;
        VAR36 = VAR39[VAR9 - 1][VAR35];
        VAR34 = VAR34 * VAR10 + VAR36;
        for (VAR20 = 0; VAR20 < (1 << VAR23); VAR20++)
        {
            float VAR40 = 0.0f;
            int VAR41;
            int VAR42 = FUN5(VAR9) ? 0 : 40;
            int VAR43 = 0;
            for (VAR21 = 0; VAR21 < VAR23; VAR21++)
            {
                if ((VAR20 & (1 << VAR21)) && VAR38[VAR21][0] == VAR38[VAR21][1])
                {
                    VAR43 = 1;
                    break;
                }
            }
            if (VAR43)
                continue;
            for (VAR21 = 0; VAR21 < VAR23; VAR21++)
                VAR42 += VAR38[VAR21][!!(VAR20 & (1 << VAR21))] * VAR31[VAR23 - 1 - VAR21];
            VAR41 = VAR39[VAR9 - 1][VAR42];
            VAR37 = &VAR44[VAR9 - 1][VAR42 * VAR23];
            VAR34 = VAR45;
            VAR37 = VAR44[VAR9 - 1];
            for (VAR20 = 0; VAR20 < VAR46[VAR9 - 1]; VAR20++, VAR37 += VAR23)
            {
                float VAR40 = 0.0f;
                int VAR41 = VAR39[VAR9 - 1][VAR20];
                int VAR42 = VAR20;
                if (FUN5(VAR9))
                {
                    for (VAR21 = 0; VAR21 < VAR23; VAR21++)
                    {
                        float VAR47 = FUN6(VAR5[VAR19 + VAR21]);
                        float VAR48;
                        if (VAR37[VAR21] == 64.0f)
                        {
                            if (VAR47 < 39.0f * VAR13)
                            {
                                VAR40 = VAR45;
                                break;
                            }
                            if (VAR47 >= VAR18)
                            {
                                VAR48 = VAR47 - VAR18;
                                VAR41 += 21;
                            }
                            else
                            {
                                int VAR49 = FUN7(FUN8(VAR47, VAR17), 0, 8191);
                                VAR48 = VAR47 - VAR49 * FUN9(VAR49) * VAR13;
                                VAR41 += FUN10(VAR49) * 2 - 4 + 1;
                            }
                        }
                        else
                        {
                            VAR48 = VAR47 - VAR37[VAR21] * VAR13;
                        }
                        if (VAR37[VAR21] != 0.0f)
                            VAR41++;
                        VAR40 += VAR48 * VAR48;
                    }
                }
                else
                {
                    for (VAR21 = 0; VAR21 < VAR23; VAR21++)
                    {
                        float VAR48 = VAR5[VAR19 + VAR21] - VAR37[VAR21] * VAR13;
                        VAR40 += VAR48 * VAR48;
                    }
                }
                VAR40 = VAR40 * VAR10 + VAR41;
                if (VAR40 < VAR34)
                {
                    VAR34 = VAR40;
                    VAR35 = VAR42;
                    VAR36 = VAR41;
                }
            }
            VAR22 += VAR34;
            VAR25 += VAR36;
            if (VAR22 >= VAR11)
                return VAR11;
            if (VAR4)
            {
                FUN11(VAR4, VAR39[VAR9 - 1][VAR35], VAR50[VAR9 - 1][VAR35]);
                if (FUN5(VAR9))
                    for (VAR20 = 0; VAR20 < VAR23; VAR20++)
                        if (VAR44[VAR9 - 1][VAR35 * VAR23 + VAR20] != 0.0f)
                            FUN11(VAR4, 1, VAR5[VAR19 + VAR20] < 0.0f);
                if (VAR9 == VAR51)
                {
                    for (VAR20 = 0; VAR20 < 2; VAR20++)
                    {
                        if (VAR44[VAR9 - 1][VAR35 * 2 + VAR20] == 64.0f)
                        {
                            int VAR52 = FUN7(FUN8(FUN6(VAR5[VAR19 + VAR20]), VAR17), 0, 8191);
                            int VAR53 = FUN10(VAR52);
                            FUN11(VAR4, VAR53 - 4 + 1, (1 << (VAR53 - 4 + 1)) - 2);
                            FUN11(VAR4, VAR53, VAR52 & ((1 << VAR53) - 1));
                        }
                    }
                }
            }
        }
        if (VAR12)
            *VAR12 = VAR25;
        return VAR22;
    }