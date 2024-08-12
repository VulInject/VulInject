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
            if (VAR2->VAR15 && !VAR2->VAR16)
            {
                VAR2->VAR16 = VAR2->VAR15;
                VAR12 = VAR7;
                VAR11 = VAR8;
            }
            if (!VAR7 || VAR8 == VAR11 || VAR8 == VAR11 + 1 && VAR7 < VAR12 || VAR2->VAR17)
            {
                int VAR18 = VAR8 == VAR11 || VAR8 == VAR11 + 1 && VAR7 < VAR12;
                int VAR19 = !VAR7 || VAR8 == VAR11 && VAR7 == VAR12;
                for (VAR6 = 0; VAR6 < VAR5; VAR6++)
                {
                    VAR20 *VAR21;
                    VAR22 *VAR23;
                    int VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30, VAR31;
                    VAR24 = VAR2->VAR32[VAR6];
                    VAR29 = VAR2->VAR33[VAR6];
                    VAR25 = VAR2->VAR34[VAR6];
                    VAR26 = VAR2->VAR35[VAR6];
                    VAR27 = 0;
                    VAR28 = 0;
                    VAR31 = VAR2->VAR31[VAR29];
                    if (VAR10 > 8)
                        VAR31 /= 2;
                    for (VAR30 = 0; VAR30 < VAR24; VAR30++)
                    {
                        int VAR36, VAR37;
                        VAR37 = FUN3(VAR2, VAR2->VAR38[VAR6]);
                        if (VAR37 == 0xFFFFF)
                            return -1;
                        if (VAR25 * VAR7 + VAR27 >= VAR2->VAR39 || VAR26 * VAR8 + VAR28 >= VAR2->VAR40)
                        {
                        }
                        else if (VAR10 <= 8)
                        {
                            VAR21 = VAR2->VAR41->VAR42[VAR29] + (VAR31 * (VAR26 * VAR8 + VAR28)) + (VAR25 * VAR7 + VAR27);
                            if (VAR28 == 0 && VAR18)
                            {
                                if (VAR27 == 0 && VAR19)
                                {
                                    VAR36 = 1 << (VAR10 - 1);
                                }
                                else
                                {
                                    VAR36 = VAR21[-1];
                                }
                            }
                            else
                            {
                                if (VAR27 == 0 && VAR19)
                                {
                                    VAR36 = VAR21[-VAR31];
                                }
                                else
                                {
                                    FUN4(VAR36, VAR21[-VAR31 - 1], VAR21[-VAR31], VAR21[-1], VAR3);
                                }
                            }
                            if (VAR2->VAR17 && VAR2->VAR43)
                                VAR21 += VAR31 >> 1;
                            VAR36 &= VAR9;
                            *VAR21 = VAR36 + (VAR37 << VAR4);
                        }
                        else
                        {
                            VAR23 = (VAR22 *)(VAR2->VAR41->VAR42[VAR29] + 2 * (VAR31 * (VAR26 * VAR8 + VAR28)) + 2 * (VAR25 * VAR7 + VAR27));
                            if (VAR28 == 0 && VAR18)
                            {
                                if (VAR27 == 0 && VAR19)
                                {
                                    VAR36 = 1 << (VAR10 - 1);
                                }
                                else
                                {
                                    VAR36 = VAR23[-1];
                                }
                            }
                            else
                            {
                                if (VAR27 == 0 && VAR19)
                                {
                                    VAR36 = VAR23[-VAR31];
                                }
                                else
                                {
                                    FUN4(VAR36, VAR23[-VAR31 - 1], VAR23[-VAR31], VAR23[-1], VAR3);
                                }
                            }
                            if (VAR2->VAR17 && VAR2->VAR43)
                                VAR23 += VAR31 >> 1;
                            VAR36 &= VAR9;
                            *VAR23 = VAR36 + (VAR37 << VAR4);
                        }
                        if (++VAR27 == VAR25)
                        {
                            VAR27 = 0;
                            VAR28++;
                        }
                    }
                }
            }
            else
            {
                for (VAR6 = 0; VAR6 < VAR5; VAR6++)
                {
                    VAR20 *VAR21;
                    VAR22 *VAR23;
                    int VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30, VAR31, VAR37;
                    VAR24 = VAR2->VAR32[VAR6];
                    VAR29 = VAR2->VAR33[VAR6];
                    VAR25 = VAR2->VAR34[VAR6];
                    VAR26 = VAR2->VAR35[VAR6];
                    VAR27 = 0;
                    VAR28 = 0;
                    VAR31 = VAR2->VAR31[VAR29];
                    if (VAR10 > 8)
                        VAR31 /= 2;
                    for (VAR30 = 0; VAR30 < VAR24; VAR30++)
                    {
                        int VAR36;
                        VAR37 = FUN3(VAR2, VAR2->VAR38[VAR6]);
                        if (VAR37 == 0xFFFFF)
                            return -1;
                        if (VAR25 * VAR7 + VAR27 >= VAR2->VAR39 || VAR26 * VAR8 + VAR28 >= VAR2->VAR40)
                        {
                        }
                        else if (VAR10 <= 8)
                        {
                            VAR21 = VAR2->VAR41->VAR42[VAR29] + (VAR31 * (VAR26 * VAR8 + VAR28)) + (VAR25 * VAR7 + VAR27);
                            FUN4(VAR36, VAR21[-VAR31 - 1], VAR21[-VAR31], VAR21[-1], VAR3);
                            VAR36 &= VAR9;
                            *VAR21 = VAR36 + (VAR37 << VAR4);
                        }
                        else
                        {
                            VAR23 = (VAR22 *)(VAR2->VAR41->VAR42[VAR29] + 2 * (VAR31 * (VAR26 * VAR8 + VAR28)) + 2 * (VAR25 * VAR7 + VAR27));
                            FUN4(VAR36, VAR23[-VAR31 - 1], VAR23[-VAR31], VAR23[-1], VAR3);
                            VAR36 &= VAR9;
                            *VAR23 = VAR36 + (VAR37 << VAR4);
                        }
                        if (++VAR27 == VAR25)
                        {
                            VAR27 = 0;
                            VAR28++;
                        }
                    }
                }
            }
            if (VAR2->VAR15 && !--VAR2->VAR16)
            {
                FUN5(&VAR2->VAR44);
                FUN6(&VAR2->VAR44, 16);
            }
        }
    }
    return 0;
}