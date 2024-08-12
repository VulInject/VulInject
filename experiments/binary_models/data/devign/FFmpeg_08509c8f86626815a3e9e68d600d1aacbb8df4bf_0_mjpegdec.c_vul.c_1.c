static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, const VAR6 *VAR7, int VAR8, const VAR9 *VAR10)
{
    int VAR11, VAR12, VAR13;
    VAR6 *VAR14[VAR15];
    const VAR6 *VAR16[VAR15];
    int VAR17[VAR15];
    GetBitContext VAR18 = {0};
    int VAR19 = 1 + (VAR2->VAR20 > 8);
    if (VAR7)
    {
        if (VAR8 != (VAR2->VAR21 * VAR2->VAR22 + 7) >> 3)
        {
            FUN2(VAR2->VAR23, VAR24, "");
            return VAR25;
        }
        FUN3(&VAR18, VAR7, VAR2->VAR21 * VAR2->VAR22);
    }
    VAR2->VAR26 = 0;
    for (VAR11 = 0; VAR11 < VAR3; VAR11++)
    {
        int VAR27 = VAR2->VAR28[VAR11];
        VAR14[VAR27] = VAR2->VAR29->VAR14[VAR27];
        VAR16[VAR27] = VAR10 ? VAR10->VAR14[VAR27] : NULL;
        VAR17[VAR27] = VAR2->VAR17[VAR27];
        VAR2->VAR30[VAR27] |= 1;
    }
    for (VAR13 = 0; VAR13 < VAR2->VAR22; VAR13++)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR21; VAR12++)
        {
            const int VAR31 = VAR7 && !FUN4(&VAR18);
            if (VAR2->VAR32 && !VAR2->VAR26)
                VAR2->VAR26 = VAR2->VAR32;
            if (FUN5(&VAR2->VAR33) < 0)
            {
                FUN2(VAR2->VAR23, VAR24, "", -FUN5(&VAR2->VAR33));
                return VAR25;
            }
            for (VAR11 = 0; VAR11 < VAR3; VAR11++)
            {
                VAR6 *VAR34;
                int VAR35, VAR36, VAR37, VAR38, VAR39, VAR27, VAR40;
                int VAR41;
                VAR35 = VAR2->VAR42[VAR11];
                VAR27 = VAR2->VAR28[VAR11];
                VAR36 = VAR2->VAR43[VAR11];
                VAR37 = VAR2->VAR44[VAR11];
                VAR38 = 0;
                VAR39 = 0;
                for (VAR40 = 0; VAR40 < VAR35; VAR40++)
                {
                    VAR41 = (((VAR17[VAR27] * (VAR37 * VAR13 + VAR39) * 8) + (VAR36 * VAR12 + VAR38) * 8 * VAR19) >> VAR2->VAR23->VAR45);
                    if (VAR2->VAR46 && VAR2->VAR47)
                        VAR41 += VAR17[VAR27] >> 1;
                    VAR34 = VAR14[VAR27] + VAR41;
                    if (!VAR2->VAR48)
                    {
                        if (VAR31)
                            FUN6(VAR2, VAR34, VAR16[VAR27] + VAR41, VAR17[VAR27], VAR2->VAR23->VAR45);
                        else
                        {
                            VAR2->VAR49.FUN7(VAR2->VAR50);
                            if (FUN8(VAR2, VAR2->VAR50, VAR11, VAR2->VAR51[VAR11], VAR2->VAR52[VAR11], VAR2->VAR53[VAR2->VAR54[VAR11]]) < 0)
                            {
                                FUN2(VAR2->VAR23, VAR24, "", VAR13, VAR12);
                                return VAR25;
                            }
                            VAR2->VAR55.FUN9(VAR34, VAR17[VAR27], VAR2->VAR50);
                            if (VAR2->VAR20 & 7)
                                FUN10(VAR2, VAR34, VAR17[VAR27]);
                        }
                    }
                    else
                    {
                        int VAR56 = VAR2->VAR57[VAR27] * (VAR37 * VAR13 + VAR39) + (VAR36 * VAR12 + VAR38);
                        VAR58 *VAR50 = VAR2->VAR59[VAR27][VAR56];
                        if (VAR4)
                            VAR50[0] += FUN4(&VAR2->VAR33) * VAR2->VAR53[VAR2->VAR54[VAR11]][0] << VAR5;
                        else if (FUN11(VAR2, VAR50, VAR11, VAR2->VAR51[VAR11], VAR2->VAR53[VAR2->VAR54[VAR11]], VAR5) < 0)
                        {
                            FUN2(VAR2->VAR23, VAR24, "", VAR13, VAR12);
                            return VAR25;
                        }
                    }
                    FUN12(VAR2->VAR23, "", VAR13, VAR12);
                    FUN12(VAR2->VAR23, "", VAR12, VAR13, VAR38, VAR39, VAR27, VAR2->VAR47, (VAR37 * VAR13 + VAR39) * 8, (VAR36 * VAR12 + VAR38) * 8);
                    if (++VAR38 == VAR36)
                    {
                        VAR38 = 0;
                        VAR39++;
                    }
                }
            }
            FUN13(VAR2, VAR3);
        }
    }
    return 0;
}