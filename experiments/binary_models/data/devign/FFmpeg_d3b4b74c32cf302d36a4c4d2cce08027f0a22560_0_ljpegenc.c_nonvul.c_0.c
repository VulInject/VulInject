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
        FUN5(*VAR31)[4] = (void *)VAR7->VAR32;
        int VAR33[3], VAR34[3], VAR35[3];
        for (VAR29 = 0; VAR29 < 3; VAR29++)
        {
            VAR31[0][VAR29] = 1 << (9 - 1);
        }
        for (VAR28 = 0; VAR28 < VAR15; VAR28++)
        {
            const int VAR36 = VAR28 ? VAR18 : 1;
            VAR37 *VAR38 = VAR16->VAR5[0] + (VAR30 * VAR28);
            if (VAR7->VAR20.VAR39 - VAR7->VAR20.VAR3 - (FUN4(&VAR7->VAR20) >> 3) < VAR14 * 3 * 4)
            {
                FUN6(VAR7->VAR2, VAR40, "");
                return -1;
            }
            for (VAR29 = 0; VAR29 < 3; VAR29++)
            {
                VAR34[VAR29] = VAR33[VAR29] = VAR35[VAR29] = VAR31[0][VAR29];
            }
            for (VAR27 = 0; VAR27 < VAR14; VAR27++)
            {
                VAR31[VAR27][1] = VAR38[4 * VAR27 + 0] - VAR38[4 * VAR27 + 1] + 0x100;
                VAR31[VAR27][2] = VAR38[4 * VAR27 + 2] - VAR38[4 * VAR27 + 1] + 0x100;
                VAR31[VAR27][0] = (VAR38[4 * VAR27 + 0] + 2 * VAR38[4 * VAR27 + 1] + VAR38[4 * VAR27 + 2]) >> 2;
                for (VAR29 = 0; VAR29 < 3; VAR29++)
                {
                    int VAR41, VAR42;
                    FUN7(VAR41, VAR35[VAR29], VAR34[VAR29], VAR33[VAR29], VAR36);
                    VAR35[VAR29] = VAR34[VAR29];
                    VAR34[VAR29] = VAR31[VAR27 + 1][VAR29];
                    VAR33[VAR29] = VAR31[VAR27][VAR29];
                    VAR42 = ((VAR33[VAR29] - VAR41 + 0x100) & 0x1FF) - 0x100;
                    if (VAR29 == 0)
                        FUN8(VAR7, VAR42, VAR10->VAR43, VAR10->VAR44);
                    else
                        FUN8(VAR7, VAR42, VAR10->VAR45, VAR10->VAR46);
                }
            }
        }
    }
    else
    {
        int VAR47, VAR48, VAR29;
        const int VAR49 = (VAR14 + VAR7->VAR50[0] - 1) / VAR7->VAR50[0];
        const int VAR51 = (VAR15 + VAR7->VAR52[0] - 1) / VAR7->VAR52[0];
        for (VAR48 = 0; VAR48 < VAR51; VAR48++)
        {
            if (VAR7->VAR20.VAR39 - VAR7->VAR20.VAR3 - (FUN4(&VAR7->VAR20) >> 3) < VAR49 * 4 * 3 * VAR7->VAR50[0] * VAR7->VAR52[0])
            {
                FUN6(VAR7->VAR2, VAR40, "");
                return -1;
            }
            for (VAR47 = 0; VAR47 < VAR49; VAR47++)
            {
                if (VAR47 == 0 || VAR48 == 0)
                {
                    for (VAR29 = 0; VAR29 < 3; VAR29++)
                    {
                        VAR37 *VAR38;
                        int VAR27, VAR28, VAR53, VAR54, VAR30;
                        VAR53 = VAR7->VAR50[VAR29];
                        VAR54 = VAR7->VAR52[VAR29];
                        VAR30 = VAR16->VAR30[VAR29];
                        for (VAR28 = 0; VAR28 < VAR54; VAR28++)
                        {
                            for (VAR27 = 0; VAR27 < VAR53; VAR27++)
                            {
                                int VAR41;
                                VAR38 = VAR16->VAR5[VAR29] + (VAR30 * (VAR54 * VAR48 + VAR28)) + (VAR53 * VAR47 + VAR27);
                                if (VAR28 == 0 && VAR48 == 0)
                                {
                                    if (VAR27 == 0 && VAR47 == 0)
                                    {
                                        VAR41 = 128;
                                    }
                                    else
                                    {
                                        VAR41 = VAR38[-1];
                                    }
                                }
                                else
                                {
                                    if (VAR27 == 0 && VAR47 == 0)
                                    {
                                        VAR41 = VAR38[-VAR30];
                                    }
                                    else
                                    {
                                        FUN7(VAR41, VAR38[-VAR30 - 1], VAR38[-VAR30], VAR38[-1], VAR18);
                                    }
                                }
                                if (VAR29 == 0)
                                    FUN8(VAR7, *VAR38 - VAR41, VAR10->VAR43, VAR10->VAR44);
                                else
                                    FUN8(VAR7, *VAR38 - VAR41, VAR10->VAR45, VAR10->VAR46);
                            }
                        }
                    }
                }
                else
                {
                    for (VAR29 = 0; VAR29 < 3; VAR29++)
                    {
                        VAR37 *VAR38;
                        int VAR27, VAR28, VAR53, VAR54, VAR30;
                        VAR53 = VAR7->VAR50[VAR29];
                        VAR54 = VAR7->VAR52[VAR29];
                        VAR30 = VAR16->VAR30[VAR29];
                        for (VAR28 = 0; VAR28 < VAR54; VAR28++)
                        {
                            for (VAR27 = 0; VAR27 < VAR53; VAR27++)
                            {
                                int VAR41;
                                VAR38 = VAR16->VAR5[VAR29] + (VAR30 * (VAR54 * VAR48 + VAR28)) + (VAR53 * VAR47 + VAR27);
                                FUN7(VAR41, VAR38[-VAR30 - 1], VAR38[-VAR30], VAR38[-1], VAR18);
                                if (VAR29 == 0)
                                    FUN8(VAR7, *VAR38 - VAR41, VAR10->VAR43, VAR10->VAR44);
                                else
                                    FUN8(VAR7, *VAR38 - VAR41, VAR10->VAR45, VAR10->VAR46);
                            }
                        }
                    }
                }
            }
        }
    }
    FUN9();
    FUN10(VAR7);
    VAR7->VAR55++;
    FUN11(&VAR7->VAR20);
    return FUN12(&VAR7->VAR20) - VAR7->VAR20.VAR3;
}