static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const float VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12 = 0;
    int VAR13, VAR14;
    int VAR15;
    TrellisPath VAR16[VAR17][VAR18];
    int VAR19[VAR17];
    int VAR20;
    float VAR21;
    float VAR22 = VAR23, VAR24 = 0.0f, VAR25 = 0.0f;
    int VAR26, VAR27, VAR28 = 0;
    for (VAR13 = 0; VAR13 < 1024; VAR13++)
    {
        float VAR29 = FUN2(VAR6->VAR30[VAR13]);
        if (VAR29 > 0.0f)
        {
            VAR22 = FUN3(VAR22, VAR29);
            VAR24 = FUN4(VAR24, VAR29);
            VAR25 += VAR29 * VAR29;
            VAR28++;
        }
    }
    if (!VAR28)
    {
        memset(VAR6->VAR31, 0, sizeof(VAR6->VAR31));
        memset(VAR6->VAR32, 1, sizeof(VAR6->VAR32));
        return;
    }
    VAR26 = FUN5(VAR22);
    VAR27 = FUN6(VAR24);
    if (VAR27 - VAR26 > 60)
    {
        int VAR33 = VAR26;
        int VAR34 = VAR27;
        int VAR35 = FUN7(FUN8(FUN9(VAR25 / VAR28)) * 4 - 31 + VAR36 - VAR37);
        VAR27 = VAR35 + 30;
        VAR26 = VAR35 - 30;
        if (VAR26 < VAR33)
        {
            VAR27 += VAR33 - VAR26;
            VAR26 = VAR33;
        }
        else if (VAR27 > VAR34)
        {
            VAR26 -= VAR27 - VAR34;
            VAR27 = VAR34;
        }
    }
    for (VAR13 = 0; VAR13 < VAR18; VAR13++)
    {
        VAR16[0][VAR13].VAR38 = 0.0f;
        VAR16[0][VAR13].VAR39 = -1;
    }
    for (VAR14 = 1; VAR14 < VAR17; VAR14++)
    {
        for (VAR13 = 0; VAR13 < VAR18; VAR13++)
        {
            VAR16[VAR14][VAR13].VAR38 = VAR40;
            VAR16[VAR14][VAR13].VAR39 = -2;
        }
    }
    VAR15 = 1;
    FUN10(VAR4->VAR41, VAR6->VAR30, 1024);
    for (VAR9 = 0; VAR9 < VAR6->VAR42.VAR43; VAR9 += VAR6->VAR42.VAR44[VAR9])
    {
        VAR12 = VAR9 * 128;
        for (VAR11 = 0; VAR11 < VAR6->VAR42.VAR45; VAR11++)
        {
            const float *VAR46 = &VAR6->VAR30[VAR12];
            float VAR47, VAR48;
            int VAR49 = 0;
            VAR19[VAR15] = VAR9 * 16 + VAR11;
            VAR47 = VAR50;
            VAR48 = 0.0f;
            for (VAR10 = 0; VAR10 < VAR6->VAR42.VAR44[VAR9]; VAR10++)
            {
                VAR51 *VAR52 = &VAR4->VAR53.VAR54[VAR4->VAR55].VAR56[(VAR9 + VAR10) * 16 + VAR11];
                if (VAR52->VAR57 <= VAR52->VAR58 || VAR52->VAR58 == 0.0f)
                {
                    VAR6->VAR32[(VAR9 + VAR10) * 16 + VAR11] = 1;
                    continue;
                }
                VAR6->VAR32[(VAR9 + VAR10) * 16 + VAR11] = 0;
                VAR49 = 1;
                for (VAR13 = 0; VAR13 < VAR6->VAR42.VAR59[VAR11]; VAR13++)
                {
                    float VAR29 = FUN2(VAR46[VAR10 * 128 + VAR13]);
                    if (VAR29 > 0.0f)
                        VAR47 = FUN3(VAR47, VAR29);
                    VAR48 = FUN4(VAR48, VAR29);
                }
            }
            if (VAR49)
            {
                int VAR60, VAR61;
                float VAR62 = VAR40;
                float VAR63;
                VAR60 = FUN5(VAR47);
                VAR61 = FUN6(VAR48);
                VAR60 = FUN11(VAR60 - VAR26, 0, VAR18 - 1);
                VAR61 = FUN11(VAR61 - VAR26, 0, VAR18);
                VAR63 = FUN12(VAR6->VAR42.VAR44[VAR9], VAR6->VAR42.VAR59[VAR11], VAR4->VAR41 + VAR12);
                for (VAR8 = VAR60; VAR8 < VAR61; VAR8++)
                {
                    float VAR64 = 0;
                    int VAR65 = FUN13(VAR63, VAR6->VAR31[VAR9 * 16 + VAR11]);
                    for (VAR10 = 0; VAR10 < VAR6->VAR42.VAR44[VAR9]; VAR10++)
                    {
                        VAR51 *VAR52 = &VAR4->VAR53.VAR54[VAR4->VAR55].VAR56[(VAR9 + VAR10) * 16 + VAR11];
                        VAR64 += FUN14(VAR4, VAR46 + VAR10 * 128, VAR4->VAR41 + VAR12 + VAR10 * 128, VAR6->VAR42.VAR59[VAR11], VAR8 + VAR26, VAR65, VAR7 / VAR52->VAR58, VAR40, NULL, NULL, 0);
                    }
                    VAR62 = FUN3(VAR62, VAR64);
                    for (VAR13 = 0; VAR13 < VAR27 - VAR26; VAR13++)
                    {
                        float VAR38;
                        VAR38 = VAR16[VAR15 - 1][VAR13].VAR38 + VAR64 + VAR66[VAR8 - VAR13 + VAR67];
                        if (VAR38 < VAR16[VAR15][VAR8].VAR38)
                        {
                            VAR16[VAR15][VAR8].VAR38 = VAR38;
                            VAR16[VAR15][VAR8].VAR39 = VAR13;
                        }
                    }
                }
            }
            else
            {
                for (VAR8 = 0; VAR8 < VAR27 - VAR26; VAR8++)
                {
                    VAR16[VAR15][VAR8].VAR38 = VAR16[VAR15 - 1][VAR8].VAR38 + 1;
                    VAR16[VAR15][VAR8].VAR39 = VAR8;
                }
            }
            VAR6->VAR32[VAR9 * 16 + VAR11] = !VAR49;
            VAR12 += VAR6->VAR42.VAR59[VAR11];
            VAR15++;
        }
    }
    VAR15--;
    VAR21 = VAR16[VAR15][0].VAR38;
    VAR20 = 0;
    for (VAR13 = 1; VAR13 < VAR18; VAR13++)
    {
        if (VAR16[VAR15][VAR13].VAR38 < VAR21)
        {
            VAR21 = VAR16[VAR15][VAR13].VAR38;
            VAR20 = VAR13;
        }
    }
    while (VAR15)
    {
        VAR6->VAR31[VAR19[VAR15]] = VAR20 + VAR26;
        VAR20 = VAR16[VAR15][VAR20].VAR39;
        VAR15--;
    }
    for (VAR9 = 0; VAR9 < VAR6->VAR42.VAR43; VAR9 += VAR6->VAR42.VAR44[VAR9])
        for (VAR11 = 0; VAR11 < VAR6->VAR42.VAR45; VAR11++)
            for (VAR10 = 1; VAR10 < VAR6->VAR42.VAR44[VAR9]; VAR10++)
                VAR6->VAR31[(VAR9 + VAR10) * 16 + VAR11] = VAR6->VAR31[VAR9 * 16 + VAR11];
}