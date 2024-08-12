static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const float VAR7)
{
    int VAR8 = 0, VAR9, VAR10, VAR11, VAR12;
    int VAR13 = VAR2->VAR14 * 1024.0 / VAR2->VAR15 / VAR2->VAR16;
    float VAR17[128], VAR18[128];
    int VAR19, VAR20;
    int VAR21 = 0;
    int VAR22 = 0;
    float VAR23 = VAR24;
    memset(VAR17, 0, sizeof(VAR17));
    for (VAR10 = 0; VAR10 < VAR6->VAR25.VAR26; VAR10 += VAR6->VAR25.VAR27[VAR10])
    {
        for (VAR12 = 0; VAR12 < VAR6->VAR25.VAR28; VAR12++)
        {
            int VAR29 = 0;
            float VAR30 = 0.0f;
            for (VAR11 = 0; VAR11 < VAR6->VAR25.VAR27[VAR10]; VAR11++)
            {
                VAR31 *VAR32 = &VAR4->VAR33.VAR34[VAR4->VAR35 * VAR36 + (VAR10 + VAR11) * 16 + VAR12];
                VAR30 += VAR32->VAR37;
                if (VAR32->VAR38 <= VAR32->VAR37 || VAR32->VAR37 == 0.0f)
                {
                    VAR6->VAR39[(VAR10 + VAR11) * 16 + VAR12] = 1;
                    continue;
                }
                VAR29 = 1;
            }
            VAR18[VAR10 * 16 + VAR12] = VAR30 * 512;
            VAR6->VAR39[VAR10 * 16 + VAR12] = !VAR29;
            if (VAR29)
                VAR23 = FUN2(VAR23, VAR30);
            VAR22 = FUN3(VAR22, VAR29);
        }
    }
    for (VAR10 = 0; VAR10 < VAR6->VAR25.VAR26; VAR10 += VAR6->VAR25.VAR27[VAR10])
    {
        for (VAR12 = 0; VAR12 < VAR6->VAR25.VAR28; VAR12++)
        {
            if (VAR6->VAR39[VAR10 * 16 + VAR12])
            {
                VAR6->VAR40[VAR10 * 16 + VAR12] = VAR41;
                continue;
            }
            VAR6->VAR40[VAR10 * 16 + VAR12] = VAR41 + FUN2(FUN4(VAR18[VAR10 * 16 + VAR12] / VAR23) * 4, 59);
        }
    }
    if (!VAR22)
        return;
    FUN5(VAR4->VAR42, VAR6->VAR43, 1024);
    do
    {
        int VAR44, VAR45;
        VAR20 = VAR6->VAR40[0];
        VAR45 = VAR21 ? 1 : 32;
        do
        {
            int VAR46 = -1;
            VAR44 = 0;
            VAR19 = 0;
            for (VAR10 = 0; VAR10 < VAR6->VAR25.VAR26; VAR10 += VAR6->VAR25.VAR27[VAR10])
            {
                VAR8 = VAR10 * 128;
                for (VAR12 = 0; VAR12 < VAR6->VAR25.VAR28; VAR12++)
                {
                    const float *VAR47 = VAR6->VAR43 + VAR8;
                    const float *VAR48 = VAR4->VAR42 + VAR8;
                    int VAR49 = 0;
                    int VAR50;
                    float VAR51 = VAR24;
                    int VAR52 = 0;
                    if (VAR6->VAR39[VAR10 * 16 + VAR12] || VAR6->VAR40[VAR10 * 16 + VAR12] >= 218)
                    {
                        VAR8 += VAR6->VAR25.VAR53[VAR12];
                        continue;
                    }
                    VAR20 = FUN2(VAR20, VAR6->VAR40[VAR10 * 16 + VAR12]);
                    {
                        float VAR54 = 0.0f;
                        int VAR55 = 0;
                        float VAR56 = 0.0f;
                        float VAR57 = VAR58[200 - VAR6->VAR40[VAR10 * 16 + VAR12] + VAR41 - VAR59];
                        float VAR60 = FUN6(VAR57 * FUN6(VAR57));
                        int VAR61;
                        for (VAR11 = 0; VAR11 < VAR6->VAR25.VAR27[VAR10]; VAR11++)
                        {
                            for (VAR9 = 0; VAR9 < VAR6->VAR25.VAR53[VAR12]; VAR9++)
                            {
                                VAR56 = FUN7(VAR56, VAR48[VAR11 * 128 + VAR9]);
                            }
                        }
                        VAR61 = VAR56 * VAR60 + 0.4054;
                        if (VAR61 == 0)
                            VAR50 = 0;
                        else if (VAR61 == 1)
                            VAR50 = 1;
                        else if (VAR61 == 2)
                            VAR50 = 3;
                        else if (VAR61 <= 4)
                            VAR50 = 5;
                        else if (VAR61 <= 7)
                            VAR50 = 7;
                        else if (VAR61 <= 12)
                            VAR50 = 9;
                        else
                            VAR50 = 11;
                        for (VAR11 = 0; VAR11 < VAR6->VAR25.VAR27[VAR10]; VAR11++)
                        {
                            int VAR62;
                            VAR54 += FUN8(VAR4, VAR47 + VAR11 * 128, VAR48 + VAR11 * 128, VAR6->VAR25.VAR53[VAR12], VAR6->VAR40[VAR10 * 16 + VAR12], VAR50, VAR7, VAR24, &VAR62);
                            VAR55 += VAR62;
                        }
                        VAR51 = VAR54;
                        VAR52 = VAR55;
                    }
                    VAR17[VAR10 * 16 + VAR12] = (VAR51 - VAR52) / VAR7;
                    VAR49 = VAR52;
                    if (VAR46 != -1)
                    {
                        VAR49 += VAR63[VAR6->VAR40[VAR10 * 16 + VAR12] - VAR46 + VAR64];
                    }
                    VAR44 += VAR49;
                    VAR8 += VAR6->VAR25.VAR53[VAR12];
                    VAR46 = VAR6->VAR40[VAR10 * 16 + VAR12];
                }
            }
            if (VAR44 > VAR13)
            {
                for (VAR9 = 0; VAR9 < 128; VAR9++)
                    if (VAR6->VAR40[VAR9] < 218 - VAR45)
                        VAR6->VAR40[VAR9] += VAR45;
            }
            else
            {
                for (VAR9 = 0; VAR9 < 128; VAR9++)
                    if (VAR6->VAR40[VAR9] > 60 - VAR45)
                        VAR6->VAR40[VAR9] -= VAR45;
            }
            VAR45 >>= 1;
            if (!VAR45 && VAR44 > VAR13 * 1.02)
                VAR45 = 1;
            if (VAR6->VAR40[0] >= 217)
                break;
        } while (VAR45);
        VAR19 = 0;
        VAR20 = FUN9(VAR20, 60, 255 - VAR65);
        for (VAR10 = 0; VAR10 < VAR6->VAR25.VAR26; VAR10 += VAR6->VAR25.VAR27[VAR10])
        {
            VAR8 = VAR10 * 128;
            for (VAR12 = 0; VAR12 < VAR6->VAR25.VAR28; VAR12++)
            {
                int VAR66 = VAR6->VAR40[VAR10 * 16 + VAR12];
                if (VAR17[VAR10 * 16 + VAR12] > VAR18[VAR10 * 16 + VAR12] && VAR6->VAR40[VAR10 * 16 + VAR12] > 60)
                    VAR6->VAR40[VAR10 * 16 + VAR12]--;
                VAR6->VAR40[VAR10 * 16 + VAR12] = FUN9(VAR6->VAR40[VAR10 * 16 + VAR12], VAR20, VAR20 + VAR65);
                VAR6->VAR40[VAR10 * 16 + VAR12] = FUN2(VAR6->VAR40[VAR10 * 16 + VAR12], 219);
                if (VAR6->VAR40[VAR10 * 16 + VAR12] != VAR66)
                    VAR19 = 1;
            }
        }
        VAR21++;
    } while (VAR19 && VAR21 < 10);
}