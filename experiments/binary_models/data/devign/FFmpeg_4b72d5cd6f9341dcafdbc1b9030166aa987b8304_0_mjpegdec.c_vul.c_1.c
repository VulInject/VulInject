static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10 = (VAR2->VAR10 + 7) & ~7;
    int VAR11 = 0;
    int VAR12 = 0;
    VAR4 += VAR10 - VAR2->VAR10;
    VAR9 = ((1 << VAR2->VAR10) - 1) << VAR4;
    FUN2(VAR5 >= 1 && VAR5 <= 4);
    for (VAR8 = 0; VAR8 < VAR2->VAR13; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
        {
            if (FUN3(&VAR2->VAR15) < 1)
            {
                FUN4(VAR2->VAR16, VAR17, "");
                return VAR18;
            }
            if (VAR2->VAR19 && !VAR2->VAR20)
            {
                VAR2->VAR20 = VAR2->VAR19;
                VAR12 = VAR7;
                VAR11 = VAR8;
            }
            if (!VAR7 || VAR8 == VAR11 || VAR8 == VAR11 + 1 && VAR7 < VAR12 || VAR2->VAR21)
            {
                int VAR22 = VAR8 == VAR11 || VAR8 == VAR11 + 1 && VAR7 < VAR12;
                int VAR23 = !VAR7 || VAR8 == VAR11 && VAR7 == VAR12;
                for (VAR6 = 0; VAR6 < VAR5; VAR6++)
                {
                    VAR24 *VAR25;
                    VAR26 *VAR27;
                    int VAR28, VAR29, VAR30, VAR31, VAR32, VAR33, VAR34, VAR35;
                    VAR28 = VAR2->VAR36[VAR6];
                    VAR33 = VAR2->VAR37[VAR6];
                    VAR29 = VAR2->VAR38[VAR6];
                    VAR30 = VAR2->VAR39[VAR6];
                    VAR31 = 0;
                    VAR32 = 0;
                    VAR35 = VAR2->VAR35[VAR33];
                    if (VAR10 > 8)
                        VAR35 /= 2;
                    for (VAR34 = 0; VAR34 < VAR28; VAR34++)
                    {
                        int VAR40, VAR41;
                        VAR41 = FUN5(VAR2, VAR2->VAR42[VAR6]);
                        if (VAR41 == 0xFFFFF)
                            return -1;
                        if (VAR29 * VAR7 + VAR31 >= VAR2->VAR43 || VAR30 * VAR8 + VAR32 >= VAR2->VAR44)
                        {
                        }
                        else if (VAR10 <= 8)
                        {
                            VAR25 = VAR2->VAR45->VAR46[VAR33] + (VAR35 * (VAR30 * VAR8 + VAR32)) + (VAR29 * VAR7 + VAR31);
                            if (VAR32 == 0 && VAR22)
                            {
                                if (VAR31 == 0 && VAR23)
                                {
                                    VAR40 = 1 << (VAR10 - 1);
                                }
                                else
                                {
                                    VAR40 = VAR25[-1];
                                }
                            }
                            else
                            {
                                if (VAR31 == 0 && VAR23)
                                {
                                    VAR40 = VAR25[-VAR35];
                                }
                                else
                                {
                                    FUN6(VAR40, VAR25[-VAR35 - 1], VAR25[-VAR35], VAR25[-1], VAR3);
                                }
                            }
                            if (VAR2->VAR21 && VAR2->VAR47)
                                VAR25 += VAR35 >> 1;
                            VAR40 &= VAR9;
                            *VAR25 = VAR40 + ((unsigned)VAR41 << VAR4);
                        }
                        else
                        {
                            VAR27 = (VAR26 *)(VAR2->VAR45->VAR46[VAR33] + 2 * (VAR35 * (VAR30 * VAR8 + VAR32)) + 2 * (VAR29 * VAR7 + VAR31));
                            if (VAR32 == 0 && VAR22)
                            {
                                if (VAR31 == 0 && VAR23)
                                {
                                    VAR40 = 1 << (VAR10 - 1);
                                }
                                else
                                {
                                    VAR40 = VAR27[-1];
                                }
                            }
                            else
                            {
                                if (VAR31 == 0 && VAR23)
                                {
                                    VAR40 = VAR27[-VAR35];
                                }
                                else
                                {
                                    FUN6(VAR40, VAR27[-VAR35 - 1], VAR27[-VAR35], VAR27[-1], VAR3);
                                }
                            }
                            if (VAR2->VAR21 && VAR2->VAR47)
                                VAR27 += VAR35 >> 1;
                            VAR40 &= VAR9;
                            *VAR27 = VAR40 + (VAR41 << VAR4);
                        }
                        if (++VAR31 == VAR29)
                        {
                            VAR31 = 0;
                            VAR32++;
                        }
                    }
                }
            }
            else
            {
                for (VAR6 = 0; VAR6 < VAR5; VAR6++)
                {
                    VAR24 *VAR25;
                    VAR26 *VAR27;
                    int VAR28, VAR29, VAR30, VAR31, VAR32, VAR33, VAR34, VAR35, VAR41;
                    VAR28 = VAR2->VAR36[VAR6];
                    VAR33 = VAR2->VAR37[VAR6];
                    VAR29 = VAR2->VAR38[VAR6];
                    VAR30 = VAR2->VAR39[VAR6];
                    VAR31 = 0;
                    VAR32 = 0;
                    VAR35 = VAR2->VAR35[VAR33];
                    if (VAR10 > 8)
                        VAR35 /= 2;
                    for (VAR34 = 0; VAR34 < VAR28; VAR34++)
                    {
                        int VAR40;
                        VAR41 = FUN5(VAR2, VAR2->VAR42[VAR6]);
                        if (VAR41 == 0xFFFFF)
                            return -1;
                        if (VAR29 * VAR7 + VAR31 >= VAR2->VAR43 || VAR30 * VAR8 + VAR32 >= VAR2->VAR44)
                        {
                        }
                        else if (VAR10 <= 8)
                        {
                            VAR25 = VAR2->VAR45->VAR46[VAR33] + (VAR35 * (VAR30 * VAR8 + VAR32)) + (VAR29 * VAR7 + VAR31);
                            FUN6(VAR40, VAR25[-VAR35 - 1], VAR25[-VAR35], VAR25[-1], VAR3);
                            VAR40 &= VAR9;
                            *VAR25 = VAR40 + (VAR41 << VAR4);
                        }
                        else
                        {
                            VAR27 = (VAR26 *)(VAR2->VAR45->VAR46[VAR33] + 2 * (VAR35 * (VAR30 * VAR8 + VAR32)) + 2 * (VAR29 * VAR7 + VAR31));
                            FUN6(VAR40, VAR27[-VAR35 - 1], VAR27[-VAR35], VAR27[-1], VAR3);
                            VAR40 &= VAR9;
                            *VAR27 = VAR40 + (VAR41 << VAR4);
                        }
                        if (++VAR31 == VAR29)
                        {
                            VAR31 = 0;
                            VAR32++;
                        }
                    }
                }
            }
            if (VAR2->VAR19 && !--VAR2->VAR20)
            {
                FUN7(&VAR2->VAR15);
                FUN8(&VAR2->VAR15, 16);
            }
        }
    }
    return 0;
}