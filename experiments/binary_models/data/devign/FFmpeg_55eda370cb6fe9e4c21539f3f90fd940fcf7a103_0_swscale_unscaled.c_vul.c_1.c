static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    int VAR10, VAR11, VAR12;
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        int VAR13 = (VAR10 == 0 || VAR10 == 3) ? VAR2->VAR14 : -((-VAR2->VAR14) >> VAR2->VAR15);
        int VAR16 = (VAR10 == 0 || VAR10 == 3) ? VAR6 : -((-VAR6) >> VAR2->VAR17);
        int VAR18 = (VAR10 == 0 || VAR10 == 3) ? VAR7 : -((-VAR7) >> VAR2->VAR17);
        const VAR3 *VAR19 = VAR4[VAR10];
        VAR3 *VAR20 = VAR8[VAR10] + VAR9[VAR10] * VAR16;
        if (!VAR8[VAR10])
            continue;
        if (VAR10 == 1 && !VAR8[2])
            continue;
        if (!VAR4[VAR10] || (VAR10 == 1 && !VAR4[2]))
        {
            if (FUN2(VAR2->VAR21))
                VAR13 *= 2;
            FUN3(VAR8[VAR10], VAR9[VAR10], VAR13, VAR18, VAR16, (VAR10 == 3) ? 255 : 128);
        }
        else
        {
            if (FUN4(VAR2->VAR22))
            {
                const int VAR23 = VAR24[VAR2->VAR22].VAR25[VAR10].VAR26 + 1;
                const int VAR27 = VAR24[VAR2->VAR21].VAR25[VAR10].VAR26 + 1;
                const VAR28 *VAR29 = (const VAR28 *)VAR19;
                if (FUN2(VAR2->VAR21))
                {
                    VAR28 *VAR30 = (VAR28 *)VAR20;
                    for (VAR11 = 0; VAR11 < VAR18; VAR11++)
                    {
                        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
                        {
                            int VAR31 = FUN5(&VAR29[VAR12]);
                            FUN6(&VAR30[VAR12], (VAR31 << (16 - VAR23)) | (VAR31 >> (2 * VAR23 - 16)));
                        }
                        VAR30 += VAR9[VAR10] / 2;
                        VAR29 += VAR5[VAR10] / 2;
                    }
                    if (FUN7(VAR2->VAR21))
                    {
                        if (FUN7(VAR2->VAR22))
                        {
                            FUN8(VAR32, VAR33);
                        }
                        else
                        {
                            FUN8(VAR34, VAR33);
                        }
                    }
                    else
                    {
                        if (FUN7(VAR2->VAR22))
                        {
                            FUN8(VAR32, VAR35);
                        }
                        else
                        {
                            FUN8(VAR34, VAR35);
                        }
                    }
                }
                else if (FUN4(VAR2->VAR21))
                {
                    VAR28 *VAR30 = (VAR28 *)VAR20;
                    for (VAR11 = 0; VAR11 < VAR18; VAR11++)
                    {
                        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
                        {
                            VAR36;
                        }
                        VAR30 += VAR9[VAR10] / 2;
                        VAR29 += VAR5[VAR10] / 2;
                    }
                    if (VAR27 > VAR23)
                    {
                        FUN9(int VAR31 = FUN5(&VAR29[VAR12]); FUN6(&VAR30[VAR12], (VAR31 << 1) | (VAR31 >> 9)));
                    }
                    else if (VAR27 < VAR23)
                    {
                        FUN10(VAR30, VAR9[VAR10] / 2, VAR37, VAR29, VAR5[VAR10] / 2, VAR38, VAR39, 1);
                    }
                    else
                    {
                        FUN9(FUN6(&VAR30[VAR12], FUN5(&VAR29[VAR12])));
                    }
                    if (FUN7(VAR2->VAR21))
                    {
                        if (FUN7(VAR2->VAR22))
                        {
                            FUN11(VAR32, VAR33);
                        }
                        else
                        {
                            FUN11(VAR34, VAR33);
                        }
                    }
                    else
                    {
                        if (FUN7(VAR2->VAR22))
                        {
                            FUN11(VAR32, VAR35);
                        }
                        else
                        {
                            FUN11(VAR34, VAR35);
                        }
                    }
                }
                else
                {
                    if (VAR23 == 9)
                    {
                        FUN10(VAR20, VAR9[VAR10], VAR40, VAR29, VAR5[VAR10] / 2, VAR38, VAR39, 1);
                    }
                    else
                    {
                        FUN10(VAR20, VAR9[VAR10], VAR40, VAR29, VAR5[VAR10] / 2, VAR38, VAR41, 2);
                    }
                    if (FUN7(VAR2->VAR22))
                    {
                        FUN12(VAR32);
                    }
                    else
                    {
                        FUN12(VAR34);
                    }
                }
            }
            else if (FUN4(VAR2->VAR21))
            {
                const int VAR27 = VAR24[VAR2->VAR21].VAR25[VAR10].VAR26 + 1;
                VAR28 *VAR30 = (VAR28 *)VAR20;
                if (FUN2(VAR2->VAR22))
                {
                    const VAR28 *VAR29 = (const VAR28 *)VAR19;
                    if (VAR27 == 9)
                    {
                        FUN10(VAR30, VAR9[VAR10] / 2, VAR37, VAR29, VAR5[VAR10] / 2, VAR38, VAR42, 7);
                    }
                    else
                    {
                        FUN10(VAR30, VAR9[VAR10] / 2, VAR37, VAR29, VAR5[VAR10] / 2, VAR38, VAR43, 6);
                    }
                    if (FUN7(VAR2->VAR21))
                    {
                        if (FUN7(VAR2->VAR22))
                        {
                            FUN13(VAR32, VAR33);
                        }
                        else
                        {
                            FUN13(VAR34, VAR33);
                        }
                    }
                    else
                    {
                        if (FUN7(VAR2->VAR22))
                        {
                            FUN13(VAR32, VAR35);
                        }
                        else
                        {
                            FUN13(VAR34, VAR35);
                        }
                    }
                }
                else
                {
                    for (VAR11 = 0; VAR11 < VAR18; VAR11++)
                    {
                        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
                        {
                            const int VAR31 = VAR19[VAR12];
                            FUN6(&VAR30[VAR12], (VAR31 << (VAR27 - 8)) | (VAR31 >> (16 - VAR27)));
                        }
                        VAR30 += VAR9[VAR10] / 2;
                        VAR19 += VAR5[VAR10];
                    }
                    if (FUN7(VAR2->VAR21))
                    {
                        FUN14(VAR33);
                    }
                    else
                    {
                        FUN14(VAR35);
                    }
                }
            }
            else if (FUN2(VAR2->VAR22) && !FUN2(VAR2->VAR21))
            {
                const VAR28 *VAR29 = (const VAR28 *)VAR19;
                FUN10(VAR20, VAR9[VAR10], VAR40, VAR29, VAR5[VAR10] / 2, VAR38, VAR44, 8);
                if (FUN7(VAR2->VAR22))
                {
                    FUN15(VAR32);
                }
                else
                {
                    FUN15(VAR34);
                }
            }
            else if (!FUN2(VAR2->VAR22) && FUN2(VAR2->VAR21))
            {
                for (VAR11 = 0; VAR11 < VAR18; VAR11++)
                {
                    for (VAR12 = 0; VAR12 < VAR13; VAR12++)
                    {
                        VAR20[VAR12 << 1] = VAR19[VAR12];
                        VAR20[(VAR12 << 1) + 1] = VAR19[VAR12];
                    }
                    VAR19 += VAR5[VAR10];
                    VAR20 += VAR9[VAR10];
                }
            }
            else if (FUN2(VAR2->VAR22) && FUN2(VAR2->VAR21) && FUN7(VAR2->VAR22) != FUN7(VAR2->VAR21))
            {
                for (VAR11 = 0; VAR11 < VAR18; VAR11++)
                {
                    for (VAR12 = 0; VAR12 < VAR13; VAR12++)
                        ((VAR28 *)VAR20)[VAR12] = FUN16(((const VAR28 *)VAR19)[VAR12]);
                    VAR19 += VAR5[VAR10];
                    VAR20 += VAR9[VAR10];
                }
            }
            else if (VAR9[VAR10] == VAR5[VAR10] && VAR5[VAR10] > 0 && VAR5[VAR10] == VAR13)
            {
                memcpy(VAR8[VAR10] + VAR9[VAR10] * VAR16, VAR4[VAR10], VAR18 * VAR9[VAR10]);
            }
            else
            {
                if (FUN2(VAR2->VAR22) && FUN2(VAR2->VAR21))
                    VAR13 *= 2;
                for (VAR11 = 0; VAR11 < VAR18; VAR11++)
                {
                    memcpy(VAR20, VAR19, VAR13);
                    VAR19 += VAR5[VAR10];
                    VAR20 += VAR9[VAR10];
                }
            }
        }
    }
    return VAR7;
}