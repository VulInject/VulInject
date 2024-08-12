static void FUN1(VAR1 *VAR2)
{
    static const uint8_t VAR3[2][VAR4] = {
        {0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4},
        {1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4},
    };
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR9;
    int VAR10 = VAR6->VAR10, VAR11 = VAR6->VAR11;
    VAR12 *VAR13 = &VAR6->VAR14[VAR6->VAR15[VAR9->VAR16[0]]];
    VAR17 *VAR18 = VAR13->VAR19;
    VAR12 *VAR20 = VAR9->VAR21 ? &VAR6->VAR14[VAR6->VAR15[VAR9->VAR16[1]]] : NULL;
    VAR17 *VAR22 = VAR9->VAR21 ? VAR20->VAR19 : NULL;
    int VAR23 = VAR2->VAR24, VAR25 = VAR2->VAR26;
    ptrdiff_t VAR27 = VAR6->VAR28, VAR29 = VAR6->VAR30;
    if (VAR9->VAR31 > VAR32)
    {
        if (VAR9->VAR31 == VAR33)
        {
            FUN2(VAR6, VAR6->VAR34.VAR35[3][VAR9->VAR36][0], VAR6->VAR37[0], VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, VAR10 << 3, VAR11 << 3, &VAR9->VAR40[0][0], 8, 4, VAR23, VAR25);
            FUN2(VAR6, VAR6->VAR34.VAR35[3][VAR9->VAR36][0], VAR6->VAR37[0] + 4 * VAR27, VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, (VAR10 << 3) + 4, VAR11 << 3, &VAR9->VAR40[2][0], 8, 4, VAR23, VAR25);
            if (VAR9->VAR21)
            {
                FUN2(VAR6, VAR6->VAR34.VAR35[3][VAR9->VAR36][1], VAR6->VAR37[0], VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, VAR10 << 3, VAR11 << 3, &VAR9->VAR40[0][1], 8, 4, VAR23, VAR25);
                FUN2(VAR6, VAR6->VAR34.VAR35[3][VAR9->VAR36][1], VAR6->VAR37[0] + 4 * VAR27, VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, (VAR10 << 3) + 4, VAR11 << 3, &VAR9->VAR40[2][1], 8, 4, VAR23, VAR25);
            }
        }
        else if (VAR9->VAR31 == VAR41)
        {
            FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][0], VAR6->VAR37[0], VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, VAR10 << 3, VAR11 << 3, &VAR9->VAR40[0][0], 4, 8, VAR23, VAR25);
            FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][0], VAR6->VAR37[0] + 4, VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, VAR10 << 3, (VAR11 << 3) + 4, &VAR9->VAR40[1][0], 4, 8, VAR23, VAR25);
            if (VAR9->VAR21)
            {
                FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][1], VAR6->VAR37[0], VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, VAR10 << 3, VAR11 << 3, &VAR9->VAR40[0][1], 4, 8, VAR23, VAR25);
                FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][1], VAR6->VAR37[0] + 4, VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, VAR10 << 3, (VAR11 << 3) + 4, &VAR9->VAR40[1][1], 4, 8, VAR23, VAR25);
            }
        }
        else
        {
            FUN3(VAR9->VAR31 == VAR42);
            FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][0], VAR6->VAR37[0], VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, VAR10 << 3, VAR11 << 3, &VAR9->VAR40[0][0], 4, 4, VAR23, VAR25);
            FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][0], VAR6->VAR37[0] + 4, VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, VAR10 << 3, (VAR11 << 3) + 4, &VAR9->VAR40[1][0], 4, 4, VAR23, VAR25);
            FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][0], VAR6->VAR37[0] + 4 * VAR27, VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, (VAR10 << 3) + 4, VAR11 << 3, &VAR9->VAR40[2][0], 4, 4, VAR23, VAR25);
            FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][0], VAR6->VAR37[0] + 4 * VAR27 + 4, VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, (VAR10 << 3) + 4, (VAR11 << 3) + 4, &VAR9->VAR40[3][0], 4, 4, VAR23, VAR25);
            if (VAR9->VAR21)
            {
                FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][1], VAR6->VAR37[0], VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, VAR10 << 3, VAR11 << 3, &VAR9->VAR40[0][1], 4, 4, VAR23, VAR25);
                FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][1], VAR6->VAR37[0] + 4, VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, VAR10 << 3, (VAR11 << 3) + 4, &VAR9->VAR40[1][1], 4, 4, VAR23, VAR25);
                FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][1], VAR6->VAR37[0] + 4 * VAR27, VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, (VAR10 << 3) + 4, VAR11 << 3, &VAR9->VAR40[2][1], 4, 4, VAR23, VAR25);
                FUN2(VAR6, VAR6->VAR34.VAR35[4][VAR9->VAR36][1], VAR6->VAR37[0] + 4 * VAR27 + 4, VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, (VAR10 << 3) + 4, (VAR11 << 3) + 4, &VAR9->VAR40[3][1], 4, 4, VAR23, VAR25);
            }
        }
    }
    else
    {
        int VAR43 = VAR3[0][VAR9->VAR31];
        int VAR44 = VAR45[0][VAR9->VAR31][0] * 4, VAR46 = VAR45[0][VAR9->VAR31][1] * 4;
        FUN2(VAR6, VAR6->VAR34.VAR35[VAR43][VAR9->VAR36][0], VAR6->VAR37[0], VAR27, VAR18->VAR38[0], VAR18->VAR39[0], VAR13, VAR10 << 3, VAR11 << 3, &VAR9->VAR40[0][0], VAR44, VAR46, VAR23, VAR25);
        if (VAR9->VAR21)
            FUN2(VAR6, VAR6->VAR34.VAR35[VAR43][VAR9->VAR36][1], VAR6->VAR37[0], VAR27, VAR22->VAR38[0], VAR22->VAR39[0], VAR20, VAR10 << 3, VAR11 << 3, &VAR9->VAR40[0][1], VAR44, VAR46, VAR23, VAR25);
    }
    {
        int VAR43 = VAR3[1][VAR9->VAR31];
        int VAR44 = VAR45[1][VAR9->VAR31][0] * 4, VAR46 = VAR45[1][VAR9->VAR31][1] * 4;
        VP56mv VAR47;
        VAR23 = (VAR23 + 1) >> 1;
        VAR25 = (VAR25 + 1) >> 1;
        if (VAR9->VAR31 > VAR32)
        {
            VAR47.VAR48 = FUN4(VAR9->VAR40[0][0].VAR48 + VAR9->VAR40[1][0].VAR48 + VAR9->VAR40[2][0].VAR48 + VAR9->VAR40[3][0].VAR48, 4);
            VAR47.VAR49 = FUN4(VAR9->VAR40[0][0].VAR49 + VAR9->VAR40[1][0].VAR49 + VAR9->VAR40[2][0].VAR49 + VAR9->VAR40[3][0].VAR49, 4);
        }
        else
        {
            VAR47 = VAR9->VAR40[0][0];
        }
        FUN5(VAR6, VAR6->VAR34.VAR35[VAR43][VAR9->VAR36][0], VAR6->VAR37[1], VAR6->VAR37[2], VAR29, VAR18->VAR38[1], VAR18->VAR39[1], VAR18->VAR38[2], VAR18->VAR39[2], VAR13, VAR10 << 2, VAR11 << 2, &VAR47, VAR44, VAR46, VAR23, VAR25);
        if (VAR9->VAR21)
        {
            if (VAR9->VAR31 > VAR32)
            {
                VAR47.VAR48 = FUN4(VAR9->VAR40[0][1].VAR48 + VAR9->VAR40[1][1].VAR48 + VAR9->VAR40[2][1].VAR48 + VAR9->VAR40[3][1].VAR48, 4);
                VAR47.VAR49 = FUN4(VAR9->VAR40[0][1].VAR49 + VAR9->VAR40[1][1].VAR49 + VAR9->VAR40[2][1].VAR49 + VAR9->VAR40[3][1].VAR49, 4);
            }
            else
            {
                VAR47 = VAR9->VAR40[0][1];
            }
            FUN5(VAR6, VAR6->VAR34.VAR35[VAR43][VAR9->VAR36][1], VAR6->VAR37[1], VAR6->VAR37[2], VAR29, VAR22->VAR38[1], VAR22->VAR39[1], VAR22->VAR38[2], VAR22->VAR39[2], VAR20, VAR10 << 2, VAR11 << 2, &VAR47, VAR44, VAR46, VAR23, VAR25);
        }
    }
    if (!VAR9->VAR50)
    {
        int VAR51 = VAR45[1][VAR9->VAR31][0] << 1, VAR52 = 1 << VAR9->VAR53, VAR54;
        int VAR55 = VAR45[1][VAR9->VAR31][1] << 1, VAR48, VAR49, VAR56 = 1 << (VAR9->VAR53 * 2);
        int VAR57 = FUN6(2 * (VAR6->VAR58 - VAR11), VAR51);
        int VAR59 = FUN6(2 * (VAR6->VAR60 - VAR10), VAR55);
        int VAR53 = 4 * VAR6->VAR61 + VAR9->VAR53, VAR62 = VAR9->VAR62 + 4 * VAR6->VAR61;
        int VAR63 = 1 << VAR9->VAR62, VAR64;
        VAR65 *VAR37 = VAR6->VAR37[0];
        for (VAR54 = 0, VAR49 = 0; VAR49 < VAR59; VAR49 += VAR52)
        {
            VAR65 *VAR66 = VAR37;
            for (VAR48 = 0; VAR48 < VAR57; VAR48 += VAR52, VAR66 += 4 * VAR52, VAR54 += VAR56)
            {
                int VAR67 = VAR9->VAR53 > VAR68 ? FUN7(&VAR6->VAR67[VAR54]) : VAR6->VAR67[VAR54];
                if (VAR67)
                    VAR6->VAR34.VAR69[VAR53][VAR70](VAR66, VAR6->VAR28, VAR6->VAR71 + 16 * VAR54, VAR67);
            }
            VAR37 += 4 * VAR6->VAR28 * VAR52;
        }
        VAR55 >>= 1;
        VAR51 >>= 1;
        VAR57 >>= 1;
        VAR59 >>= 1;
        VAR56 = 1 << (VAR9->VAR62 * 2);
        for (VAR64 = 0; VAR64 < 2; VAR64++)
        {
            VAR37 = VAR6->VAR37[VAR64 + 1];
            for (VAR54 = 0, VAR49 = 0; VAR49 < VAR59; VAR49 += VAR63)
            {
                VAR65 *VAR66 = VAR37;
                for (VAR48 = 0; VAR48 < VAR57; VAR48 += VAR63, VAR66 += 4 * VAR63, VAR54 += VAR56)
                {
                    int VAR67 = VAR9->VAR62 > VAR68 ? FUN7(&VAR6->VAR72[VAR64][VAR54]) : VAR6->VAR72[VAR64][VAR54];
                    if (VAR67)
                        VAR6->VAR34.VAR69[VAR62][VAR70](VAR66, VAR6->VAR30, VAR6->VAR73[VAR64] + 16 * VAR54, VAR67);
                }
                VAR37 += 4 * VAR63 * VAR6->VAR30;
            }
        }
    }
}