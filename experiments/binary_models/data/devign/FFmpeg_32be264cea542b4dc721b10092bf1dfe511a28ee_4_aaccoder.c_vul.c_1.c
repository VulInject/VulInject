static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const float VAR7)
{
    int VAR8 = 0, VAR9, VAR10, VAR11, VAR12;
    int VAR13 = VAR2->VAR14 * 1024.0 / VAR2->VAR15 / VAR2->VAR16 * (VAR7 / 120.VAR17);
    float VAR18[128] = {0}, VAR19[128] = {0};
    float VAR20[128];
    int VAR21, VAR22;
    int VAR23 = 0;
    int VAR24 = 0;
    float VAR25 = VAR26;
    VAR13 = FUN2(VAR13, 5800);
    for (VAR10 = 0; VAR10 < VAR6->VAR27.VAR28; VAR10 += VAR6->VAR27.VAR29[VAR10])
    {
        for (VAR12 = 0; VAR12 < VAR6->VAR27.VAR30; VAR12++)
        {
            int VAR31 = 0;
            float VAR32 = 0.0f, VAR33 = 0.0f;
            for (VAR11 = 0; VAR11 < VAR6->VAR27.VAR29[VAR10]; VAR11++)
            {
                VAR34 *VAR35 = &VAR4->VAR36.VAR37[VAR4->VAR38].VAR39[(VAR10 + VAR11) * 16 + VAR12];
                VAR32 += VAR35->VAR40;
                VAR33 += VAR35->VAR33;
                if (VAR35->VAR33 <= VAR35->VAR40 || VAR35->VAR40 == 0.0f)
                {
                    VAR6->VAR41[(VAR10 + VAR11) * 16 + VAR12] = 1;
                    continue;
                }
                VAR31 = 1;
            }
            VAR19[VAR10 * 16 + VAR12] = VAR32 * 512;
            VAR6->VAR41[VAR10 * 16 + VAR12] = !VAR31;
            if (VAR31)
                VAR25 = FUN2(VAR25, VAR32);
            VAR24 |= VAR31;
        }
    }
    for (VAR10 = 0; VAR10 < VAR6->VAR27.VAR28; VAR10 += VAR6->VAR27.VAR29[VAR10])
    {
        for (VAR12 = 0; VAR12 < VAR6->VAR27.VAR30; VAR12++)
        {
            if (VAR6->VAR41[VAR10 * 16 + VAR12])
            {
                VAR6->VAR42[VAR10 * 16 + VAR12] = VAR43;
                continue;
            }
            VAR6->VAR42[VAR10 * 16 + VAR12] = VAR43 + FUN2(FUN3(VAR19[VAR10 * 16 + VAR12] / VAR25) * 4, 59);
        }
    }
    if (!VAR24)
        return;
    FUN4(VAR4->VAR44, VAR6->VAR45, 1024);
    for (VAR10 = 0; VAR10 < VAR6->VAR27.VAR28; VAR10 += VAR6->VAR27.VAR29[VAR10])
    {
        VAR8 = VAR10 * 128;
        for (VAR12 = 0; VAR12 < VAR6->VAR27.VAR30; VAR12++)
        {
            const float *VAR46 = VAR4->VAR44 + VAR8;
            VAR20[VAR10 * 16 + VAR12] = FUN5(VAR6->VAR27.VAR29[VAR10], VAR6->VAR27.VAR47[VAR12], VAR46);
            VAR8 += VAR6->VAR27.VAR47[VAR12];
        }
    }
    do
    {
        int VAR48, VAR49;
        VAR22 = VAR6->VAR42[0];
        VAR49 = VAR23 ? 1 : 32;
        do
        {
            int VAR50 = -1;
            VAR48 = 0;
            for (VAR10 = 0; VAR10 < VAR6->VAR27.VAR28; VAR10 += VAR6->VAR27.VAR29[VAR10])
            {
                VAR8 = VAR10 * 128;
                for (VAR12 = 0; VAR12 < VAR6->VAR27.VAR30; VAR12++)
                {
                    const float *VAR51 = VAR6->VAR45 + VAR8;
                    const float *VAR46 = VAR4->VAR44 + VAR8;
                    int VAR52 = 0;
                    int VAR53;
                    float VAR54 = 0.0f;
                    if (VAR6->VAR41[VAR10 * 16 + VAR12] || VAR6->VAR42[VAR10 * 16 + VAR12] >= 218)
                    {
                        VAR8 += VAR6->VAR27.VAR47[VAR12];
                        continue;
                    }
                    VAR22 = FUN2(VAR22, VAR6->VAR42[VAR10 * 16 + VAR12]);
                    VAR53 = FUN6(VAR20[VAR10 * 16 + VAR12], VAR6->VAR42[VAR10 * 16 + VAR12]);
                    for (VAR11 = 0; VAR11 < VAR6->VAR27.VAR29[VAR10]; VAR11++)
                    {
                        int VAR55;
                        VAR54 += FUN7(VAR4, VAR51 + VAR11 * 128, VAR46 + VAR11 * 128, VAR6->VAR27.VAR47[VAR12], VAR6->VAR42[VAR10 * 16 + VAR12], VAR53, 1.0f, VAR26, &VAR55, 0);
                        VAR52 += VAR55;
                    }
                    VAR18[VAR10 * 16 + VAR12] = VAR54 - VAR52;
                    if (VAR50 != -1)
                    {
                        VAR52 += VAR56[VAR6->VAR42[VAR10 * 16 + VAR12] - VAR50 + VAR57];
                    }
                    VAR48 += VAR52;
                    VAR8 += VAR6->VAR27.VAR47[VAR12];
                    VAR50 = VAR6->VAR42[VAR10 * 16 + VAR12];
                }
            }
            if (VAR48 > VAR13)
            {
                for (VAR9 = 0; VAR9 < 128; VAR9++)
                    if (VAR6->VAR42[VAR9] < 218 - VAR49)
                        VAR6->VAR42[VAR9] += VAR49;
            }
            else
            {
                for (VAR9 = 0; VAR9 < 128; VAR9++)
                    if (VAR6->VAR42[VAR9] > 60 - VAR49)
                        VAR6->VAR42[VAR9] -= VAR49;
            }
            VAR49 >>= 1;
            if (!VAR49 && VAR48 > VAR13 * 1.02 && VAR6->VAR42[0] < 217)
                VAR49 = 1;
        } while (VAR49);
        VAR21 = 0;
        VAR22 = FUN8(VAR22, 60, 255 - VAR58);
        for (VAR10 = 0; VAR10 < VAR6->VAR27.VAR28; VAR10 += VAR6->VAR27.VAR29[VAR10])
        {
            for (VAR12 = 0; VAR12 < VAR6->VAR27.VAR30; VAR12++)
            {
                int VAR59 = VAR6->VAR42[VAR10 * 16 + VAR12];
                if (VAR18[VAR10 * 16 + VAR12] > VAR19[VAR10 * 16 + VAR12] && VAR6->VAR42[VAR10 * 16 + VAR12] > 60)
                {
                    if (FUN6(VAR20[VAR10 * 16 + VAR12], VAR6->VAR42[VAR10 * 16 + VAR12] - 1))
                        VAR6->VAR42[VAR10 * 16 + VAR12]--;
                    else
                        VAR6->VAR42[VAR10 * 16 + VAR12] -= 2;
                }
                VAR6->VAR42[VAR10 * 16 + VAR12] = FUN8(VAR6->VAR42[VAR10 * 16 + VAR12], VAR22, VAR22 + VAR58);
                VAR6->VAR42[VAR10 * 16 + VAR12] = FUN2(VAR6->VAR42[VAR10 * 16 + VAR12], 219);
                if (VAR6->VAR42[VAR10 * 16 + VAR12] != VAR59)
                    VAR21 = 1;
                VAR6->VAR60[VAR10 * 16 + VAR12] = FUN6(VAR20[VAR10 * 16 + VAR12], VAR6->VAR42[VAR10 * 16 + VAR12]);
            }
        }
        VAR23++;
    } while (VAR21 && VAR23 < 10);
}