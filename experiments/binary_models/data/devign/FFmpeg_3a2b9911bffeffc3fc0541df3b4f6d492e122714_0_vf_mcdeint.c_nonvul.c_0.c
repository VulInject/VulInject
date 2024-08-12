static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4[3], VAR3 *VAR5[3], int VAR6[3], int VAR7[3], int VAR8, int VAR9)
{
    int VAR10, VAR11, VAR12;
    for (VAR12 = 0; VAR12 < 3; VAR12++)
    {
        VAR2->VAR13->VAR14[VAR12] = VAR5[VAR12];
        VAR2->VAR13->VAR15[VAR12] = VAR7[VAR12];
    }
    VAR2->VAR16->VAR17 = VAR2->VAR16->VAR18 = VAR19;
    VAR2->VAR13->VAR20 = VAR2->VAR21 * VAR22;
    FUN2(VAR2->VAR16, VAR2->VAR23, VAR2->VAR24, VAR2->VAR13);
    VAR2->VAR25 = VAR2->VAR16->VAR26;
    for (VAR12 = 0; VAR12 < 3; VAR12++)
    {
        int VAR27 = !!VAR12;
        int VAR28 = VAR8 >> VAR27;
        int VAR29 = VAR9 >> VAR27;
        int VAR30 = VAR2->VAR25->VAR15[VAR12];
        int VAR31 = VAR7[VAR12];
        for (VAR11 = 0; VAR11 < VAR29; VAR11++)
        {
            if ((VAR11 ^ VAR2->VAR32) & 1)
            {
                for (VAR10 = 0; VAR10 < VAR28; VAR10++)
                {
                    if (VAR11 > 0 && VAR11 < VAR29 - 1)
                    {
                        int VAR33 = VAR10 < 3 || VAR10 > VAR28 - 4;
                        VAR3 *VAR34 = &VAR2->VAR25->VAR14[VAR12][VAR10 + VAR11 * VAR30];
                        VAR3 *VAR35 = &VAR5[VAR12][VAR10 + VAR11 * VAR31];
                        int VAR36 = VAR34[-VAR30] - VAR35[-VAR31];
                        int VAR37 = VAR34[+VAR30] - VAR35[+VAR31];
                        int VAR38 = VAR34[0];
                        FUN3(VAR35[-VAR31 + FUN4(-1 + (VAR39))] - VAR35[+VAR31 + FUN4(-1 - (VAR39))]) + FUN3(VAR35[-VAR31 + FUN4(VAR39)] - VAR35[+VAR31 + FUN4(-(VAR39))]) + FUN3(VAR35[-VAR31 + FUN4(1 + (VAR39))] - VAR35[+VAR31 + FUN4(1 - (VAR39))]) FUN3(VAR35[-VAR31 - 1 + (VAR39)] - VAR35[+VAR31 - 1 - (VAR39)]) + FUN3(VAR35[-VAR31 + (VAR39)] - VAR35[+VAR31 - (VAR39)]) + FUN3(VAR35[-VAR31 + 1 + (VAR39)] - VAR35[+VAR31 + 1 - (VAR39)])
                        {
                            int VAR40 = FUN5(VAR39);
                            if (VAR40 < VAR41)
                            {
                                VAR41 = VAR40;
                                VAR36 = VAR34[-VAR30 + FUN4(VAR39)] - VAR35[-VAR31 + FUN4(VAR39)];
                                VAR37 = VAR34[+VAR30 + FUN4(-(VAR39))] - VAR35[+VAR31 + FUN4(-(VAR39))];
                                {
                                    int VAR40 = FUN6(VAR39);
                                    if (VAR40 < VAR41)
                                    {
                                        VAR41 = VAR40;
                                        VAR36 = VAR34[-VAR30 + (VAR39)] - VAR35[-VAR31 + (VAR39)];
                                        VAR37 = VAR34[+VAR30 - (VAR39)] - VAR35[+VAR31 - (VAR39)];
                                        if (VAR33)
                                        {
                                            int VAR41 = FUN5(0) - 1;
                                            FUN7(-1)
                                            FUN7(-2)
                                        }
                                    }
                                }
                            }
                            FUN7(1)
                            FUN7(2)
                        }
                    }
                }
            }
        }
        else
        {
            int VAR41 = FUN6(0) - 1;
            FUN8(-1)
            FUN8(-2)
        }
    }
}
}