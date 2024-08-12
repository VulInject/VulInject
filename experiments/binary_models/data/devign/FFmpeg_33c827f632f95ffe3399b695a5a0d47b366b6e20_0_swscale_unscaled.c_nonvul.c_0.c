static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    const VAR10 *VAR11 = FUN2(VAR2->VAR12);
    const VAR10 *VAR13 = FUN2(VAR2->VAR14);
    int VAR15, VAR16, VAR17;
    for (VAR15 = 0; VAR15 < 4; VAR15++)
    {
        int VAR18 = (VAR15 == 0 || VAR15 == 3) ? VAR2->VAR19 : -((-VAR2->VAR19) >> VAR2->VAR20);
        int VAR21 = (VAR15 == 0 || VAR15 == 3) ? VAR6 : -((-VAR6) >> VAR2->VAR22);
        int VAR23 = (VAR15 == 0 || VAR15 == 3) ? VAR7 : -((-VAR7) >> VAR2->VAR22);
        const VAR3 *VAR24 = VAR4[VAR15];
        VAR3 *VAR25 = VAR8[VAR15] + VAR9[VAR15] * VAR21;
        int VAR26 = VAR15 == 1 || VAR15 == 2 || (!VAR2->VAR27 && VAR15 == 0);
        if (!VAR8[VAR15])
            continue;
        if (VAR15 == 1 && !VAR8[2])
            continue;
        if (!VAR4[VAR15] || (VAR15 == 1 && !VAR4[2]))
        {
            int VAR28 = (VAR15 == 3) ? 255 : 128;
            if (FUN3(VAR2->VAR14))
                VAR18 *= 2;
            if (FUN4(VAR2->VAR14))
            {
                FUN5(VAR8[VAR15], VAR9[VAR15], VAR18, VAR23, VAR21, VAR28, VAR13->VAR29[VAR15].VAR30 + 1, FUN6(VAR2->VAR14));
            }
            else
                FUN7(VAR8[VAR15], VAR9[VAR15], VAR18, VAR23, VAR21, VAR28);
        }
        else
        {
            if (FUN4(VAR2->VAR12))
            {
                const int VAR31 = VAR11->VAR29[VAR15].VAR30 + 1;
                const int VAR32 = VAR13->VAR29[VAR15].VAR30 + 1;
                const VAR33 *VAR34 = (const VAR33 *)VAR24;
                if (FUN3(VAR2->VAR14))
                {
                    VAR33 *VAR35 = (VAR33 *)VAR25;
                    if (VAR26)
                    {
                        for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                        {
                            for (VAR17 = 0; VAR17 < VAR18; VAR17++)
                            {
                                int VAR36 = FUN8(&VAR34[VAR17]);
                                FUN9(&VAR35[VAR17], VAR36 << (16 - VAR31));
                            }
                            VAR35 += VAR9[VAR15] / 2;
                            VAR34 += VAR5[VAR15] / 2;
                        }
                    }
                    else
                    {
                        for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                        {
                            for (VAR17 = 0; VAR17 < VAR18; VAR17++)
                            {
                                int VAR36 = FUN8(&VAR34[VAR17]);
                                FUN9(&VAR35[VAR17], (VAR36 << (16 - VAR31)) | (VAR36 >> (2 * VAR31 - 16)));
                            }
                            VAR35 += VAR9[VAR15] / 2;
                            VAR34 += VAR5[VAR15] / 2;
                        }
                    }
                    if (FUN6(VAR2->VAR14))
                    {
                        if (FUN6(VAR2->VAR12))
                        {
                            FUN10(VAR37, VAR38);
                        }
                        else
                        {
                            FUN10(VAR39, VAR38);
                        }
                    }
                    else
                    {
                        if (FUN6(VAR2->VAR12))
                        {
                            FUN10(VAR37, VAR40);
                        }
                        else
                        {
                            FUN10(VAR39, VAR40);
                        }
                    }
                }
                else if (FUN4(VAR2->VAR14))
                {
                    VAR33 *VAR35 = (VAR33 *)VAR25;
                    for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                    {
                        for (VAR17 = 0; VAR17 < VAR18; VAR17++)
                        {
                            VAR41;
                        }
                        VAR35 += VAR9[VAR15] / 2;
                        VAR34 += VAR5[VAR15] / 2;
                    }
                    if (VAR32 > VAR31)
                    {
                        FUN11(int VAR36 = FUN8(&VAR34[VAR17]); FUN9(&VAR35[VAR17], (VAR36 << 1) | (VAR36 >> 9)));
                    }
                    else if (VAR32 < VAR31)
                    {
                        FUN12(VAR35, VAR9[VAR15] / 2, VAR42, VAR34, VAR5[VAR15] / 2, VAR43, VAR44, 1, VAR45);
                    }
                    else
                    {
                        FUN11(FUN9(&VAR35[VAR17], FUN8(&VAR34[VAR17])));
                    }
                    if (FUN6(VAR2->VAR14))
                    {
                        if (FUN6(VAR2->VAR12))
                        {
                            FUN13(VAR37, VAR38);
                        }
                        else
                        {
                            FUN13(VAR39, VAR38);
                        }
                    }
                    else
                    {
                        if (FUN6(VAR2->VAR12))
                        {
                            FUN13(VAR37, VAR40);
                        }
                        else
                        {
                            FUN13(VAR39, VAR40);
                        }
                    }
                }
                else
                {
                    if (VAR31 == 9)
                    {
                        FUN12(VAR25, VAR9[VAR15], VAR46, VAR34, VAR5[VAR15] / 2, VAR43, VAR44, 1, VAR47);
                    }
                    else
                    {
                        FUN12(VAR25, VAR9[VAR15], VAR46, VAR34, VAR5[VAR15] / 2, VAR43, VAR48, 2, VAR47);
                    }
                    if (FUN6(VAR2->VAR12))
                    {
                        FUN14(VAR37);
                    }
                    else
                    {
                        FUN14(VAR39);
                    }
                }
            }
            else if (FUN4(VAR2->VAR14))
            {
                const int VAR32 = VAR13->VAR29[VAR15].VAR30 + 1;
                VAR33 *VAR35 = (VAR33 *)VAR25;
                if (FUN3(VAR2->VAR12))
                {
                    const VAR33 *VAR34 = (const VAR33 *)VAR24;
                    if (VAR32 == 9)
                    {
                        FUN12(VAR35, VAR9[VAR15] / 2, VAR42, VAR34, VAR5[VAR15] / 2, VAR43, VAR49, 7, VAR45);
                    }
                    else
                    {
                        FUN12(VAR35, VAR9[VAR15] / 2, VAR42, VAR34, VAR5[VAR15] / 2, VAR43, VAR50, 6, VAR51);
                    }
                    if (FUN6(VAR2->VAR14))
                    {
                        if (FUN6(VAR2->VAR12))
                        {
                            FUN15(VAR37, VAR38);
                        }
                        else
                        {
                            FUN15(VAR39, VAR38);
                        }
                    }
                    else
                    {
                        if (FUN6(VAR2->VAR12))
                        {
                            FUN15(VAR37, VAR40);
                        }
                        else
                        {
                            FUN15(VAR39, VAR40);
                        }
                    }
                }
                else
                {
                    if (VAR26)
                    {
                        for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                        {
                            for (VAR17 = 0; VAR17 < VAR18; VAR17++)
                            {
                                const int VAR36 = VAR24[VAR17];
                                FUN9(&VAR35[VAR17], VAR36 << (VAR32 - 8));
                            }
                            VAR35 += VAR9[VAR15] / 2;
                            VAR24 += VAR5[VAR15];
                        }
                    }
                    else
                    {
                        for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                        {
                            for (VAR17 = 0; VAR17 < VAR18; VAR17++)
                            {
                                const int VAR36 = VAR24[VAR17];
                                FUN9(&VAR35[VAR17], (VAR36 << (VAR32 - 8)) | (VAR36 >> (16 - VAR32)));
                            }
                            VAR35 += VAR9[VAR15] / 2;
                            VAR24 += VAR5[VAR15];
                        }
                    }
                    if (FUN6(VAR2->VAR14))
                    {
                        FUN16(VAR38);
                    }
                    else
                    {
                        FUN16(VAR40);
                    }
                }
            }
            else if (FUN3(VAR2->VAR12) && !FUN3(VAR2->VAR14))
            {
                const VAR33 *VAR34 = (const VAR33 *)VAR24;
                FUN12(VAR25, VAR9[VAR15], VAR46, VAR34, VAR5[VAR15] / 2, VAR43, VAR52, 8, VAR47);
                if (FUN6(VAR2->VAR12))
                {
                    FUN17(VAR37);
                }
                else
                {
                    FUN17(VAR39);
                }
            }
            else if (!FUN3(VAR2->VAR12) && FUN3(VAR2->VAR14))
            {
                for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                {
                    for (VAR17 = 0; VAR17 < VAR18; VAR17++)
                    {
                        VAR25[VAR17 << 1] = VAR24[VAR17];
                        VAR25[(VAR17 << 1) + 1] = VAR24[VAR17];
                    }
                    VAR24 += VAR5[VAR15];
                    VAR25 += VAR9[VAR15];
                }
            }
            else if (FUN3(VAR2->VAR12) && FUN3(VAR2->VAR14) && FUN6(VAR2->VAR12) != FUN6(VAR2->VAR14))
            {
                for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                {
                    for (VAR17 = 0; VAR17 < VAR18; VAR17++)
                        ((VAR33 *)VAR25)[VAR17] = FUN18(((const VAR33 *)VAR24)[VAR17]);
                    VAR24 += VAR5[VAR15];
                    VAR25 += VAR9[VAR15];
                }
            }
            else if (VAR9[VAR15] == VAR5[VAR15] && VAR5[VAR15] > 0 && VAR5[VAR15] == VAR18)
            {
                memcpy(VAR8[VAR15] + VAR9[VAR15] * VAR21, VAR4[VAR15], VAR23 * VAR9[VAR15]);
            }
            else
            {
                if (FUN3(VAR2->VAR12) && FUN3(VAR2->VAR14))
                    VAR18 *= 2;
                else if (!VAR11->VAR29[0].VAR30)
                    VAR18 >>= 3;
                for (VAR16 = 0; VAR16 < VAR23; VAR16++)
                {
                    memcpy(VAR25, VAR24, VAR18);
                    VAR24 += VAR5[VAR15];
                    VAR25 += VAR9[VAR15];
                }
            }
        }
    }
    return VAR7;
}