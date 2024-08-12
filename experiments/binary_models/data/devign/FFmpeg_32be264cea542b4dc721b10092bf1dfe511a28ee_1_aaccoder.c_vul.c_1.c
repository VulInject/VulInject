static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, const float VAR7)
{
    BandCodingPath VAR8[120][VAR9];
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16;
    const int VAR17 = VAR4->VAR18.VAR17;
    const int VAR19 = VAR4->VAR18.VAR20 == 1 ? 5 : 3;
    const int VAR21 = (1 << VAR19) - 1;
    int VAR22, VAR23, VAR24;
    int VAR25[120], VAR26[120], VAR27;
    float VAR28 = VAR29;
    int VAR30 = 0;
    FUN2(VAR2->VAR31, VAR4->VAR32, 1024);
    VAR13 = VAR5 * 128;
    for (VAR12 = 0; VAR12 < VAR9; VAR12++)
    {
        VAR8[0][VAR12].VAR33 = 0.0f;
        VAR8[0][VAR12].VAR34 = -1;
        VAR8[0][VAR12].VAR35 = 0;
    }
    for (VAR11 = 0; VAR11 < VAR17; VAR11++)
    {
        VAR14 = VAR4->VAR18.VAR36[VAR11];
        if (VAR4->VAR37[VAR5 * 16 + VAR11])
        {
            for (VAR12 = 0; VAR12 < VAR9; VAR12++)
            {
                VAR8[VAR11 + 1][VAR12].VAR34 = VAR12;
                VAR8[VAR11 + 1][VAR12].VAR33 = VAR8[VAR11][VAR12].VAR33;
                VAR8[VAR11 + 1][VAR12].VAR35 = VAR8[VAR11][VAR12].VAR35 + 1;
            }
        }
        else
        {
            float VAR38 = VAR28;
            int VAR39 = VAR30;
            VAR28 = VAR29;
            VAR30 = 0;
            for (VAR12 = 0; VAR12 < VAR9; VAR12++)
            {
                float VAR40, VAR41;
                float VAR42 = 0.0f;
                if (VAR12 >= 12 && VAR4->VAR43[VAR5 * 16 + VAR11] < VAR44[VAR12] || VAR12 < VAR45[VAR4->VAR43[VAR5 * 16 + VAR11]] && VAR4->VAR43[VAR5 * 16 + VAR11] > VAR44[VAR12])
                {
                    VAR8[VAR11 + 1][VAR12].VAR34 = -1;
                    VAR8[VAR11 + 1][VAR12].VAR33 = VAR29;
                    VAR8[VAR11 + 1][VAR12].VAR35 = VAR8[VAR11][VAR12].VAR35 + 1;
                    continue;
                }
                for (VAR10 = 0; VAR10 < VAR6; VAR10++)
                {
                    VAR46 *VAR47 = &VAR2->VAR48.VAR49[VAR2->VAR50].VAR51[(VAR5 + VAR10) * 16 + VAR11];
                    VAR42 += FUN3(VAR2, VAR4->VAR32 + VAR13 + VAR10 * 128, VAR2->VAR31 + VAR13 + VAR10 * 128, VAR14, VAR4->VAR52[(VAR5 + VAR10) * 16 + VAR11], VAR44[VAR12], VAR7 / VAR47->VAR53, VAR29, NULL, 0);
                }
                VAR40 = VAR8[VAR11][VAR12].VAR33 + VAR42;
                VAR41 = VAR38 + VAR42 + VAR19 + 4;
                if (VAR54[VAR4->VAR18.VAR20 == 8][VAR8[VAR11][VAR12].VAR35] != VAR54[VAR4->VAR18.VAR20 == 8][VAR8[VAR11][VAR12].VAR35 + 1])
                    VAR40 += VAR19;
                if (VAR41 < VAR40)
                {
                    VAR8[VAR11 + 1][VAR12].VAR34 = VAR39;
                    VAR8[VAR11 + 1][VAR12].VAR33 = VAR41;
                    VAR8[VAR11 + 1][VAR12].VAR35 = 1;
                }
                else
                {
                    VAR8[VAR11 + 1][VAR12].VAR34 = VAR12;
                    VAR8[VAR11 + 1][VAR12].VAR33 = VAR40;
                    VAR8[VAR11 + 1][VAR12].VAR35 = VAR8[VAR11][VAR12].VAR35 + 1;
                }
                if (VAR8[VAR11 + 1][VAR12].VAR33 < VAR28)
                {
                    VAR28 = VAR8[VAR11 + 1][VAR12].VAR33;
                    VAR30 = VAR12;
                }
            }
        }
        VAR13 += VAR4->VAR18.VAR36[VAR11];
    }
    VAR27 = 0;
    VAR22 = 0;
    for (VAR12 = 1; VAR12 < VAR9; VAR12++)
        if (VAR8[VAR17][VAR12].VAR33 < VAR8[VAR17][VAR22].VAR33)
            VAR22 = VAR12;
    VAR23 = VAR17;
    while (VAR23 > 0)
    {
        FUN4(VAR22 >= 0);
        VAR12 = VAR22;
        VAR25[VAR27] = VAR8[VAR23][VAR12].VAR35;
        VAR26[VAR27] = VAR12;
        VAR22 = VAR8[VAR23 - VAR8[VAR23][VAR12].VAR35 + 1][VAR12].VAR34;
        VAR23 -= VAR8[VAR23][VAR12].VAR35;
        VAR27++;
    }
    VAR13 = 0;
    for (VAR15 = VAR27 - 1; VAR15 >= 0; VAR15--)
    {
        VAR12 = VAR44[VAR26[VAR15]];
        FUN5(&VAR2->VAR55, 4, VAR12);
        VAR24 = VAR25[VAR15];
        memset(VAR4->VAR37 + VAR5 * 16 + VAR13, !VAR12, VAR24);
        for (VAR16 = 0; VAR16 < VAR24; VAR16++)
        {
            VAR4->VAR43[VAR5 * 16 + VAR13] = VAR12;
            VAR13++;
        }
        while (VAR24 >= VAR21)
        {
            FUN5(&VAR2->VAR55, VAR19, VAR21);
            VAR24 -= VAR21;
        }
        FUN5(&VAR2->VAR55, VAR19, VAR24);
    }
}