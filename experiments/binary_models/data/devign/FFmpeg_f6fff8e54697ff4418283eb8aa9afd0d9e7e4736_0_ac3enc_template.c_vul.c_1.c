static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR3, VAR4, [VAR5], [VAR6][16]);
    FUN2(VAR7, VAR8, [VAR5], [VAR6][16]);
    FUN3(*VAR8)[VAR6][16] = VAR4;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    CoefSumType VAR14[VAR5][VAR6][16] = {{{0}}};
    int VAR15, VAR16;
    memset(VAR4, 0, VAR5 * sizeof(*VAR4));
    memset(VAR8, 0, VAR5 * sizeof(*VAR4));
    VAR15 = VAR2->VAR17[VAR18] - 1;
    VAR16 = FUN4(VAR2->VAR19 * 12 + 1, 32);
    VAR15 = FUN5(256, VAR15 + VAR16) - VAR16;
    for (VAR9 = 0; VAR9 < VAR2->VAR20; VAR9++)
    {
        VAR21 *VAR22 = &VAR2->VAR23[VAR9];
        VAR3 *VAR24 = &VAR22->VAR25[VAR18][VAR15];
        if (!VAR22->VAR26)
            continue;
        memset(VAR24, 0, VAR16 * sizeof(*VAR24));
        for (VAR10 = 1; VAR10 <= VAR2->VAR27; VAR10++)
        {
            VAR3 *VAR28 = &VAR22->VAR25[VAR10][VAR15];
            if (!VAR22->VAR29[VAR10])
                continue;
            for (VAR12 = 0; VAR12 < VAR16; VAR12++)
                VAR24[VAR12] += VAR28[VAR12];
        }
        FUN6(&VAR2->VAR30, VAR24, VAR16);
    }
    VAR11 = 0;
    VAR12 = VAR2->VAR17[VAR18];
    while (VAR12 < VAR2->VAR31)
    {
        int VAR32 = VAR2->VAR33[VAR11];
        for (VAR10 = VAR18; VAR10 <= VAR2->VAR27; VAR10++)
        {
            for (VAR9 = 0; VAR9 < VAR2->VAR20; VAR9++)
            {
                VAR21 *VAR22 = &VAR2->VAR23[VAR9];
                if (!VAR22->VAR26 || (VAR10 > VAR18 && !VAR22->VAR29[VAR10]))
                    continue;
                for (VAR13 = 0; VAR13 < VAR32; VAR13++)
                {
                    CoefType VAR34 = VAR22->VAR25[VAR10][VAR12 + VAR13];
                    FUN7(VAR14[VAR9][VAR10][VAR11], VAR34, VAR34);
                }
            }
        }
        VAR12 += VAR32;
        VAR11++;
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR20; VAR9++)
    {
        VAR21 *VAR22 = &VAR2->VAR23[VAR9];
        if (!VAR22->VAR26)
            continue;
        for (VAR10 = 1; VAR10 <= VAR2->VAR27; VAR10++)
        {
            if (!VAR22->VAR29[VAR10])
                continue;
            for (VAR11 = 0; VAR11 < VAR2->VAR35; VAR11++)
            {
                VAR4[VAR9][VAR10][VAR11] = FUN8(VAR14[VAR9][VAR10][VAR11], VAR14[VAR9][VAR18][VAR11]);
            }
        }
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR20; VAR9++)
    {
        VAR21 *VAR22 = &VAR2->VAR23[VAR9];
        VAR21 *VAR36 = VAR9 ? &VAR2->VAR23[VAR9 - 1] : NULL;
        memset(VAR22->VAR37, 0, sizeof(VAR22->VAR37));
        if (VAR22->VAR26)
        {
            if (VAR9 == 0 || !VAR36->VAR26)
            {
                for (VAR10 = 1; VAR10 <= VAR2->VAR27; VAR10++)
                    VAR22->VAR37[VAR10] = 1;
            }
            else
            {
                for (VAR10 = 1; VAR10 <= VAR2->VAR27; VAR10++)
                {
                    if (!VAR22->VAR29[VAR10])
                        continue;
                    if (!VAR36->VAR29[VAR10])
                    {
                        VAR22->VAR37[VAR10] = 1;
                    }
                    else
                    {
                        CoefSumType VAR38 = 0;
                        for (VAR11 = 0; VAR11 < VAR2->VAR35; VAR11++)
                        {
                            VAR38 += FUN9(VAR4[VAR9 - 1][VAR10][VAR11] - VAR4[VAR9][VAR10][VAR11]);
                        }
                        VAR38 /= VAR2->VAR35;
                        if (VAR38 > VAR39)
                            VAR22->VAR37[VAR10] = 1;
                    }
                }
            }
        }
    }
    for (VAR11 = 0; VAR11 < VAR2->VAR35; VAR11++)
    {
        VAR9 = 0;
        while (VAR9 < VAR2->VAR20)
        {
            int FUN10(VAR40);
            VAR21 *VAR22 = &VAR2->VAR23[VAR9];
            if (!VAR22->VAR26)
            {
                VAR9++;
                continue;
            }
            for (VAR10 = 1; VAR10 <= VAR2->VAR27; VAR10++)
            {
                CoefSumType VAR41, VAR42;
                if (!VAR22->VAR29[VAR10])
                    continue;
                VAR42 = VAR14[VAR9][VAR18][VAR11];
                VAR41 = VAR14[VAR9][VAR10][VAR11];
                VAR40 = VAR9 + 1;
                while (!VAR2->VAR23[VAR40].VAR37[VAR10] && VAR40 < VAR2->VAR20)
                {
                    if (VAR2->VAR23[VAR40].VAR26)
                    {
                        VAR42 += VAR14[VAR40][VAR18][VAR11];
                        VAR41 += VAR14[VAR40][VAR10][VAR11];
                    }
                    VAR40++;
                }
                VAR4[VAR9][VAR10][VAR11] = FUN8(VAR41, VAR42);
            }
            VAR9 = VAR40;
        }
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR20; VAR9++)
    {
        VAR21 *VAR22 = &VAR2->VAR23[VAR9];
        if (!VAR22->VAR26)
            continue;
        VAR2->VAR43.FUN11(VAR8[VAR9][1], VAR4[VAR9][1], VAR2->VAR27 * 16);
        VAR2->VAR43.FUN12(VAR22->VAR44[1], VAR8[VAR9][1], VAR2->VAR27 * 16);
        for (VAR10 = 1; VAR10 <= VAR2->VAR27; VAR10++)
        {
            int VAR11, VAR45, VAR46, VAR47;
            if (!VAR22->VAR37[VAR10])
                continue;
            VAR45 = VAR46 = VAR22->VAR44[VAR10][0];
            for (VAR11 = 1; VAR11 < VAR2->VAR35; VAR11++)
            {
                int VAR48 = VAR22->VAR44[VAR10][VAR11];
                VAR45 = FUN5(VAR48, VAR45);
                VAR46 = FUN13(VAR48, VAR46);
            }
            VAR47 = ((VAR46 - 15) + 2) / 3;
            VAR47 = FUN13(VAR47, 0);
            while (VAR45 < VAR47 * 3)
                VAR47--;
            for (VAR11 = 0; VAR11 < VAR2->VAR35; VAR11++)
            {
                VAR22->VAR44[VAR10][VAR11] = FUN14(VAR22->VAR44[VAR10][VAR11] - VAR47 * 3, 0, 15);
            }
            VAR22->VAR49[VAR10] = VAR47;
            for (VAR11 = 0; VAR11 < VAR2->VAR35; VAR11++)
            {
                int VAR50 = VAR22->VAR44[VAR10][VAR11];
                int VAR51 = (VAR8[VAR9][VAR10][VAR11] << (5 + VAR50 + VAR47 * 3)) >> 24;
                if (VAR50 == 15)
                    VAR51 >>= 1;
                else
                    VAR51 -= 16;
                VAR22->VAR52[VAR10][VAR11] = VAR51;
            }
        }
    }
    if (VAR53 && VAR2->VAR54)
        FUN15(VAR2);
}