static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, const float VAR7)
{
    BandCodingPath VAR8[120][12];
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15;
    const int VAR16 = VAR4->VAR17.VAR16;
    const int VAR18 = VAR4->VAR17.VAR19 == 1 ? 5 : 3;
    const int VAR20 = (1 << VAR18) - 1;
    int VAR21, VAR22, VAR23;
    int VAR24[120], VAR25[120], VAR26;
    float VAR27 = VAR28;
    int VAR29 = 0;
    FUN2(VAR2->VAR30, VAR4->VAR31, 1024);
    VAR12 = VAR5 * 128;
    for (VAR11 = 0; VAR11 < 12; VAR11++)
    {
        VAR8[0][VAR11].VAR32 = VAR18 + 4;
        VAR8[0][VAR11].VAR33 = -1;
        VAR8[0][VAR11].VAR34 = 0;
    }
    for (VAR10 = 0; VAR10 < VAR16; VAR10++)
    {
        VAR13 = VAR4->VAR17.VAR35[VAR10];
        if (VAR4->VAR36[VAR5 * 16 + VAR10])
        {
            float VAR37 = VAR8[VAR10][0].VAR32;
            float VAR38 = VAR27 + VAR18 + 4;
            if (VAR39[VAR4->VAR17.VAR19 == 8][VAR8[VAR10][0].VAR34] != VAR39[VAR4->VAR17.VAR19 == 8][VAR8[VAR10][0].VAR34 + 1])
                VAR37 += VAR18;
            if (VAR38 < VAR37)
            {
                VAR8[VAR10 + 1][0].VAR33 = VAR29;
                VAR8[VAR10 + 1][0].VAR32 = VAR38;
                VAR8[VAR10 + 1][0].VAR34 = 1;
            }
            else
            {
                VAR8[VAR10 + 1][0].VAR33 = 0;
                VAR8[VAR10 + 1][0].VAR32 = VAR37;
                VAR8[VAR10 + 1][0].VAR34 = VAR8[VAR10][0].VAR34 + 1;
            }
            VAR27 = VAR8[VAR10 + 1][0].VAR32;
            VAR29 = 0;
            for (VAR11 = 1; VAR11 < 12; VAR11++)
            {
                VAR8[VAR10 + 1][VAR11].VAR32 = 61450;
                VAR8[VAR10 + 1][VAR11].VAR33 = -1;
                VAR8[VAR10 + 1][VAR11].VAR34 = 0;
            }
        }
        else
        {
            float VAR40 = VAR27;
            int VAR41 = VAR29;
            int VAR42 = VAR4->VAR43[VAR5 * 16 + VAR10];
            VAR27 = VAR28;
            VAR29 = 0;
            for (VAR11 = 0; VAR11 < VAR42; VAR11++)
            {
                VAR8[VAR10 + 1][VAR11].VAR32 = 61450;
                VAR8[VAR10 + 1][VAR11].VAR33 = -1;
                VAR8[VAR10 + 1][VAR11].VAR34 = 0;
            }
            for (VAR11 = VAR42; VAR11 < 12; VAR11++)
            {
                float VAR37, VAR38;
                float VAR44 = 0.0f;
                for (VAR9 = 0; VAR9 < VAR6; VAR9++)
                {
                    VAR44 += FUN3(VAR2, VAR4->VAR31 + VAR12 + VAR9 * 128, VAR2->VAR30 + VAR12 + VAR9 * 128, VAR13, VAR4->VAR45[(VAR5 + VAR9) * 16 + VAR10], VAR11, 0, VAR28, NULL);
                }
                VAR37 = VAR8[VAR10][VAR11].VAR32 + VAR44;
                VAR38 = VAR40 + VAR44 + VAR18 + 4;
                if (VAR39[VAR4->VAR17.VAR19 == 8][VAR8[VAR10][VAR11].VAR34] != VAR39[VAR4->VAR17.VAR19 == 8][VAR8[VAR10][VAR11].VAR34 + 1])
                    VAR37 += VAR18;
                if (VAR38 < VAR37)
                {
                    VAR8[VAR10 + 1][VAR11].VAR33 = VAR41;
                    VAR8[VAR10 + 1][VAR11].VAR32 = VAR38;
                    VAR8[VAR10 + 1][VAR11].VAR34 = 1;
                }
                else
                {
                    VAR8[VAR10 + 1][VAR11].VAR33 = VAR11;
                    VAR8[VAR10 + 1][VAR11].VAR32 = VAR37;
                    VAR8[VAR10 + 1][VAR11].VAR34 = VAR8[VAR10][VAR11].VAR34 + 1;
                }
                if (VAR8[VAR10 + 1][VAR11].VAR32 < VAR27)
                {
                    VAR27 = VAR8[VAR10 + 1][VAR11].VAR32;
                    VAR29 = VAR11;
                }
            }
        }
        VAR12 += VAR4->VAR17.VAR35[VAR10];
    }
    VAR26 = 0;
    VAR21 = 0;
    for (VAR11 = 1; VAR11 < 12; VAR11++)
        if (VAR8[VAR16][VAR11].VAR32 < VAR8[VAR16][VAR21].VAR32)
            VAR21 = VAR11;
    VAR22 = VAR16;
    while (VAR22 > 0)
    {
        FUN4(VAR21 >= 0);
        VAR11 = VAR21;
        VAR24[VAR26] = VAR8[VAR22][VAR11].VAR34;
        VAR25[VAR26] = VAR11;
        VAR21 = VAR8[VAR22 - VAR8[VAR22][VAR11].VAR34 + 1][VAR11].VAR33;
        VAR22 -= VAR8[VAR22][VAR11].VAR34;
        VAR26++;
    }
    VAR12 = 0;
    for (VAR14 = VAR26 - 1; VAR14 >= 0; VAR14--)
    {
        FUN5(&VAR2->VAR46, 4, VAR25[VAR14]);
        VAR23 = VAR24[VAR14];
        memset(VAR4->VAR36 + VAR5 * 16 + VAR12, !VAR25[VAR14], VAR23);
        for (VAR15 = 0; VAR15 < VAR23; VAR15++)
        {
            VAR4->VAR43[VAR5 * 16 + VAR12] = VAR25[VAR14];
            VAR12++;
        }
        while (VAR23 >= VAR20)
        {
            FUN5(&VAR2->VAR46, VAR18, VAR20);
            VAR23 -= VAR20;
        }
        FUN5(&VAR2->VAR46, VAR18, VAR23);
    }
}