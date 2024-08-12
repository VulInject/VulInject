static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, const VAR6 *VAR7, const VAR8 *VAR9)
{
    int VAR10, VAR11, VAR12;
    VAR6 *VAR13[VAR14];
    const VAR6 *VAR15[VAR14];
    int VAR16[VAR14];
    GetBitContext VAR17;
    int VAR18 = 1 + (VAR2->VAR19 > 8);
    if (VAR7)
        FUN2(&VAR17, VAR7, VAR2->VAR20 * VAR2->VAR21);
    VAR2->VAR22 = 0;
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        int VAR23 = VAR2->VAR24[VAR10];
        VAR13[VAR23] = VAR2->VAR25->VAR13[VAR23];
        VAR15[VAR23] = VAR9 ? VAR9->VAR13[VAR23] : NULL;
        VAR16[VAR23] = VAR2->VAR16[VAR23];
        VAR2->VAR26[VAR23] |= 1;
    }
    for (VAR12 = 0; VAR12 < VAR2->VAR21; VAR12++)
    {
        for (VAR11 = 0; VAR11 < VAR2->VAR20; VAR11++)
        {
            const int VAR27 = VAR7 && !FUN3(&VAR17);
            if (VAR2->VAR28 && !VAR2->VAR22)
                VAR2->VAR22 = VAR2->VAR28;
            if (FUN4(&VAR2->VAR29) < 0)
            {
                FUN5(VAR2->VAR30, VAR31, "", -FUN4(&VAR2->VAR29));
                return VAR32;
            }
            for (VAR10 = 0; VAR10 < VAR3; VAR10++)
            {
                VAR6 *VAR33;
                int VAR34, VAR35, VAR36, VAR37, VAR38, VAR23, VAR39;
                int VAR40;
                VAR34 = VAR2->VAR41[VAR10];
                VAR23 = VAR2->VAR24[VAR10];
                VAR35 = VAR2->VAR42[VAR10];
                VAR36 = VAR2->VAR43[VAR10];
                VAR37 = 0;
                VAR38 = 0;
                for (VAR39 = 0; VAR39 < VAR34; VAR39++)
                {
                    VAR40 = (((VAR16[VAR23] * (VAR36 * VAR12 + VAR38) * 8) + (VAR35 * VAR11 + VAR37) * 8 * VAR18) >> VAR2->VAR30->VAR44);
                    if (VAR2->VAR45 && VAR2->VAR46)
                        VAR40 += VAR16[VAR23] >> 1;
                    VAR33 = VAR13[VAR23] + VAR40;
                    if (!VAR2->VAR47)
                    {
                        if (VAR27)
                            FUN6(VAR2, VAR33, VAR15[VAR23] + VAR40, VAR16[VAR23], VAR2->VAR30->VAR44);
                        else
                        {
                            VAR2->VAR48.FUN7(VAR2->VAR49);
                            if (FUN8(VAR2, VAR2->VAR49, VAR10, VAR2->VAR50[VAR10], VAR2->VAR51[VAR10], VAR2->VAR52[VAR2->VAR53[VAR10]]) < 0)
                            {
                                FUN5(VAR2->VAR30, VAR31, "", VAR12, VAR11);
                                return VAR32;
                            }
                            VAR2->VAR48.FUN9(VAR33, VAR16[VAR23], VAR2->VAR49);
                            if (VAR2->VAR19 & 7)
                                FUN10(VAR2, VAR33, VAR16[VAR23]);
                        }
                    }
                    else
                    {
                        int VAR54 = VAR2->VAR55[VAR23] * (VAR36 * VAR12 + VAR38) + (VAR35 * VAR11 + VAR37);
                        VAR56 *VAR49 = VAR2->VAR57[VAR23][VAR54];
                        if (VAR4)
                            VAR49[0] += FUN3(&VAR2->VAR29) * VAR2->VAR52[VAR2->VAR53[VAR10]][0] << VAR5;
                        else if (FUN11(VAR2, VAR49, VAR10, VAR2->VAR50[VAR10], VAR2->VAR52[VAR2->VAR53[VAR10]], VAR5) < 0)
                        {
                            FUN5(VAR2->VAR30, VAR31, "", VAR12, VAR11);
                            return VAR32;
                        }
                    }
                    FUN12(VAR2->VAR30, "", VAR12, VAR11);
                    FUN12(VAR2->VAR30, "", VAR11, VAR12, VAR37, VAR38, VAR23, VAR2->VAR46, (VAR36 * VAR12 + VAR38) * 8, (VAR35 * VAR11 + VAR37) * 8);
                    if (++VAR37 == VAR35)
                    {
                        VAR37 = 0;
                        VAR38++;
                    }
                }
            }
            FUN13(VAR2, VAR3);
        }
    }
    return 0;
}