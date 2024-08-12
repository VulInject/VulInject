static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *const VAR7 = VAR2->VAR8;
    VAR9 *const VAR10 = VAR7->VAR11;
    VAR12 *VAR13 = VAR5;
    const int VAR14 = VAR7->VAR14;
    const int VAR15 = VAR7->VAR15;
    VAR12 *const VAR16 = (VAR12 *)&VAR7->VAR17;
    const int VAR18 = VAR2->VAR19 + 1;
    FUN2(&VAR7->VAR20, VAR3, VAR4);
    *VAR16 = *VAR13;
    VAR16->VAR21 = VAR22;
    VAR16->VAR23 = 1;
    FUN3(VAR7);
    VAR7->VAR24 = FUN4(&VAR7->VAR20);
    if (VAR2->VAR25 == VAR26)
    {
        int VAR27, VAR28, VAR29;
        const int VAR30 = VAR16->VAR30[0];
        uint16_t VAR31[2048][4];
        int VAR32[3], VAR33[3], VAR34[3];
        for (VAR29 = 0; VAR29 < 3; VAR29++)
        {
            VAR31[0][VAR29] = 1 << (9 - 1);
        }
        for (VAR28 = 0; VAR28 < VAR15; VAR28++)
        {
            const int VAR35 = VAR28 ? VAR18 : 1;
            VAR36 *VAR37 = VAR16->VAR5[0] + (VAR30 * VAR28);
            for (VAR29 = 0; VAR29 < 3; VAR29++)
            {
                VAR33[VAR29] = VAR32[VAR29] = VAR34[VAR29] = VAR31[0][VAR29];
            }
            for (VAR27 = 0; VAR27 < VAR14; VAR27++)
            {
                VAR31[VAR27][1] = VAR37[4 * VAR27 + 0] - VAR37[4 * VAR27 + 1] + 0x100;
                VAR31[VAR27][2] = VAR37[4 * VAR27 + 2] - VAR37[4 * VAR27 + 1] + 0x100;
                VAR31[VAR27][0] = (VAR37[4 * VAR27 + 0] + 2 * VAR37[4 * VAR27 + 1] + VAR37[4 * VAR27 + 2]) >> 2;
                for (VAR29 = 0; VAR29 < 3; VAR29++)
                {
                    int VAR38, VAR39;
                    FUN5(VAR38, VAR34[VAR29], VAR33[VAR29], VAR32[VAR29], VAR35);
                    VAR34[VAR29] = VAR33[VAR29];
                    VAR33[VAR29] = VAR31[VAR27 + 1][VAR29];
                    VAR32[VAR29] = VAR31[VAR27][VAR29];
                    VAR39 = ((VAR32[VAR29] - VAR38 + 0x100) & 0x1FF) - 0x100;
                    if (VAR29 == 0)
                        FUN6(VAR7, VAR39, VAR10->VAR40, VAR10->VAR41);
                    else
                        FUN6(VAR7, VAR39, VAR10->VAR42, VAR10->VAR43);
                }
            }
        }
    }
    else
    {
        int VAR44, VAR45, VAR29;
        const int VAR46 = (VAR14 + VAR7->VAR47[0] - 1) / VAR7->VAR47[0];
        const int VAR48 = (VAR15 + VAR7->VAR49[0] - 1) / VAR7->VAR49[0];
        for (VAR45 = 0; VAR45 < VAR48; VAR45++)
        {
            for (VAR44 = 0; VAR44 < VAR46; VAR44++)
            {
                if (VAR44 == 0 || VAR45 == 0)
                {
                    for (VAR29 = 0; VAR29 < 3; VAR29++)
                    {
                        VAR36 *VAR37;
                        int VAR27, VAR28, VAR50, VAR51, VAR30;
                        VAR50 = VAR7->VAR47[VAR29];
                        VAR51 = VAR7->VAR49[VAR29];
                        VAR30 = VAR16->VAR30[VAR29];
                        for (VAR28 = 0; VAR28 < VAR51; VAR28++)
                        {
                            for (VAR27 = 0; VAR27 < VAR50; VAR27++)
                            {
                                int VAR38;
                                VAR37 = VAR16->VAR5[VAR29] + (VAR30 * (VAR51 * VAR45 + VAR28)) + (VAR50 * VAR44 + VAR27);
                                if (VAR28 == 0 && VAR45 == 0)
                                {
                                    if (VAR27 == 0 && VAR44 == 0)
                                    {
                                        VAR38 = 128;
                                    }
                                    else
                                    {
                                        VAR38 = VAR37[-1];
                                    }
                                }
                                else
                                {
                                    if (VAR27 == 0 && VAR44 == 0)
                                    {
                                        VAR38 = VAR37[-VAR30];
                                    }
                                    else
                                    {
                                        FUN5(VAR38, VAR37[-VAR30 - 1], VAR37[-VAR30], VAR37[-1], VAR18);
                                    }
                                }
                                if (VAR29 == 0)
                                    FUN6(VAR7, (VAR52)(*VAR37 - VAR38), VAR10->VAR40, VAR10->VAR41);
                                else
                                    FUN6(VAR7, (VAR52)(*VAR37 - VAR38), VAR10->VAR42, VAR10->VAR43);
                            }
                        }
                    }
                }
                else
                {
                    for (VAR29 = 0; VAR29 < 3; VAR29++)
                    {
                        VAR36 *VAR37;
                        int VAR27, VAR28, VAR50, VAR51, VAR30;
                        VAR50 = VAR7->VAR47[VAR29];
                        VAR51 = VAR7->VAR49[VAR29];
                        VAR30 = VAR16->VAR30[VAR29];
                        for (VAR28 = 0; VAR28 < VAR51; VAR28++)
                        {
                            for (VAR27 = 0; VAR27 < VAR50; VAR27++)
                            {
                                int VAR38;
                                VAR37 = VAR16->VAR5[VAR29] + (VAR30 * (VAR51 * VAR45 + VAR28)) + (VAR50 * VAR44 + VAR27);
                                FUN5(VAR38, VAR37[-VAR30 - 1], VAR37[-VAR30], VAR37[-1], VAR18);
                                if (VAR29 == 0)
                                    FUN6(VAR7, (VAR52)(*VAR37 - VAR38), VAR10->VAR40, VAR10->VAR41);
                                else
                                    FUN6(VAR7, (VAR52)(*VAR37 - VAR38), VAR10->VAR42, VAR10->VAR43);
                            }
                        }
                    }
                }
            }
        }
    }
    FUN7();
    FUN8(VAR7);
    VAR7->VAR53++;
    FUN9(&VAR7->VAR20);
    return FUN10(&VAR7->VAR20) - VAR7->VAR20.VAR3;
}