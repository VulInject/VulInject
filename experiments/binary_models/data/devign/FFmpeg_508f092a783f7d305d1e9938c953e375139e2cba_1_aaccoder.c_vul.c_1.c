static float FUN1(struct VAR1 *VAR2, const float *VAR3, const float *VAR4, int VAR5, int VAR6, int VAR7, const float VAR8, const float VAR9, int *VAR10)
{
    const float VAR11 = VAR12[200 + VAR6 - VAR13 + VAR14];
    const float VAR15 = VAR12[200 - VAR6 + VAR13 - VAR14];
    const float VAR16 = 165140.0f * VAR11;
    int VAR17, VAR18, VAR19;
    float VAR20 = 0;
    const int VAR21 = VAR7 < VAR22 ? 4 : 2;
    int VAR23 = 0;
    const float VAR24 = FUN2(VAR15 * FUN2(VAR15));
    const int VAR25 = VAR26[VAR7];
    const int VAR27 = VAR28[VAR7];
    int VAR29[4];
    if (!VAR7)
    {
        for (VAR17 = 0; VAR17 < VAR5; VAR17++)
            VAR20 += VAR3[VAR17] * VAR3[VAR17];
        if (VAR10)
            *VAR10 = 0;
        return VAR20 * VAR8;
    }
    VAR29[0] = 1;
    for (VAR17 = 1; VAR17 < VAR21; VAR17++)
        VAR29[VAR17] = VAR29[VAR17 - 1] * VAR25;
    FUN3(VAR2->VAR30, VAR3, VAR4, VAR5, VAR24, !FUN4(VAR7), VAR27);
    for (VAR17 = 0; VAR17 < VAR5; VAR17 += VAR21)
    {
        float VAR31;
        int VAR32 = 0;
        int VAR33 = 0;
        const float *VAR34;
        int(*VAR35)[2] = &VAR2->VAR30[VAR17];
        VAR31 = 0.0f;
        for (VAR18 = 0; VAR18 < VAR21; VAR18++)
            VAR31 += VAR3[VAR17 + VAR18] * VAR3[VAR17 + VAR18];
        VAR32 = FUN4(VAR7) ? 0 : 40;
        VAR33 = VAR36[VAR7 - 1][VAR32];
        VAR31 = VAR31 * VAR8 + VAR33;
        for (VAR18 = 0; VAR18 < (1 << VAR21); VAR18++)
        {
            float VAR37 = 0.0f;
            int VAR38;
            int VAR39 = FUN4(VAR7) ? 0 : 40;
            int VAR40 = 0;
            for (VAR19 = 0; VAR19 < VAR21; VAR19++)
            {
                if ((VAR18 & (1 << VAR19)) && VAR35[VAR19][0] == VAR35[VAR19][1])
                {
                    VAR40 = 1;
                    break;
                }
            }
            if (VAR40)
                continue;
            for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                VAR39 += VAR35[VAR19][!!(VAR18 & (1 << VAR19))] * VAR29[VAR21 - 1 - VAR19];
            VAR38 = VAR36[VAR7 - 1][VAR39];
            VAR34 = &VAR41[VAR7 - 1][VAR39 * VAR21];
            VAR31 = VAR42;
            VAR34 = VAR41[VAR7 - 1];
            for (VAR18 = 0; VAR18 < VAR43[VAR7 - 1]; VAR18++, VAR34 += VAR21)
            {
                float VAR37 = 0.0f;
                int VAR38 = VAR36[VAR7 - 1][VAR18];
                if (FUN4(VAR7))
                {
                    for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                    {
                        float VAR44 = FUN5(VAR3[VAR17 + VAR19]);
                        float VAR45;
                        if (VAR34[VAR19] == 64.0f)
                        {
                            if (VAR44 < 39.0f * VAR11)
                            {
                                VAR37 = VAR42;
                                break;
                            }
                            if (VAR44 >= VAR16)
                            {
                                VAR45 = VAR44 - VAR16;
                                VAR38 += 21;
                            }
                            else
                            {
                                int VAR46 = FUN6(FUN7(VAR44, VAR15), 0, 8191);
                                VAR45 = VAR44 - VAR46 * FUN8(VAR46) * VAR11;
                                VAR38 += FUN9(VAR46) * 2 - 4 + 1;
                            }
                        }
                        else
                        {
                            VAR45 = VAR44 - VAR34[VAR19] * VAR11;
                        }
                        if (VAR34[VAR19] != 0.0f)
                            VAR38++;
                        VAR37 += VAR45 * VAR45;
                    }
                }
                else
                {
                    for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                    {
                        float VAR45 = VAR3[VAR17 + VAR19] - VAR34[VAR19] * VAR11;
                        VAR37 += VAR45 * VAR45;
                    }
                }
                VAR37 = VAR37 * VAR8 + VAR38;
                if (VAR37 < VAR31)
                {
                    VAR31 = VAR37;
                    VAR32 = VAR18;
                    VAR33 = VAR38;
                }
            }
            VAR20 += VAR31;
            VAR23 += VAR33;
            if (VAR20 >= VAR9)
                return VAR9;
        }
        if (VAR10)
            *VAR10 = VAR23;
        return VAR20;
    }