static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const float VAR7)
{
    int VAR8 = 0, VAR9, VAR10, VAR11, VAR12;
    float VAR13[128], VAR14[128];
    int VAR15, VAR16;
    float VAR17 = ((VAR6->VAR18.VAR19 > 1) ? 85.80 : 147.84) / VAR7;
    int VAR20 = 0, VAR21 = 0, VAR22 = 0;
    float VAR23 = 0.0;
    if (VAR6->VAR18.VAR19 == 1)
    {
        VAR8 = 0;
        for (VAR9 = 0; VAR9 < 1024; VAR9++)
        {
            if (VAR9 - VAR8 >= VAR6->VAR18.VAR24[VAR22])
            {
                VAR8 += VAR6->VAR18.VAR24[VAR22];
                VAR22++;
            }
            if (VAR6->VAR25[VAR9])
            {
                VAR23 += VAR6->VAR25[VAR9] * VAR6->VAR25[VAR9];
                VAR20 = VAR9;
                VAR21 = VAR22;
            }
        }
    }
    else
    {
        for (VAR10 = 0; VAR10 < 8; VAR10++)
        {
            const float *VAR25 = VAR6->VAR25 + VAR10 * 128;
            VAR22 = VAR8 = 0;
            for (VAR9 = 0; VAR9 < 128; VAR9++)
            {
                if (VAR9 - VAR8 >= VAR6->VAR18.VAR24[VAR22])
                {
                    VAR8 += VAR6->VAR18.VAR24[VAR22];
                    VAR22++;
                }
                if (VAR25[VAR9])
                {
                    VAR23 += VAR25[VAR9] * VAR25[VAR9];
                    VAR20 = FUN2(VAR20, VAR9);
                    VAR21 = FUN2(VAR21, VAR22);
                }
            }
        }
    }
    VAR20++;
    VAR23 /= VAR20;
    if (VAR23 == 0.0f)
    {
        for (VAR9 = 0; VAR9 < FUN3(VAR6->VAR26); VAR9++)
            VAR6->VAR26[VAR9] = VAR27;
        return;
    }
    for (VAR10 = 0; VAR10 < VAR6->VAR18.VAR19; VAR10 += VAR6->VAR18.VAR28[VAR10])
    {
        VAR8 = VAR10 * 128;
        for (VAR12 = 0; VAR12 < VAR6->VAR18.VAR29; VAR12++)
        {
            float *VAR30 = VAR6->VAR25 + VAR8;
            const int VAR31 = VAR6->VAR18.VAR24[VAR12];
            int VAR32 = VAR8, VAR33 = VAR8 + VAR31, VAR34 = VAR8;
            float VAR35 = -1, VAR36 = 0.0f, VAR37;
            VAR14[VAR10 * 16 + VAR12] = 0.0f;
            if (VAR12 > VAR21)
            {
                VAR14[VAR10 * 16 + VAR12] = 0.0f;
                VAR8 += VAR31;
                for (VAR11 = 0; VAR11 < VAR6->VAR18.VAR28[VAR10]; VAR11++)
                    memset(VAR30 + VAR11 * 128, 0, sizeof(VAR30[0]) * VAR31);
                continue;
            }
            for (VAR11 = 0; VAR11 < VAR6->VAR18.VAR28[VAR10]; VAR11++)
            {
                for (VAR9 = 0; VAR9 < VAR31; VAR9++)
                {
                    float VAR37 = VAR30[VAR11 * 128 + VAR9] * VAR30[VAR11 * 128 + VAR9];
                    VAR14[VAR10 * 16 + VAR12] = FUN2(VAR14[VAR10 * 16 + VAR12], FUN4(VAR30[VAR11 * 128 + VAR9]));
                    VAR36 += VAR37;
                    if (VAR6->VAR18.VAR19 == 1 && VAR35 < VAR37)
                    {
                        VAR35 = VAR37;
                        VAR34 = VAR8 + VAR9;
                    }
                }
            }
            if (VAR6->VAR18.VAR19 == 1)
            {
                VAR32 = FUN2(VAR34 - 2, VAR32);
                VAR33 = FUN5(VAR34 + 3, VAR33);
            }
            else
            {
                VAR32 -= VAR8;
                VAR33 -= VAR8;
            }
            VAR8 += VAR31;
            VAR36 = FUN6(VAR36 / (VAR23 * (VAR33 - VAR32)), 0.3 + 0.1 * (VAR21 - VAR12) / VAR21);
            VAR37 = 1.0 - (1.0 * VAR32 / VAR20);
            VAR13[VAR10 * 16 + VAR12] = VAR17 / (1.4 * VAR36 + VAR37 * VAR37 * VAR37 + 0.075);
        }
    }
    memset(VAR6->VAR26, 0, sizeof(VAR6->VAR26));
    FUN7(VAR4->VAR38, VAR6->VAR25, 1024);
    for (VAR10 = 0; VAR10 < VAR6->VAR18.VAR19; VAR10 += VAR6->VAR18.VAR28[VAR10])
    {
        VAR8 = VAR10 * 128;
        for (VAR12 = 0; VAR12 < VAR6->VAR18.VAR29; VAR12++)
        {
            const float *VAR30 = VAR6->VAR25 + VAR8;
            const float *VAR39 = VAR4->VAR38 + VAR8;
            const int VAR31 = VAR6->VAR18.VAR24[VAR12];
            int VAR40, VAR41, VAR42;
            int VAR43 = -1, VAR44 = 256;
            float VAR45;
            if (VAR14[VAR10 * 16 + VAR12] < 21.544)
            {
                VAR6->VAR46[VAR10 * 16 + VAR12] = 1;
                VAR8 += VAR31;
                continue;
            }
            VAR6->VAR46[VAR10 * 16 + VAR12] = 0;
            VAR40 = VAR41 = FUN8(VAR27 - VAR47 - FUN9(1 / VAR14[VAR10 * 16 + VAR12]) * 16 / 3, 60, 218);
            for (;;)
            {
                float VAR48 = 0.0f;
                int VAR49;
                for (VAR11 = 0; VAR11 < VAR6->VAR18.VAR28[VAR10]; VAR11++)
                {
                    int VAR50;
                    VAR48 += FUN10(VAR4, VAR30 + VAR11 * 128, VAR39 + VAR11 * 128, VAR6->VAR18.VAR24[VAR12], VAR40, VAR51, VAR7, VAR52, &VAR50, 0);
                    VAR48 -= VAR50;
                }
                VAR48 *= 1.0f / 512.0f / VAR7;
                VAR49 = FUN11(VAR14[VAR10 * 16 + VAR12], VAR53[VAR54 - VAR40 + VAR27 - VAR47], VAR55);
                if (VAR49 >= 8191)
                {
                    VAR6->VAR26[VAR10 * 16 + VAR12] = VAR41;
                    break;
                }
                VAR41 = VAR40;
                VAR45 = FUN4(VAR48 - VAR13[VAR10 * 16 + VAR12]);
                if (VAR45 <= 1.0f)
                    VAR42 = 0;
                else
                    VAR42 = FUN9(VAR45);
                if (VAR48 > VAR13[VAR10 * 16 + VAR12])
                    VAR42 = -VAR42;
                VAR40 += VAR42;
                VAR40 = FUN12(VAR40);
                VAR42 = VAR40 - VAR41;
                if (FUN13(VAR42) <= 1 || (VAR42 > 0 && VAR40 >= VAR44) || (VAR42 < 0 && VAR40 <= VAR43))
                {
                    VAR6->VAR26[VAR10 * 16 + VAR12] = FUN8(VAR40, VAR43, VAR44);
                    break;
                }
                if (VAR42 > 0)
                    VAR43 = VAR41;
                else
                    VAR44 = VAR41;
            }
            VAR8 += VAR31;
        }
    }
    VAR15 = VAR6->VAR26[0] ? VAR6->VAR26[0] : VAR56;
    for (VAR9 = 1; VAR9 < 128; VAR9++)
    {
        if (!VAR6->VAR26[VAR9])
            VAR6->VAR26[VAR9] = VAR6->VAR26[VAR9 - 1];
        else
            VAR15 = FUN5(VAR15, VAR6->VAR26[VAR9]);
    }
    if (VAR15 == VAR56)
        VAR15 = 0;
    VAR15 = FUN5(VAR15, VAR57);
    VAR16 = FUN5(VAR15 + VAR58, VAR57);
    for (VAR9 = 126; VAR9 >= 0; VAR9--)
    {
        if (!VAR6->VAR26[VAR9])
            VAR6->VAR26[VAR9] = VAR6->VAR26[VAR9 + 1];
        VAR6->VAR26[VAR9] = FUN8(VAR6->VAR26[VAR9], VAR15, VAR16);
    }
}