static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, const float *VAR5, int VAR6, int VAR7, int VAR8, const float VAR9)
{
    const float VAR10 = VAR11[200 + VAR7 - VAR12 + VAR13];
    const float VAR14 = VAR11[200 - VAR7 + VAR12 - VAR13];
    const float VAR15 = 165140.0f * VAR10;
    const int VAR16 = (VAR8 < VAR17) ? 4 : 2;
    int VAR18, VAR19, VAR20;
    const float VAR21 = FUN2(VAR14 * FUN2(VAR14));
    const int VAR22 = VAR23[VAR8];
    const int VAR24 = VAR25[VAR8];
    int VAR26[4];
    float *VAR27 = VAR2->VAR28;
    if (!VAR8)
        return;
    VAR26[0] = 1;
    for (VAR18 = 1; VAR18 < VAR16; VAR18++)
        VAR26[VAR18] = VAR26[VAR18 - 1] * VAR22;
    FUN3(VAR27, VAR5, VAR6);
    FUN4(VAR2->VAR29, VAR5, VAR27, VAR6, VAR21, !FUN5(VAR8), VAR24);
    for (VAR18 = 0; VAR18 < VAR6; VAR18 += VAR16)
    {
        float VAR30;
        int VAR31 = 0;
        int VAR32 = 0;
        const float *VAR33;
        int(*VAR34)[2] = &VAR2->VAR29[VAR18];
        VAR30 = 0.0f;
        for (VAR19 = 0; VAR19 < VAR16; VAR19++)
            VAR30 += VAR5[VAR18 + VAR19] * VAR5[VAR18 + VAR19];
        VAR31 = FUN5(VAR8) ? 0 : 40;
        VAR32 = VAR35[VAR8 - 1][VAR31];
        VAR30 = VAR30 * VAR9 + VAR32;
        for (VAR19 = 0; VAR19 < (1 << VAR16); VAR19++)
        {
            float VAR36 = 0.0f;
            int VAR37;
            int VAR38 = FUN5(VAR8) ? 0 : 40;
            int VAR39 = 0;
            for (VAR20 = 0; VAR20 < VAR16; VAR20++)
            {
                if ((VAR19 & (1 << VAR20)) && VAR34[VAR20][0] == VAR34[VAR20][1])
                {
                    VAR39 = 1;
                    break;
                }
            }
            if (VAR39)
                continue;
            for (VAR20 = 0; VAR20 < VAR16; VAR20++)
                VAR38 += VAR34[VAR20][!!(VAR19 & (1 << VAR20))] * VAR26[VAR16 - 1 - VAR20];
            VAR37 = VAR35[VAR8 - 1][VAR38];
            VAR33 = &VAR40[VAR8 - 1][VAR38 * VAR16];
            VAR33 = VAR40[VAR8 - 1];
            VAR30 = VAR41;
            for (VAR19 = 0; VAR19 < VAR42[VAR8 - 1]; VAR19++, VAR33 += VAR16)
            {
                float VAR36 = 0.0f;
                int VAR37 = VAR35[VAR8 - 1][VAR19];
                int VAR38 = VAR19;
                if (FUN5(VAR8))
                {
                    for (VAR20 = 0; VAR20 < VAR16; VAR20++)
                    {
                        float VAR43 = FUN6(VAR5[VAR18 + VAR20]);
                        float VAR44;
                        if (VAR33[VAR20] == 64.0f)
                        {
                            if (VAR43 < 39.0f * VAR10)
                            {
                                VAR36 = VAR41;
                                break;
                            }
                            if (VAR43 >= VAR15)
                            {
                                VAR44 = VAR43 - VAR15;
                                VAR37 += 21;
                            }
                            else
                            {
                                int VAR45 = FUN7(FUN8(VAR43, VAR14), 0, 8191);
                                VAR44 = VAR43 - VAR45 * FUN9(VAR45) * VAR10;
                                VAR37 += FUN10(VAR45) * 2 - 4 + 1;
                            }
                        }
                        else
                        {
                            VAR44 = VAR43 - VAR33[VAR20] * VAR10;
                        }
                        if (VAR33[VAR20] != 0.0f)
                            VAR37++;
                        VAR36 += VAR44 * VAR44;
                    }
                }
                else
                {
                    for (VAR20 = 0; VAR20 < VAR16; VAR20++)
                    {
                        float VAR44 = VAR5[VAR18 + VAR20] - VAR33[VAR20] * VAR10;
                        VAR36 += VAR44 * VAR44;
                    }
                }
                VAR36 = VAR36 * VAR9 + VAR37;
                if (VAR36 < VAR30)
                {
                    VAR30 = VAR36;
                    VAR31 = VAR38;
                    VAR32 = VAR37;
                }
            }
            FUN11(VAR4, VAR35[VAR8 - 1][VAR31], VAR46[VAR8 - 1][VAR31]);
            if (FUN5(VAR8))
                for (VAR19 = 0; VAR19 < VAR16; VAR19++)
                    if (VAR40[VAR8 - 1][VAR31 * VAR16 + VAR19] != 0.0f)
                        FUN11(VAR4, 1, VAR5[VAR18 + VAR19] < 0.0f);
            if (VAR8 == VAR47)
            {
                for (VAR19 = 0; VAR19 < 2; VAR19++)
                {
                    if (VAR40[VAR8 - 1][VAR31 * 2 + VAR19] == 64.0f)
                    {
                        int VAR48 = FUN7(FUN8(FUN6(VAR5[VAR18 + VAR19]), VAR14), 0, 8191);
                        int VAR49 = FUN10(VAR48);
                        FUN11(VAR4, VAR49 - 4 + 1, (1 << (VAR49 - 4 + 1)) - 2);
                        FUN11(VAR4, VAR49, VAR48 & ((1 << VAR49) - 1));
                    }
                }
            }
        }
    }